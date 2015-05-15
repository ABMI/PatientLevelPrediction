// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// aucWithCi
std::vector<double> aucWithCi(std::vector<double> propensityScores, std::vector<int> treatment);
RcppExport SEXP PatientLevelPrediction_aucWithCi(SEXP propensityScoresSEXP, SEXP treatmentSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<double> >::type propensityScores(propensityScoresSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type treatment(treatmentSEXP);
    __result = Rcpp::wrap(aucWithCi(propensityScores, treatment));
    return __result;
END_RCPP
}
// auc
double auc(std::vector<double> propensityScores, std::vector<int> treatment);
RcppExport SEXP PatientLevelPrediction_auc(SEXP propensityScoresSEXP, SEXP treatmentSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<double> >::type propensityScores(propensityScoresSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type treatment(treatmentSEXP);
    __result = Rcpp::wrap(auc(propensityScores, treatment));
    return __result;
END_RCPP
}
