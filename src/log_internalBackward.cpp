#include "seqHMM.h"
using namespace Rcpp;

void log_internalBackward(const arma::mat& transition, const arma::cube& emission,
  const arma::icube& obs, arma::cube& beta, int threads) {
  
#pragma omp parallel for if(obs.n_rows >= threads) schedule(static) num_threads(threads) \
  default(none) shared(beta, obs, emission,transition)
    for (int k = 0; k < obs.n_rows; k++) {
      beta.slice(k).col(obs.n_cols - 1).zeros();
      for (int t = obs.n_cols - 2; t >= 0; t--) {
        arma::vec tmpbeta(transition.n_rows);
        for (int i = 0; i < transition.n_rows; i++) {
          tmpbeta = beta.slice(k).col(t + 1) + transition.row(i).t();
          for (int r = 0; r < obs.n_slices; r++) {
            tmpbeta += emission.slice(r).col(obs(k, t + 1, r));
          }
          beta(i, t, k) = logSumExp(tmpbeta);
        }
      }
    }
}

void log_internalBackward_single(const arma::mat& transition, const arma::cube& emission,
  const arma::icube& obs, arma::mat& beta, int k) {
  beta.col(obs.n_cols - 1).zeros();
  for (int t = obs.n_cols - 2; t >= 0; t--) {
    arma::vec tmpbeta(transition.n_rows);
    for (int i = 0; i < transition.n_rows; i++) {
      tmpbeta = beta.col(t + 1) + transition.row(i).t();
      for (int r = 0; r < obs.n_slices; r++) {
        tmpbeta += emission.slice(r).col(obs(k, t + 1, r));
      }
      beta(i, t) = logSumExp(tmpbeta);
    }
  }
}
