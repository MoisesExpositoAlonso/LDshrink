// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/LDshrink.h"
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// calc_cov_p_exp
Eigen::MatrixXd calc_cov_p_exp(Matrix_external mata, Matrix_external matb);
RcppExport SEXP _LDshrink_calc_cov_p_exp(SEXP mataSEXP, SEXP matbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Matrix_external >::type mata(mataSEXP);
    Rcpp::traits::input_parameter< Matrix_external >::type matb(matbSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_cov_p_exp(mata, matb));
    return rcpp_result_gen;
END_RCPP
}
// calc_cov_scaled
Eigen::MatrixXd calc_cov_scaled(Matrix_external centereda, Matrix_external centeredb);
RcppExport SEXP _LDshrink_calc_cov_scaled(SEXP centeredaSEXP, SEXP centeredbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Matrix_external >::type centereda(centeredaSEXP);
    Rcpp::traits::input_parameter< Matrix_external >::type centeredb(centeredbSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_cov_scaled(centereda, centeredb));
    return rcpp_result_gen;
END_RCPP
}
// cov_2_cor_exp_p
Eigen::MatrixXd cov_2_cor_exp_p(const Eigen::MatrixXd covmat, const Eigen::ArrayXd rowvar, const Eigen::ArrayXd colvar);
RcppExport SEXP _LDshrink_cov_2_cor_exp_p(SEXP covmatSEXP, SEXP rowvarSEXP, SEXP colvarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type covmat(covmatSEXP);
    Rcpp::traits::input_parameter< const Eigen::ArrayXd >::type rowvar(rowvarSEXP);
    Rcpp::traits::input_parameter< const Eigen::ArrayXd >::type colvar(colvarSEXP);
    rcpp_result_gen = Rcpp::wrap(cov_2_cor_exp_p(covmat, rowvar, colvar));
    return rcpp_result_gen;
END_RCPP
}
// eigen_dist
Eigen::MatrixXd eigen_dist(const Eigen::VectorXd mapa, const Eigen::VectorXd mapb);
RcppExport SEXP _LDshrink_eigen_dist(SEXP mapaSEXP, SEXP mapbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd >::type mapa(mapaSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd >::type mapb(mapbSEXP);
    rcpp_result_gen = Rcpp::wrap(eigen_dist(mapa, mapb));
    return rcpp_result_gen;
END_RCPP
}
// calcLD_par
Eigen::MatrixXd calcLD_par(const Matrix_external hmat, const arrayxd_external map, const arrayxd_external ldparams, const arrayxi_external id);
RcppExport SEXP _LDshrink_calcLD_par(SEXP hmatSEXP, SEXP mapSEXP, SEXP ldparamsSEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Matrix_external >::type hmat(hmatSEXP);
    Rcpp::traits::input_parameter< const arrayxd_external >::type map(mapSEXP);
    Rcpp::traits::input_parameter< const arrayxd_external >::type ldparams(ldparamsSEXP);
    Rcpp::traits::input_parameter< const arrayxi_external >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(calcLD_par(hmat, map, ldparams, id));
    return rcpp_result_gen;
END_RCPP
}
// haplo_2_geno
Eigen::MatrixXd haplo_2_geno(const Eigen::MatrixXd haplo, bool snps_in_rows);
RcppExport SEXP _LDshrink_haplo_2_geno(SEXP haploSEXP, SEXP snps_in_rowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type haplo(haploSEXP);
    Rcpp::traits::input_parameter< bool >::type snps_in_rows(snps_in_rowsSEXP);
    rcpp_result_gen = Rcpp::wrap(haplo_2_geno(haplo, snps_in_rows));
    return rcpp_result_gen;
END_RCPP
}
// haplo_2_geno_i
Eigen::MatrixXi haplo_2_geno_i(const Eigen::MatrixXi haplo, bool snps_in_rows);
RcppExport SEXP _LDshrink_haplo_2_geno_i(SEXP haploSEXP, SEXP snps_in_rowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXi >::type haplo(haploSEXP);
    Rcpp::traits::input_parameter< bool >::type snps_in_rows(snps_in_rowsSEXP);
    rcpp_result_gen = Rcpp::wrap(haplo_2_geno_i(haplo, snps_in_rows));
    return rcpp_result_gen;
END_RCPP
}
// calc_spve_naive
double calc_spve_naive(const Matrix_external R, const arrayxd_external beta, const arrayxd_external beta_hat, const arrayxd_external se_hat, const int n);
RcppExport SEXP _LDshrink_calc_spve_naive(SEXP RSEXP, SEXP betaSEXP, SEXP beta_hatSEXP, SEXP se_hatSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Matrix_external >::type R(RSEXP);
    Rcpp::traits::input_parameter< const arrayxd_external >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arrayxd_external >::type beta_hat(beta_hatSEXP);
    Rcpp::traits::input_parameter< const arrayxd_external >::type se_hat(se_hatSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_spve_naive(R, beta, beta_hat, se_hat, n));
    return rcpp_result_gen;
END_RCPP
}
// approx_diag
Rcpp::NumericVector approx_diag(const Matrix_external R, const int blocksize);
RcppExport SEXP _LDshrink_approx_diag(SEXP RSEXP, SEXP blocksizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Matrix_external >::type R(RSEXP);
    Rcpp::traits::input_parameter< const int >::type blocksize(blocksizeSEXP);
    rcpp_result_gen = Rcpp::wrap(approx_diag(R, blocksize));
    return rcpp_result_gen;
END_RCPP
}
// calc_spve
Eigen::ArrayXd calc_spve(const Eigen::MatrixXd& R, const Eigen::MatrixXd& beta_mat, const Eigen::MatrixXd& beta_hat_mat, const Eigen::MatrixXd& se_hat_mat, const int n);
RcppExport SEXP _LDshrink_calc_spve(SEXP RSEXP, SEXP beta_matSEXP, SEXP beta_hat_matSEXP, SEXP se_hat_matSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type R(RSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type beta_mat(beta_matSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type beta_hat_mat(beta_hat_matSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type se_hat_mat(se_hat_matSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_spve(R, beta_mat, beta_hat_mat, se_hat_mat, n));
    return rcpp_result_gen;
END_RCPP
}
// sub_calc_spve
Eigen::ArrayXd sub_calc_spve(const Eigen::MatrixXd& R, const Eigen::MatrixXd tbeta, const int n);
RcppExport SEXP _LDshrink_sub_calc_spve(SEXP RSEXP, SEXP tbetaSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type R(RSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type tbeta(tbetaSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(sub_calc_spve(R, tbeta, n));
    return rcpp_result_gen;
END_RCPP
}
// calc_nmsum
double calc_nmsum(const double m);
RcppExport SEXP _LDshrink_calc_nmsum(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_nmsum(m));
    return rcpp_result_gen;
END_RCPP
}
// calc_theta
double calc_theta(const double m);
RcppExport SEXP _LDshrink_calc_theta(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_theta(m));
    return rcpp_result_gen;
END_RCPP
}
// ld2df
Rcpp::DataFrame ld2df(const Matrix_external ldmat, Rcpp::StringVector rsid, const double r2cutoff);
RcppExport SEXP _LDshrink_ld2df(SEXP ldmatSEXP, SEXP rsidSEXP, SEXP r2cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Matrix_external >::type ldmat(ldmatSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type rsid(rsidSEXP);
    Rcpp::traits::input_parameter< const double >::type r2cutoff(r2cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(ld2df(ldmat, rsid, r2cutoff));
    return rcpp_result_gen;
END_RCPP
}
// calc_cov_exp
Eigen::MatrixXd calc_cov_exp(Matrix_external mat);
RcppExport SEXP _LDshrink_calc_cov_exp(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Matrix_external >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_cov_exp(mat));
    return rcpp_result_gen;
END_RCPP
}
// calc_variance_exp
Eigen::ArrayXd calc_variance_exp(Matrix_external mat);
RcppExport SEXP _LDshrink_calc_variance_exp(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Matrix_external >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_variance_exp(mat));
    return rcpp_result_gen;
END_RCPP
}
// cov_2_cor_exp
Eigen::MatrixXd cov_2_cor_exp(Matrix_external covmat);
RcppExport SEXP _LDshrink_cov_2_cor_exp(SEXP covmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Matrix_external >::type covmat(covmatSEXP);
    rcpp_result_gen = Rcpp::wrap(cov_2_cor_exp(covmat));
    return rcpp_result_gen;
END_RCPP
}
// calcLD_exp
Eigen::MatrixXd calcLD_exp(Matrix_external hmata, arrayxd_external mapa, const double m, const double Ne, const double cutoff);
RcppExport SEXP _LDshrink_calcLD_exp(SEXP hmataSEXP, SEXP mapaSEXP, SEXP mSEXP, SEXP NeSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Matrix_external >::type hmata(hmataSEXP);
    Rcpp::traits::input_parameter< arrayxd_external >::type mapa(mapaSEXP);
    Rcpp::traits::input_parameter< const double >::type m(mSEXP);
    Rcpp::traits::input_parameter< const double >::type Ne(NeSEXP);
    Rcpp::traits::input_parameter< const double >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(calcLD_exp(hmata, mapa, m, Ne, cutoff));
    return rcpp_result_gen;
END_RCPP
}
// sp_calcLD_exp
Eigen::SparseMatrix<double> sp_calcLD_exp(Matrix_external hmata, arrayxd_external mapa, const double m, const double Ne, const double cutoff);
RcppExport SEXP _LDshrink_sp_calcLD_exp(SEXP hmataSEXP, SEXP mapaSEXP, SEXP mSEXP, SEXP NeSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Matrix_external >::type hmata(hmataSEXP);
    Rcpp::traits::input_parameter< arrayxd_external >::type mapa(mapaSEXP);
    Rcpp::traits::input_parameter< const double >::type m(mSEXP);
    Rcpp::traits::input_parameter< const double >::type Ne(NeSEXP);
    Rcpp::traits::input_parameter< const double >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(sp_calcLD_exp(hmata, mapa, m, Ne, cutoff));
    return rcpp_result_gen;
END_RCPP
}
// sp_calcLD_symm_exp
Eigen::SparseMatrix<double> sp_calcLD_symm_exp(Matrix_external hmata, arrayxd_external mapa, const double m, const double Ne, const double cutoff);
RcppExport SEXP _LDshrink_sp_calcLD_symm_exp(SEXP hmataSEXP, SEXP mapaSEXP, SEXP mSEXP, SEXP NeSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Matrix_external >::type hmata(hmataSEXP);
    Rcpp::traits::input_parameter< arrayxd_external >::type mapa(mapaSEXP);
    Rcpp::traits::input_parameter< const double >::type m(mSEXP);
    Rcpp::traits::input_parameter< const double >::type Ne(NeSEXP);
    Rcpp::traits::input_parameter< const double >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(sp_calcLD_symm_exp(hmata, mapa, m, Ne, cutoff));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_LDshrink_calc_cov_p_exp", (DL_FUNC) &_LDshrink_calc_cov_p_exp, 2},
    {"_LDshrink_calc_cov_scaled", (DL_FUNC) &_LDshrink_calc_cov_scaled, 2},
    {"_LDshrink_cov_2_cor_exp_p", (DL_FUNC) &_LDshrink_cov_2_cor_exp_p, 3},
    {"_LDshrink_eigen_dist", (DL_FUNC) &_LDshrink_eigen_dist, 2},
    {"_LDshrink_calcLD_par", (DL_FUNC) &_LDshrink_calcLD_par, 4},
    {"_LDshrink_haplo_2_geno", (DL_FUNC) &_LDshrink_haplo_2_geno, 2},
    {"_LDshrink_haplo_2_geno_i", (DL_FUNC) &_LDshrink_haplo_2_geno_i, 2},
    {"_LDshrink_calc_spve_naive", (DL_FUNC) &_LDshrink_calc_spve_naive, 5},
    {"_LDshrink_approx_diag", (DL_FUNC) &_LDshrink_approx_diag, 2},
    {"_LDshrink_calc_spve", (DL_FUNC) &_LDshrink_calc_spve, 5},
    {"_LDshrink_sub_calc_spve", (DL_FUNC) &_LDshrink_sub_calc_spve, 3},
    {"_LDshrink_calc_nmsum", (DL_FUNC) &_LDshrink_calc_nmsum, 1},
    {"_LDshrink_calc_theta", (DL_FUNC) &_LDshrink_calc_theta, 1},
    {"_LDshrink_ld2df", (DL_FUNC) &_LDshrink_ld2df, 3},
    {"_LDshrink_calc_cov_exp", (DL_FUNC) &_LDshrink_calc_cov_exp, 1},
    {"_LDshrink_calc_variance_exp", (DL_FUNC) &_LDshrink_calc_variance_exp, 1},
    {"_LDshrink_cov_2_cor_exp", (DL_FUNC) &_LDshrink_cov_2_cor_exp, 1},
    {"_LDshrink_calcLD_exp", (DL_FUNC) &_LDshrink_calcLD_exp, 5},
    {"_LDshrink_sp_calcLD_exp", (DL_FUNC) &_LDshrink_sp_calcLD_exp, 5},
    {"_LDshrink_sp_calcLD_symm_exp", (DL_FUNC) &_LDshrink_sp_calcLD_symm_exp, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_LDshrink(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
