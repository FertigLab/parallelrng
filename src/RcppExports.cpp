// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rnorm_cpp
Rcpp::NumericVector rnorm_cpp(int seed, int n);
RcppExport SEXP parallelrng_rnorm_cpp(SEXP seedSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(rnorm_cpp(seed, n));
    return __result;
END_RCPP
}
