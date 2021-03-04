#ifndef STAN_MATH_OPENCL_REV_OPERANDS_AND_PARTIALS_HPP
#define STAN_MATH_OPENCL_REV_OPERANDS_AND_PARTIALS_HPP
#ifdef STAN_OPENCL

#include <stan/math/prim/functor/operands_and_partials.hpp>
#include <stan/math/prim/meta.hpp>
#include <stan/math/rev/core/var.hpp>
#include <stan/math/opencl/kernel_generator.hpp>
#include <stan/math/opencl/rev/arena_type.hpp>
#include <stan/math/opencl/rev/to_arena.hpp>

namespace stan {
namespace math {
namespace internal {

template <typename Op>
class ops_partials_edge<double, var_value<Op>,
                        require_kernel_expression_lhs_t<Op>> {
 public:
  using partials_t = plain_type_t<Op>;
  arena_t<partials_t> partials_;                     // For univariate use-cases
  broadcast_array<partials_t> partials_vec_;  // For multivariate
  explicit ops_partials_edge(const var_value<Op>& ops)
      : partials_(constant(0.0, ops.vi_->rows(), ops.vi_->cols())),
        partials_vec_(partials_),
        operands_(ops) {}
  inline partials_t partial() noexcept { return partials_; }
  inline var_value<Op> operand() const noexcept { return operands_; }
  const var_value<Op>& operands_;
  static constexpr int size() { return 0; }
};

}  // namespace internal
}  // namespace math
}  // namespace stan
#endif
#endif
