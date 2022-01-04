#ifndef STAN_MATH_PRIM_PROB_HPP
#define STAN_MATH_PRIM_PROB_HPP

#include <stan/math/prim/prob/bernoulli_ccdf_log.hpp>
#include <stan/math/prim/prob/bernoulli_cdf.hpp>
#include <stan/math/prim/prob/bernoulli_cdf_log.hpp>
#include <stan/math/prim/prob/bernoulli_lccdf.hpp>
#include <stan/math/prim/prob/bernoulli_lcdf.hpp>
#include <stan/math/prim/prob/bernoulli_log.hpp>
#include <stan/math/prim/prob/bernoulli_logit_glm_log.hpp>
#include <stan/math/prim/prob/bernoulli_logit_glm_lpmf.hpp>
#include <stan/math/prim/prob/bernoulli_logit_glm_rng.hpp>
#include <stan/math/prim/prob/bernoulli_logit_log.hpp>
#include <stan/math/prim/prob/bernoulli_logit_lpmf.hpp>
#include <stan/math/prim/prob/bernoulli_logit_rng.hpp>
#include <stan/math/prim/prob/bernoulli_lpmf.hpp>
#include <stan/math/prim/prob/bernoulli_rng.hpp>
#include <stan/math/prim/prob/beta_binomial_ccdf_log.hpp>
#include <stan/math/prim/prob/beta_binomial_cdf.hpp>
#include <stan/math/prim/prob/beta_binomial_cdf_log.hpp>
#include <stan/math/prim/prob/beta_binomial_lccdf.hpp>
#include <stan/math/prim/prob/beta_binomial_lcdf.hpp>
#include <stan/math/prim/prob/beta_binomial_log.hpp>
#include <stan/math/prim/prob/beta_binomial_lpmf.hpp>
#include <stan/math/prim/prob/beta_binomial_rng.hpp>
#include <stan/math/prim/prob/beta_ccdf_log.hpp>
#include <stan/math/prim/prob/beta_cdf.hpp>
#include <stan/math/prim/prob/beta_cdf_log.hpp>
#include <stan/math/prim/prob/beta_lccdf.hpp>
#include <stan/math/prim/prob/beta_lcdf.hpp>
#include <stan/math/prim/prob/beta_log.hpp>
#include <stan/math/prim/prob/beta_lpdf.hpp>
#include <stan/math/prim/prob/beta_proportion_ccdf_log.hpp>
#include <stan/math/prim/prob/beta_proportion_cdf_log.hpp>
#include <stan/math/prim/prob/beta_proportion_lccdf.hpp>
#include <stan/math/prim/prob/beta_proportion_lcdf.hpp>
#include <stan/math/prim/prob/beta_proportion_log.hpp>
#include <stan/math/prim/prob/beta_proportion_lpdf.hpp>
#include <stan/math/prim/prob/beta_proportion_rng.hpp>
#include <stan/math/prim/prob/beta_rng.hpp>
#include <stan/math/prim/prob/binomial_ccdf_log.hpp>
#include <stan/math/prim/prob/binomial_cdf.hpp>
#include <stan/math/prim/prob/binomial_cdf_log.hpp>
#include <stan/math/prim/prob/binomial_lccdf.hpp>
#include <stan/math/prim/prob/binomial_lcdf.hpp>
#include <stan/math/prim/prob/binomial_log.hpp>
#include <stan/math/prim/prob/binomial_logit_log.hpp>
#include <stan/math/prim/prob/binomial_logit_lpmf.hpp>
#include <stan/math/prim/prob/binomial_lpmf.hpp>
#include <stan/math/prim/prob/binomial_rng.hpp>
#include <stan/math/prim/prob/categorical_log.hpp>
#include <stan/math/prim/prob/categorical_logit_glm_lpmf.hpp>
#include <stan/math/prim/prob/categorical_logit_log.hpp>
#include <stan/math/prim/prob/categorical_logit_lpmf.hpp>
#include <stan/math/prim/prob/categorical_logit_rng.hpp>
#include <stan/math/prim/prob/categorical_lpmf.hpp>
#include <stan/math/prim/prob/categorical_rng.hpp>
#include <stan/math/prim/prob/cauchy_ccdf_log.hpp>
#include <stan/math/prim/prob/cauchy_cdf.hpp>
#include <stan/math/prim/prob/cauchy_cdf_log.hpp>
#include <stan/math/prim/prob/cauchy_lccdf.hpp>
#include <stan/math/prim/prob/cauchy_lcdf.hpp>
#include <stan/math/prim/prob/cauchy_log.hpp>
#include <stan/math/prim/prob/cauchy_lpdf.hpp>
#include <stan/math/prim/prob/cauchy_rng.hpp>
#include <stan/math/prim/prob/chi_square_ccdf_log.hpp>
#include <stan/math/prim/prob/chi_square_cdf.hpp>
#include <stan/math/prim/prob/chi_square_cdf_log.hpp>
#include <stan/math/prim/prob/chi_square_lccdf.hpp>
#include <stan/math/prim/prob/chi_square_lcdf.hpp>
#include <stan/math/prim/prob/chi_square_log.hpp>
#include <stan/math/prim/prob/chi_square_lpdf.hpp>
#include <stan/math/prim/prob/chi_square_rng.hpp>
#include <stan/math/prim/prob/dirichlet_log.hpp>
#include <stan/math/prim/prob/dirichlet_lpdf.hpp>
#include <stan/math/prim/prob/dirichlet_lpmf.hpp>
#include <stan/math/prim/prob/dirichlet_rng.hpp>
#include <stan/math/prim/prob/discrete_range_ccdf_log.hpp>
#include <stan/math/prim/prob/discrete_range_cdf.hpp>
#include <stan/math/prim/prob/discrete_range_cdf_log.hpp>
#include <stan/math/prim/prob/discrete_range_lccdf.hpp>
#include <stan/math/prim/prob/discrete_range_lcdf.hpp>
#include <stan/math/prim/prob/discrete_range_log.hpp>
#include <stan/math/prim/prob/discrete_range_lpmf.hpp>
#include <stan/math/prim/prob/discrete_range_rng.hpp>
#include <stan/math/prim/prob/double_exponential_ccdf_log.hpp>
#include <stan/math/prim/prob/double_exponential_cdf.hpp>
#include <stan/math/prim/prob/double_exponential_cdf_log.hpp>
#include <stan/math/prim/prob/double_exponential_lccdf.hpp>
#include <stan/math/prim/prob/double_exponential_lcdf.hpp>
#include <stan/math/prim/prob/double_exponential_log.hpp>
#include <stan/math/prim/prob/double_exponential_lpdf.hpp>
#include <stan/math/prim/prob/double_exponential_rng.hpp>
#include <stan/math/prim/prob/exp_mod_normal_ccdf_log.hpp>
#include <stan/math/prim/prob/exp_mod_normal_cdf.hpp>
#include <stan/math/prim/prob/exp_mod_normal_cdf_log.hpp>
#include <stan/math/prim/prob/exp_mod_normal_lccdf.hpp>
#include <stan/math/prim/prob/exp_mod_normal_lcdf.hpp>
#include <stan/math/prim/prob/exp_mod_normal_log.hpp>
#include <stan/math/prim/prob/exp_mod_normal_lpdf.hpp>
#include <stan/math/prim/prob/exp_mod_normal_rng.hpp>
#include <stan/math/prim/prob/exponential_ccdf_log.hpp>
#include <stan/math/prim/prob/exponential_cdf.hpp>
#include <stan/math/prim/prob/exponential_cdf_log.hpp>
#include <stan/math/prim/prob/exponential_lccdf.hpp>
#include <stan/math/prim/prob/exponential_lcdf.hpp>
#include <stan/math/prim/prob/exponential_log.hpp>
#include <stan/math/prim/prob/exponential_lpdf.hpp>
#include <stan/math/prim/prob/exponential_rng.hpp>
#include <stan/math/prim/prob/frechet_ccdf_log.hpp>
#include <stan/math/prim/prob/frechet_cdf.hpp>
#include <stan/math/prim/prob/frechet_cdf_log.hpp>
#include <stan/math/prim/prob/frechet_lccdf.hpp>
#include <stan/math/prim/prob/frechet_lcdf.hpp>
#include <stan/math/prim/prob/frechet_log.hpp>
#include <stan/math/prim/prob/frechet_lpdf.hpp>
#include <stan/math/prim/prob/frechet_rng.hpp>
#include <stan/math/prim/prob/gamma_ccdf_log.hpp>
#include <stan/math/prim/prob/gamma_cdf.hpp>
#include <stan/math/prim/prob/gamma_cdf_log.hpp>
#include <stan/math/prim/prob/gamma_lccdf.hpp>
#include <stan/math/prim/prob/gamma_lcdf.hpp>
#include <stan/math/prim/prob/gamma_log.hpp>
#include <stan/math/prim/prob/gamma_lpdf.hpp>
#include <stan/math/prim/prob/gamma_rng.hpp>
#include <stan/math/prim/prob/gaussian_dlm_obs_log.hpp>
#include <stan/math/prim/prob/gaussian_dlm_obs_lpdf.hpp>
#include <stan/math/prim/prob/gaussian_dlm_obs_rng.hpp>
#include <stan/math/prim/prob/gumbel_ccdf_log.hpp>
#include <stan/math/prim/prob/gumbel_cdf.hpp>
#include <stan/math/prim/prob/gumbel_cdf_log.hpp>
#include <stan/math/prim/prob/gumbel_lccdf.hpp>
#include <stan/math/prim/prob/gumbel_lcdf.hpp>
#include <stan/math/prim/prob/gumbel_log.hpp>
#include <stan/math/prim/prob/gumbel_lpdf.hpp>
#include <stan/math/prim/prob/gumbel_rng.hpp>
#include <stan/math/prim/prob/hmm_hidden_state_prob.hpp>
#include <stan/math/prim/prob/hmm_latent_rng.hpp>
#include <stan/math/prim/prob/hmm_marginal.hpp>
#include <stan/math/prim/prob/hypergeometric_log.hpp>
#include <stan/math/prim/prob/hypergeometric_lpmf.hpp>
#include <stan/math/prim/prob/hypergeometric_rng.hpp>
#include <stan/math/prim/prob/inv_chi_square_ccdf_log.hpp>
#include <stan/math/prim/prob/inv_chi_square_cdf.hpp>
#include <stan/math/prim/prob/inv_chi_square_cdf_log.hpp>
#include <stan/math/prim/prob/inv_chi_square_lccdf.hpp>
#include <stan/math/prim/prob/inv_chi_square_lcdf.hpp>
#include <stan/math/prim/prob/inv_chi_square_log.hpp>
#include <stan/math/prim/prob/inv_chi_square_lpdf.hpp>
#include <stan/math/prim/prob/inv_chi_square_rng.hpp>
#include <stan/math/prim/prob/inv_gamma_ccdf_log.hpp>
#include <stan/math/prim/prob/inv_gamma_cdf.hpp>
#include <stan/math/prim/prob/inv_gamma_cdf_log.hpp>
#include <stan/math/prim/prob/inv_gamma_lccdf.hpp>
#include <stan/math/prim/prob/inv_gamma_lcdf.hpp>
#include <stan/math/prim/prob/inv_gamma_log.hpp>
#include <stan/math/prim/prob/inv_gamma_lpdf.hpp>
#include <stan/math/prim/prob/inv_gamma_rng.hpp>
#include <stan/math/prim/prob/inv_wishart_log.hpp>
#include <stan/math/prim/prob/inv_wishart_lpdf.hpp>
#include <stan/math/prim/prob/inv_wishart_rng.hpp>
#include <stan/math/prim/prob/lkj_corr_cholesky_log.hpp>
#include <stan/math/prim/prob/lkj_corr_cholesky_lpdf.hpp>
#include <stan/math/prim/prob/lkj_corr_cholesky_rng.hpp>
#include <stan/math/prim/prob/lkj_corr_log.hpp>
#include <stan/math/prim/prob/lkj_corr_lpdf.hpp>
#include <stan/math/prim/prob/lkj_corr_rng.hpp>
#include <stan/math/prim/prob/lkj_cov_log.hpp>
#include <stan/math/prim/prob/lkj_cov_lpdf.hpp>
#include <stan/math/prim/prob/logistic_ccdf_log.hpp>
#include <stan/math/prim/prob/logistic_cdf.hpp>
#include <stan/math/prim/prob/logistic_cdf_log.hpp>
#include <stan/math/prim/prob/logistic_lccdf.hpp>
#include <stan/math/prim/prob/logistic_lcdf.hpp>
#include <stan/math/prim/prob/logistic_log.hpp>
#include <stan/math/prim/prob/logistic_lpdf.hpp>
#include <stan/math/prim/prob/logistic_rng.hpp>
#include <stan/math/prim/prob/loglogistic_cdf.hpp>
#include <stan/math/prim/prob/loglogistic_lpdf.hpp>
#include <stan/math/prim/prob/loglogistic_rng.hpp>
#include <stan/math/prim/prob/lognormal_ccdf_log.hpp>
#include <stan/math/prim/prob/lognormal_cdf.hpp>
#include <stan/math/prim/prob/lognormal_cdf_log.hpp>
#include <stan/math/prim/prob/lognormal_lccdf.hpp>
#include <stan/math/prim/prob/lognormal_lcdf.hpp>
#include <stan/math/prim/prob/lognormal_log.hpp>
#include <stan/math/prim/prob/lognormal_lpdf.hpp>
#include <stan/math/prim/prob/lognormal_rng.hpp>
#include <stan/math/prim/prob/matrix_normal_prec_log.hpp>
#include <stan/math/prim/prob/matrix_normal_prec_lpdf.hpp>
#include <stan/math/prim/prob/matrix_normal_prec_rng.hpp>
#include <stan/math/prim/prob/multi_gp_cholesky_log.hpp>
#include <stan/math/prim/prob/multi_gp_cholesky_lpdf.hpp>
#include <stan/math/prim/prob/multi_gp_log.hpp>
#include <stan/math/prim/prob/multi_gp_lpdf.hpp>
#include <stan/math/prim/prob/multi_normal_cholesky_log.hpp>
#include <stan/math/prim/prob/multi_normal_cholesky_lpdf.hpp>
#include <stan/math/prim/prob/multi_normal_cholesky_rng.hpp>
#include <stan/math/prim/prob/multi_normal_log.hpp>
#include <stan/math/prim/prob/multi_normal_lpdf.hpp>
#include <stan/math/prim/prob/multi_normal_prec_log.hpp>
#include <stan/math/prim/prob/multi_normal_prec_lpdf.hpp>
#include <stan/math/prim/prob/multi_normal_prec_rng.hpp>
#include <stan/math/prim/prob/multi_normal_rng.hpp>
#include <stan/math/prim/prob/multi_student_t_log.hpp>
#include <stan/math/prim/prob/multi_student_t_lpdf.hpp>
#include <stan/math/prim/prob/multi_student_t_rng.hpp>
#include <stan/math/prim/prob/multinomial_logit_log.hpp>
#include <stan/math/prim/prob/multinomial_logit_lpmf.hpp>
#include <stan/math/prim/prob/multinomial_logit_rng.hpp>
#include <stan/math/prim/prob/multinomial_log.hpp>
#include <stan/math/prim/prob/multinomial_lpmf.hpp>
#include <stan/math/prim/prob/multinomial_rng.hpp>
#include <stan/math/prim/prob/neg_binomial_2_ccdf_log.hpp>
#include <stan/math/prim/prob/neg_binomial_2_cdf.hpp>
#include <stan/math/prim/prob/neg_binomial_2_cdf_log.hpp>
#include <stan/math/prim/prob/neg_binomial_2_lccdf.hpp>
#include <stan/math/prim/prob/neg_binomial_2_lcdf.hpp>
#include <stan/math/prim/prob/neg_binomial_2_log.hpp>
#include <stan/math/prim/prob/neg_binomial_2_log_glm_log.hpp>
#include <stan/math/prim/prob/neg_binomial_2_log_glm_lpmf.hpp>
#include <stan/math/prim/prob/neg_binomial_2_log_log.hpp>
#include <stan/math/prim/prob/neg_binomial_2_log_lpmf.hpp>
#include <stan/math/prim/prob/neg_binomial_2_log_rng.hpp>
#include <stan/math/prim/prob/neg_binomial_2_lpmf.hpp>
#include <stan/math/prim/prob/neg_binomial_2_rng.hpp>
#include <stan/math/prim/prob/neg_binomial_ccdf_log.hpp>
#include <stan/math/prim/prob/neg_binomial_cdf.hpp>
#include <stan/math/prim/prob/neg_binomial_cdf_log.hpp>
#include <stan/math/prim/prob/neg_binomial_lccdf.hpp>
#include <stan/math/prim/prob/neg_binomial_lcdf.hpp>
#include <stan/math/prim/prob/neg_binomial_log.hpp>
#include <stan/math/prim/prob/neg_binomial_lpmf.hpp>
#include <stan/math/prim/prob/neg_binomial_rng.hpp>
#include <stan/math/prim/prob/normal_ccdf_log.hpp>
#include <stan/math/prim/prob/normal_cdf.hpp>
#include <stan/math/prim/prob/normal_cdf_log.hpp>
#include <stan/math/prim/prob/normal_id_glm_log.hpp>
#include <stan/math/prim/prob/normal_id_glm_lpdf.hpp>
#include <stan/math/prim/prob/normal_lccdf.hpp>
#include <stan/math/prim/prob/normal_lcdf.hpp>
#include <stan/math/prim/prob/normal_log.hpp>
#include <stan/math/prim/prob/normal_lpdf.hpp>
#include <stan/math/prim/prob/normal_rng.hpp>
#include <stan/math/prim/prob/normal_sufficient_log.hpp>
#include <stan/math/prim/prob/normal_sufficient_lpdf.hpp>
#include <stan/math/prim/prob/ordered_logistic_glm_lpmf.hpp>
#include <stan/math/prim/prob/ordered_logistic_log.hpp>
#include <stan/math/prim/prob/ordered_logistic_lpmf.hpp>
#include <stan/math/prim/prob/ordered_logistic_rng.hpp>
#include <stan/math/prim/prob/ordered_probit_log.hpp>
#include <stan/math/prim/prob/ordered_probit_lpmf.hpp>
#include <stan/math/prim/prob/ordered_probit_rng.hpp>
#include <stan/math/prim/prob/pareto_ccdf_log.hpp>
#include <stan/math/prim/prob/pareto_cdf.hpp>
#include <stan/math/prim/prob/pareto_cdf_log.hpp>
#include <stan/math/prim/prob/pareto_lccdf.hpp>
#include <stan/math/prim/prob/pareto_lcdf.hpp>
#include <stan/math/prim/prob/pareto_log.hpp>
#include <stan/math/prim/prob/pareto_lpdf.hpp>
#include <stan/math/prim/prob/pareto_rng.hpp>
#include <stan/math/prim/prob/pareto_type_2_ccdf_log.hpp>
#include <stan/math/prim/prob/pareto_type_2_cdf.hpp>
#include <stan/math/prim/prob/pareto_type_2_cdf_log.hpp>
#include <stan/math/prim/prob/pareto_type_2_lccdf.hpp>
#include <stan/math/prim/prob/pareto_type_2_lcdf.hpp>
#include <stan/math/prim/prob/pareto_type_2_log.hpp>
#include <stan/math/prim/prob/pareto_type_2_lpdf.hpp>
#include <stan/math/prim/prob/pareto_type_2_rng.hpp>
#include <stan/math/prim/prob/poisson_binomial_ccdf_log.hpp>
#include <stan/math/prim/prob/poisson_binomial_cdf.hpp>
#include <stan/math/prim/prob/poisson_binomial_cdf_log.hpp>
#include <stan/math/prim/prob/poisson_binomial_lccdf.hpp>
#include <stan/math/prim/prob/poisson_binomial_lcdf.hpp>
#include <stan/math/prim/prob/poisson_binomial_log.hpp>
#include <stan/math/prim/prob/poisson_binomial_lpmf.hpp>
#include <stan/math/prim/prob/poisson_binomial_rng.hpp>
#include <stan/math/prim/prob/poisson_ccdf_log.hpp>
#include <stan/math/prim/prob/poisson_cdf.hpp>
#include <stan/math/prim/prob/poisson_cdf_log.hpp>
#include <stan/math/prim/prob/poisson_lccdf.hpp>
#include <stan/math/prim/prob/poisson_lcdf.hpp>
#include <stan/math/prim/prob/poisson_log.hpp>
#include <stan/math/prim/prob/poisson_log_glm_log.hpp>
#include <stan/math/prim/prob/poisson_log_glm_lpmf.hpp>
#include <stan/math/prim/prob/poisson_log_log.hpp>
#include <stan/math/prim/prob/poisson_log_lpmf.hpp>
#include <stan/math/prim/prob/poisson_log_rng.hpp>
#include <stan/math/prim/prob/poisson_lpmf.hpp>
#include <stan/math/prim/prob/poisson_rng.hpp>
#include <stan/math/prim/prob/rayleigh_ccdf_log.hpp>
#include <stan/math/prim/prob/rayleigh_cdf.hpp>
#include <stan/math/prim/prob/rayleigh_cdf_log.hpp>
#include <stan/math/prim/prob/rayleigh_lccdf.hpp>
#include <stan/math/prim/prob/rayleigh_lcdf.hpp>
#include <stan/math/prim/prob/rayleigh_log.hpp>
#include <stan/math/prim/prob/rayleigh_lpdf.hpp>
#include <stan/math/prim/prob/rayleigh_rng.hpp>
#include <stan/math/prim/prob/scaled_inv_chi_square_ccdf_log.hpp>
#include <stan/math/prim/prob/scaled_inv_chi_square_cdf.hpp>
#include <stan/math/prim/prob/scaled_inv_chi_square_cdf_log.hpp>
#include <stan/math/prim/prob/scaled_inv_chi_square_lccdf.hpp>
#include <stan/math/prim/prob/scaled_inv_chi_square_lcdf.hpp>
#include <stan/math/prim/prob/scaled_inv_chi_square_log.hpp>
#include <stan/math/prim/prob/scaled_inv_chi_square_lpdf.hpp>
#include <stan/math/prim/prob/scaled_inv_chi_square_rng.hpp>
#include <stan/math/prim/prob/skew_double_exponential_ccdf_log.hpp>
#include <stan/math/prim/prob/skew_double_exponential_cdf.hpp>
#include <stan/math/prim/prob/skew_double_exponential_cdf_log.hpp>
#include <stan/math/prim/prob/skew_double_exponential_lpdf.hpp>
#include <stan/math/prim/prob/skew_double_exponential_lcdf.hpp>
#include <stan/math/prim/prob/skew_double_exponential_lccdf.hpp>
#include <stan/math/prim/prob/skew_double_exponential_log.hpp>
#include <stan/math/prim/prob/skew_double_exponential_rng.hpp>
#include <stan/math/prim/prob/skew_normal_ccdf_log.hpp>
#include <stan/math/prim/prob/skew_normal_cdf.hpp>
#include <stan/math/prim/prob/skew_normal_cdf_log.hpp>
#include <stan/math/prim/prob/skew_normal_lccdf.hpp>
#include <stan/math/prim/prob/skew_normal_lcdf.hpp>
#include <stan/math/prim/prob/skew_normal_log.hpp>
#include <stan/math/prim/prob/skew_normal_lpdf.hpp>
#include <stan/math/prim/prob/skew_normal_rng.hpp>
#include <stan/math/prim/prob/std_normal_ccdf_log.hpp>
#include <stan/math/prim/prob/std_normal_cdf.hpp>
#include <stan/math/prim/prob/std_normal_cdf_log.hpp>
#include <stan/math/prim/prob/std_normal_lcdf.hpp>
#include <stan/math/prim/prob/std_normal_lccdf.hpp>
#include <stan/math/prim/prob/std_normal_log.hpp>
#include <stan/math/prim/prob/std_normal_lpdf.hpp>
#include <stan/math/prim/prob/std_normal_rng.hpp>
#include <stan/math/prim/prob/student_t_ccdf_log.hpp>
#include <stan/math/prim/prob/student_t_cdf.hpp>
#include <stan/math/prim/prob/student_t_cdf_log.hpp>
#include <stan/math/prim/prob/student_t_lccdf.hpp>
#include <stan/math/prim/prob/student_t_lcdf.hpp>
#include <stan/math/prim/prob/student_t_log.hpp>
#include <stan/math/prim/prob/student_t_lpdf.hpp>
#include <stan/math/prim/prob/student_t_rng.hpp>
#include <stan/math/prim/prob/uniform_ccdf_log.hpp>
#include <stan/math/prim/prob/uniform_cdf.hpp>
#include <stan/math/prim/prob/uniform_cdf_log.hpp>
#include <stan/math/prim/prob/uniform_lccdf.hpp>
#include <stan/math/prim/prob/uniform_lcdf.hpp>
#include <stan/math/prim/prob/uniform_log.hpp>
#include <stan/math/prim/prob/uniform_lpdf.hpp>
#include <stan/math/prim/prob/uniform_rng.hpp>
#include <stan/math/prim/prob/von_mises_log.hpp>
#include <stan/math/prim/prob/von_mises_lpdf.hpp>
#include <stan/math/prim/prob/von_mises_rng.hpp>
#include <stan/math/prim/prob/von_mises_ccdf_log.hpp>
#include <stan/math/prim/prob/von_mises_cdf.hpp>
#include <stan/math/prim/prob/von_mises_cdf_log.hpp>
#include <stan/math/prim/prob/von_mises_lcdf.hpp>
#include <stan/math/prim/prob/von_mises_lccdf.hpp>
#include <stan/math/prim/prob/weibull_ccdf_log.hpp>
#include <stan/math/prim/prob/weibull_cdf.hpp>
#include <stan/math/prim/prob/weibull_cdf_log.hpp>
#include <stan/math/prim/prob/weibull_lccdf.hpp>
#include <stan/math/prim/prob/weibull_lcdf.hpp>
#include <stan/math/prim/prob/weibull_log.hpp>
#include <stan/math/prim/prob/weibull_lpdf.hpp>
#include <stan/math/prim/prob/weibull_rng.hpp>
#include <stan/math/prim/prob/wiener_log.hpp>
#include <stan/math/prim/prob/wiener_lpdf.hpp>
#include <stan/math/prim/prob/wishart_log.hpp>
#include <stan/math/prim/prob/wishart_lpdf.hpp>
#include <stan/math/prim/prob/wishart_rng.hpp>

#endif
