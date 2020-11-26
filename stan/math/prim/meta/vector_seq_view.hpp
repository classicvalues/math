#ifndef STAN_MATH_PRIM_META_vector_SEQ_VIEW_HPP
#define STAN_MATH_PRIM_META_vector_SEQ_VIEW_HPP

#include <stan/math/prim/fun/Eigen.hpp>
#include <stan/math/prim/meta.hpp>
#include <vector>

namespace stan {

template <typename T, require_st_arithmetic<T>* = nullptr>
inline T value_of(T&& x);

template <typename T, require_not_st_arithmetic<T>* = nullptr>
inline auto value_of(const std::vector<T>& x);

template <typename EigMat, require_eigen_t<EigMat>* = nullptr,
          require_not_st_arithmetic<EigMat>* = nullptr>
inline auto value_of(EigMat&& M);

/** \ingroup type_trait
 * This class provides a low-cost wrapper for situations where you either need
 * an Eigen Vector or RowVector or a std::vector of them and you want to be
 * agnostic between those two options. This is similar to scalar_seq_view but
 * instead of being a sequence-like view over a scalar or seq of scalars, it's
 * a sequence-like view over a Vector or seq of Vectors. Notably this version
 * only allows std::vectors as the outer container type, since we would have
 * difficulty figuring out which contained type was the container otherwise.
 *
 * @tparam T the wrapped type, either a Vector or std::vector of them.
 */
template <typename T, typename = void>
class vector_seq_view {};

/** \ingroup type_trait
 * This class provides a low-cost wrapper for situations where you either need
 * an Eigen Vector or RowVector or a std::vector of them and you want to be
 * agnostic between those two options. This is similar to scalar_seq_view but
 * instead of being a sequence-like view over a scalar or seq of scalars, it's
 * a sequence-like view over a Vector or seq of Vectors. Notably this version
 * only allows std::vectors as the outer container type, since we would have
 * difficulty figuring out which contained type was the container otherwise.
 *
 * @tparam T the type of the underlying Vector
 */
template <typename T>
class vector_seq_view<T, require_matrix_t<T>> {
 public:
  explicit vector_seq_view(const T& m) : m_(m) {}
  int size() const { return 1; }
  const ref_type_t<T>& operator[](int /* i */) const { return m_; }

  template <typename C = T, require_st_arithmetic<C>* = nullptr>
  auto val(int /* i */) const {
    return m_;
  }

  template <typename C = T, require_st_autodiff<C>* = nullptr>
  auto val(int /* i */) const {
    return m_.val();
  }

 private:
  const ref_type_t<T> m_;
};

/** \ingroup type_trait
 * This class provides a low-cost wrapper for situations where you either need
 * an Eigen Vector or RowVector or a std::vector of them and you want to be
 * agnostic between those two options. This is similar to scalar_seq_view but
 * instead of being a sequence-like view over a scalar or seq of scalars, it's
 * a sequence-like view over a Vector or seq of Vectors. Notably this version
 * only allows std::vectors as the outer container type, since we would have
 * difficulty figuring out which contained type was the container otherwise.
 *
 * @tparam S the type inside of the std::vector
 */
template <typename T>
class vector_seq_view<T, require_std_vector_vt<is_container, T>> {
 public:
  explicit vector_seq_view(const T& v) : v_(v) {}
  int size() const { return v_.size(); }
  const value_type_t<T>& operator[](int i) const { return v_[i]; }

  template <typename C = T, require_vt_arithmetic<C>* = nullptr>
  auto val(int i) const {
    return v_[i];
  }

  template <typename C = T, require_vt_autodiff<C>* = nullptr>
  auto val(int i) const {
    return value_of(v_[i]);
  }

 private:
  const T& v_;
};

}  // namespace stan

#endif
