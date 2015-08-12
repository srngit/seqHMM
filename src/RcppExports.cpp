// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// backward
NumericVector backward(NumericVector transitionMatrix, NumericVector emissionArray, IntegerVector obsArray);
RcppExport SEXP seqHMM_backward(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP obsArraySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    __result = Rcpp::wrap(backward(transitionMatrix, emissionArray, obsArray));
    return __result;
END_RCPP
}
// backwardMC
NumericVector backwardMC(NumericVector transitionMatrix, NumericVector emissionArray, IntegerVector obsArray);
RcppExport SEXP seqHMM_backwardMC(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP obsArraySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    __result = Rcpp::wrap(backwardMC(transitionMatrix, emissionArray, obsArray));
    return __result;
END_RCPP
}
// EM
List EM(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, int nSymbols, int itermax, double tol, int trace);
RcppExport SEXP seqHMM_EM(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP nSymbolsSEXP, SEXP itermaxSEXP, SEXP tolSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< int >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< int >::type itermax(itermaxSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    __result = Rcpp::wrap(EM(transitionMatrix, emissionArray, initialProbs, obsArray, nSymbols, itermax, tol, trace));
    return __result;
END_RCPP
}
// EMMC
List EMMC(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, IntegerVector nSymbols, int itermax, double tol, int trace);
RcppExport SEXP seqHMM_EMMC(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP nSymbolsSEXP, SEXP itermaxSEXP, SEXP tolSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< int >::type itermax(itermaxSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    __result = Rcpp::wrap(EMMC(transitionMatrix, emissionArray, initialProbs, obsArray, nSymbols, itermax, tol, trace));
    return __result;
END_RCPP
}
// EMMCx
List EMMCx(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, IntegerVector nSymbols, NumericMatrix coefs, NumericMatrix X_, IntegerVector numberOfStates, int itermax, double tol, int trace);
RcppExport SEXP seqHMM_EMMCx(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP nSymbolsSEXP, SEXP coefsSEXP, SEXP X_SEXP, SEXP numberOfStatesSEXP, SEXP itermaxSEXP, SEXP tolSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type coefs(coefsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numberOfStates(numberOfStatesSEXP);
    Rcpp::traits::input_parameter< int >::type itermax(itermaxSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    __result = Rcpp::wrap(EMMCx(transitionMatrix, emissionArray, initialProbs, obsArray, nSymbols, coefs, X_, numberOfStates, itermax, tol, trace));
    return __result;
END_RCPP
}
// forward
NumericVector forward(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray);
RcppExport SEXP seqHMM_forward(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    __result = Rcpp::wrap(forward(transitionMatrix, emissionArray, initialProbs, obsArray));
    return __result;
END_RCPP
}
// forwardMC
NumericVector forwardMC(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray);
RcppExport SEXP seqHMM_forwardMC(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    __result = Rcpp::wrap(forwardMC(transitionMatrix, emissionArray, initialProbs, obsArray));
    return __result;
END_RCPP
}
// forwardMCx
NumericVector forwardMCx(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, NumericMatrix coefs, NumericMatrix X_, IntegerVector numberOfStates);
RcppExport SEXP seqHMM_forwardMCx(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP coefsSEXP, SEXP X_SEXP, SEXP numberOfStatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type coefs(coefsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numberOfStates(numberOfStatesSEXP);
    __result = Rcpp::wrap(forwardMCx(transitionMatrix, emissionArray, initialProbs, obsArray, coefs, X_, numberOfStates));
    return __result;
END_RCPP
}
// forwardx
NumericVector forwardx(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, NumericMatrix coefs, NumericMatrix X_, IntegerVector numberOfStates);
RcppExport SEXP seqHMM_forwardx(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP coefsSEXP, SEXP X_SEXP, SEXP numberOfStatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type coefs(coefsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numberOfStates(numberOfStatesSEXP);
    __result = Rcpp::wrap(forwardx(transitionMatrix, emissionArray, initialProbs, obsArray, coefs, X_, numberOfStates));
    return __result;
END_RCPP
}
// gradient
NumericVector gradient(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, NumericVector rowSumsA, NumericVector rowSumsB, double sumInit, IntegerVector transNZ, IntegerVector emissNZ, IntegerVector initNZ, NumericVector expPsi);
RcppExport SEXP seqHMM_gradient(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP rowSumsASEXP, SEXP rowSumsBSEXP, SEXP sumInitSEXP, SEXP transNZSEXP, SEXP emissNZSEXP, SEXP initNZSEXP, SEXP expPsiSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rowSumsA(rowSumsASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rowSumsB(rowSumsBSEXP);
    Rcpp::traits::input_parameter< double >::type sumInit(sumInitSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type transNZ(transNZSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type emissNZ(emissNZSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type initNZ(initNZSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type expPsi(expPsiSEXP);
    __result = Rcpp::wrap(gradient(transitionMatrix, emissionArray, initialProbs, obsArray, rowSumsA, rowSumsB, sumInit, transNZ, emissNZ, initNZ, expPsi));
    return __result;
END_RCPP
}
// gradientMC
NumericVector gradientMC(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, NumericVector rowSumsA, NumericVector rowSumsB_, double sumInit, IntegerVector transNZ, IntegerVector emissNZ, IntegerVector initNZ, NumericVector expPsi);
RcppExport SEXP seqHMM_gradientMC(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP rowSumsASEXP, SEXP rowSumsB_SEXP, SEXP sumInitSEXP, SEXP transNZSEXP, SEXP emissNZSEXP, SEXP initNZSEXP, SEXP expPsiSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rowSumsA(rowSumsASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rowSumsB_(rowSumsB_SEXP);
    Rcpp::traits::input_parameter< double >::type sumInit(sumInitSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type transNZ(transNZSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type emissNZ(emissNZSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type initNZ(initNZSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type expPsi(expPsiSEXP);
    __result = Rcpp::wrap(gradientMC(transitionMatrix, emissionArray, initialProbs, obsArray, rowSumsA, rowSumsB_, sumInit, transNZ, emissNZ, initNZ, expPsi));
    return __result;
END_RCPP
}
// gradientMCx
NumericVector gradientMCx(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, NumericVector rowSumsA, NumericVector rowSumsB_, NumericVector sumInit, IntegerVector transNZ, IntegerVector emissNZ, IntegerVector initNZ, NumericVector expPsi, NumericMatrix coefs, NumericMatrix X_, IntegerVector numberOfStates);
RcppExport SEXP seqHMM_gradientMCx(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP rowSumsASEXP, SEXP rowSumsB_SEXP, SEXP sumInitSEXP, SEXP transNZSEXP, SEXP emissNZSEXP, SEXP initNZSEXP, SEXP expPsiSEXP, SEXP coefsSEXP, SEXP X_SEXP, SEXP numberOfStatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rowSumsA(rowSumsASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rowSumsB_(rowSumsB_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sumInit(sumInitSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type transNZ(transNZSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type emissNZ(emissNZSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type initNZ(initNZSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type expPsi(expPsiSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type coefs(coefsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numberOfStates(numberOfStatesSEXP);
    __result = Rcpp::wrap(gradientMCx(transitionMatrix, emissionArray, initialProbs, obsArray, rowSumsA, rowSumsB_, sumInit, transNZ, emissNZ, initNZ, expPsi, coefs, X_, numberOfStates));
    return __result;
END_RCPP
}
// gradientx
NumericVector gradientx(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, NumericVector rowSumsA, NumericVector rowSumsB, NumericVector sumInit, IntegerVector transNZ, IntegerVector emissNZ, IntegerVector initNZ, NumericVector expPsi, NumericMatrix coefs, NumericMatrix X_, IntegerVector numberOfStates);
RcppExport SEXP seqHMM_gradientx(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP rowSumsASEXP, SEXP rowSumsBSEXP, SEXP sumInitSEXP, SEXP transNZSEXP, SEXP emissNZSEXP, SEXP initNZSEXP, SEXP expPsiSEXP, SEXP coefsSEXP, SEXP X_SEXP, SEXP numberOfStatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rowSumsA(rowSumsASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rowSumsB(rowSumsBSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sumInit(sumInitSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type transNZ(transNZSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type emissNZ(emissNZSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type initNZ(initNZSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type expPsi(expPsiSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type coefs(coefsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numberOfStates(numberOfStatesSEXP);
    __result = Rcpp::wrap(gradientx(transitionMatrix, emissionArray, initialProbs, obsArray, rowSumsA, rowSumsB, sumInit, transNZ, emissNZ, initNZ, expPsi, coefs, X_, numberOfStates));
    return __result;
END_RCPP
}
// logLikHMM
NumericVector logLikHMM(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray);
RcppExport SEXP seqHMM_logLikHMM(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    __result = Rcpp::wrap(logLikHMM(transitionMatrix, emissionArray, initialProbs, obsArray));
    return __result;
END_RCPP
}
// logLikMCHMM
NumericVector logLikMCHMM(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray);
RcppExport SEXP seqHMM_logLikMCHMM(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    __result = Rcpp::wrap(logLikMCHMM(transitionMatrix, emissionArray, initialProbs, obsArray));
    return __result;
END_RCPP
}
// logLikMixHMM
NumericVector logLikMixHMM(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, NumericMatrix coefs, NumericMatrix X_, IntegerVector numberOfStates);
RcppExport SEXP seqHMM_logLikMixHMM(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP coefsSEXP, SEXP X_SEXP, SEXP numberOfStatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type coefs(coefsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numberOfStates(numberOfStatesSEXP);
    __result = Rcpp::wrap(logLikMixHMM(transitionMatrix, emissionArray, initialProbs, obsArray, coefs, X_, numberOfStates));
    return __result;
END_RCPP
}
// logLikMixMCHMM
NumericVector logLikMixMCHMM(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, NumericMatrix coefs, NumericMatrix X_, IntegerVector numberOfStates);
RcppExport SEXP seqHMM_logLikMixMCHMM(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP coefsSEXP, SEXP X_SEXP, SEXP numberOfStatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type coefs(coefsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numberOfStates(numberOfStatesSEXP);
    __result = Rcpp::wrap(logLikMixMCHMM(transitionMatrix, emissionArray, initialProbs, obsArray, coefs, X_, numberOfStates));
    return __result;
END_RCPP
}
// viterbi
List viterbi(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray);
RcppExport SEXP seqHMM_viterbi(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    __result = Rcpp::wrap(viterbi(transitionMatrix, emissionArray, initialProbs, obsArray));
    return __result;
END_RCPP
}
// viterbiMC
List viterbiMC(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray);
RcppExport SEXP seqHMM_viterbiMC(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    __result = Rcpp::wrap(viterbiMC(transitionMatrix, emissionArray, initialProbs, obsArray));
    return __result;
END_RCPP
}
// viterbix
List viterbix(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, NumericMatrix coefs, NumericMatrix X_, IntegerVector numberOfStates);
RcppExport SEXP seqHMM_viterbix(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP coefsSEXP, SEXP X_SEXP, SEXP numberOfStatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type coefs(coefsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numberOfStates(numberOfStatesSEXP);
    __result = Rcpp::wrap(viterbix(transitionMatrix, emissionArray, initialProbs, obsArray, coefs, X_, numberOfStates));
    return __result;
END_RCPP
}
// viterbiMCx
List viterbiMCx(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray, NumericMatrix coefs, NumericMatrix X_, IntegerVector numberOfStates);
RcppExport SEXP seqHMM_viterbiMCx(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP, SEXP coefsSEXP, SEXP X_SEXP, SEXP numberOfStatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type coefs(coefsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numberOfStates(numberOfStatesSEXP);
    __result = Rcpp::wrap(viterbiMCx(transitionMatrix, emissionArray, initialProbs, obsArray, coefs, X_, numberOfStates));
    return __result;
END_RCPP
}
// viterbiProbMC
double viterbiProbMC(NumericVector transitionMatrix, NumericVector emissionArray, NumericVector initialProbs, IntegerVector obsArray);
RcppExport SEXP seqHMM_viterbiProbMC(SEXP transitionMatrixSEXP, SEXP emissionArraySEXP, SEXP initialProbsSEXP, SEXP obsArraySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type transitionMatrix(transitionMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type emissionArray(emissionArraySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type initialProbs(initialProbsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obsArray(obsArraySEXP);
    __result = Rcpp::wrap(viterbiProbMC(transitionMatrix, emissionArray, initialProbs, obsArray));
    return __result;
END_RCPP
}
