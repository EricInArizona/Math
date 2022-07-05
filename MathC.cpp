// Copyright Eric Chauvin 2022



// This is licensed under the GNU General
// Public License (GPL).  It is the
// same license that Linux has.
// https://www.gnu.org/licenses/gpl-3.0.html



#include "MathC.h"
#include "../CppBase/Casting.h"


// Always include system files at the bottom
// under other include files.
#include <cmath>


// Linux has a long double but not Windows?

// abs, sin, cos, sqrt, exp pow, ceil, floor,
// and all that.


Float64 MathC::roundDbl( Float64 x )
{
return std::round( x );
}

Int64 MathC::round64( Float64 x )
{
return std::lround( x );
}

Int32 MathC::round32( Float64 x )
{
return Casting::i64ToI32( std::lround( x ));
}


/*

  acos(float __x)
  acos(long double __x)
  asin(float __x)
  asin(long double __x)
  { return __builtin_asinl(__x); }
#endif

  template<typename _Tp>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    asin(_Tp __x)
    { return __builtin_asin(__x); }

  using ::atan;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR float
  atan(float __x)
  { return __builtin_atanf(__x); }

  inline _GLIBCXX_CONSTEXPR long double
  atan(long double __x)
  { return __builtin_atanl(__x); }
#endif

  template<typename _Tp>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    atan(_Tp __x)
    { return __builtin_atan(__x); }

  using ::atan2;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR float
  atan2(float __y, float __x)
  { return __builtin_atan2f(__y, __x); }

  inline _GLIBCXX_CONSTEXPR long double
  atan2(long double __y, long double __x)
  { return __builtin_atan2l(__y, __x); }
#endif

  template<typename _Tp, typename _Up>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    atan2(_Tp __y, _Up __x)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return atan2(__type(__y), __type(__x));
    }

  using ::ceil;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR float
  ceil(float __x)
  { return __builtin_ceilf(__x); }

  inline _GLIBCXX_CONSTEXPR long double
  ceil(long double __x)
  { return __builtin_ceill(__x); }
#endif

  template<typename _Tp>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    ceil(_Tp __x)
    { return __builtin_ceil(__x); }

  using ::cos;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR float
  cos(float __x)
  { return __builtin_cosf(__x); }

  inline _GLIBCXX_CONSTEXPR long double
  cos(long double __x)
  { return __builtin_cosl(__x); }
#endif

  template<typename _Tp>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    cos(_Tp __x)
    { return __builtin_cos(__x); }

  using ::cosh;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR float
  cosh(float __x)
  { return __builtin_coshf(__x); }

  inline _GLIBCXX_CONSTEXPR long double
  cosh(long double __x)
  { return __builtin_coshl(__x); }
#endif

  template<typename _Tp>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    cosh(_Tp __x)
    { return __builtin_cosh(__x); }

  using ::exp;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR float
  exp(float __x)
  { return __builtin_expf(__x); }

  inline _GLIBCXX_CONSTEXPR long double
  exp(long double __x)
  { return __builtin_expl(__x); }
#endif

  template<typename _Tp>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    exp(_Tp __x)
    { return __builtin_exp(__x); }

  using ::fabs;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR float
  fabs(float __x)
  { return __builtin_fabsf(__x); }

  inline _GLIBCXX_CONSTEXPR long double
  fabs(long double __x)
  { return __builtin_fabsl(__x); }
#endif

  template<typename _Tp>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    fabs(_Tp __x)
    { return __builtin_fabs(__x); }

  using ::floor;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR float
  floor(float __x)
  { return __builtin_floorf(__x); }

  inline _GLIBCXX_CONSTEXPR long double
  floor(long double __x)
  { return __builtin_floorl(__x); }
#endif

  template<typename _Tp>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    floor(_Tp __x)
    { return __builtin_floor(__x); }

  using ::fmod;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR float
  fmod(float __x, float __y)
  { return __builtin_fmodf(__x, __y); }

  inline _GLIBCXX_CONSTEXPR long double
  fmod(long double __x, long double __y)
  { return __builtin_fmodl(__x, __y); }
#endif

  template<typename _Tp, typename _Up>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fmod(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fmod(__type(__x), __type(__y));
    }

  using ::frexp;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline float
  frexp(float __x, int* __exp)
  { return __builtin_frexpf(__x, __exp); }

  inline long double
  frexp(long double __x, int* __exp)
  { return __builtin_frexpl(__x, __exp); }
#endif

  template<typename _Tp>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    frexp(_Tp __x, int* __exp)
    { return __builtin_frexp(__x, __exp); }

  using ::ldexp;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR float
  ldexp(float __x, int __exp)
  { return __builtin_ldexpf(__x, __exp); }

  inline _GLIBCXX_CONSTEXPR long double
  ldexp(long double __x, int __exp)
  { return __builtin_ldexpl(__x, __exp); }
#endif

  template<typename _Tp>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    ldexp(_Tp __x, int __exp)
    { return __builtin_ldexp(__x, __exp); }

  using ::log;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR float
  log(float __x)
  { return __builtin_logf(__x); }

  inline _GLIBCXX_CONSTEXPR long double
  log(long double __x)
  { return __builtin_logl(__x); }
#endif

  template<typename _Tp>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    log(_Tp __x)
    { return __builtin_log(__x); }

  using ::log10;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR float
  log10(float __x)
  { return __builtin_log10f(__x); }

  inline _GLIBCXX_CONSTEXPR long double
  log10(long double __x)
  { return __builtin_log10l(__x); }
#endif

  template<typename _Tp>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    log10(_Tp __x)
    { return __builtin_log10(__x); }

  using ::modf;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline float
  modf(float __x, float* __iptr)
  { return __builtin_modff(__x, __iptr); }

  inline long double
  modf(long double __x, long double* __iptr)
  { return __builtin_modfl(__x, __iptr); }
#endif

  using ::pow;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR float
  pow(float __x, float __y)
  { return __builtin_powf(__x, __y); }

  inline _GLIBCXX_CONSTEXPR long double
  pow(long double __x, long double __y)
  { return __builtin_powl(__x, __y); }

#if __cplusplus < 201103L
  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // DR 550. What should the return type of pow(float,int) be?
  inline double
  pow(double __x, int __i)
  { return __builtin_powi(__x, __i); }

  inline float
  pow(float __x, int __n)
  { return __builtin_powif(__x, __n); }

  inline long double
  pow(long double __x, int __n)
  { return __builtin_powil(__x, __n); }
#endif
#endif

  template<typename _Tp, typename _Up>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    pow(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return pow(__type(__x), __type(__y));
    }

  using ::sin;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR float
  sin(float __x)
  { return __builtin_sinf(__x); }

  inline _GLIBCXX_CONSTEXPR long double
  sin(long double __x)
  { return __builtin_sinl(__x); }
#endif

  template<typename _Tp>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    sin(_Tp __x)
    { return __builtin_sin(__x); }

  using ::sinh;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR float
  sinh(float __x)
  { return __builtin_sinhf(__x); }

  inline _GLIBCXX_CONSTEXPR long double
  sinh(long double __x)
  { return __builtin_sinhl(__x); }
#endif

  template<typename _Tp>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    sinh(_Tp __x)
    { return __builtin_sinh(__x); }

  using ::sqrt;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR float
  sqrt(float __x)
  { return __builtin_sqrtf(__x); }

  inline _GLIBCXX_CONSTEXPR long double
  sqrt(long double __x)
  { return __builtin_sqrtl(__x); }
#endif

  template<typename _Tp>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    sqrt(_Tp __x)
    { return __builtin_sqrt(__x); }

  using ::tan;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR float
  tan(float __x)
  { return __builtin_tanf(__x); }

  inline _GLIBCXX_CONSTEXPR long double
  tan(long double __x)
  { return __builtin_tanl(__x); }
#endif

  template<typename _Tp>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    tan(_Tp __x)
    { return __builtin_tan(__x); }

  using ::tanh;

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR float
  tanh(float __x)
  { return __builtin_tanhf(__x); }

  inline _GLIBCXX_CONSTEXPR long double
  tanh(long double __x)
  { return __builtin_tanhl(__x); }
#endif

  template<typename _Tp>
    inline _GLIBCXX_CONSTEXPR
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    tanh(_Tp __x)
    { return __builtin_tanh(__x); }

#if _GLIBCXX_USE_C99_MATH
#if !_GLIBCXX_USE_C99_FP_MACROS_DYNAMIC

// These are possible macros imported from C99-land.
#undef fpclassify
#undef isfinite
#undef isinf
#undef isnan
#undef isnormal
#undef signbit
#undef isgreater
#undef isgreaterequal
#undef isless
#undef islessequal
#undef islessgreater
#undef isunordered

#if __cplusplus >= 201103L

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr int
  fpclassify(float __x)
  { return __builtin_fpclassify(FP_NAN, FP_INFINITE, FP_NORMAL,
    FP_SUBNORMAL, FP_ZERO, __x); }

  constexpr int
  fpclassify(double __x)
  { return __builtin_fpclassify(FP_NAN, FP_INFINITE, FP_NORMAL,
    FP_SUBNORMAL, FP_ZERO, __x); }

  constexpr int
  fpclassify(long double __x)
  { return __builtin_fpclassify(FP_NAN, FP_INFINITE, FP_NORMAL,
    FP_SUBNORMAL, FP_ZERO, __x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              int>::__type
    fpclassify(_Tp __x)
    { return __x != 0 ? FP_NORMAL : FP_ZERO; }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr bool
  isfinite(float __x)
  { return __builtin_isfinite(__x); }

  constexpr bool
  isfinite(double __x)
  { return __builtin_isfinite(__x); }

  constexpr bool
  isfinite(long double __x)
  { return __builtin_isfinite(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isfinite(_Tp __x)
    { return true; }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr bool
  isinf(float __x)
  { return __builtin_isinf(__x); }

#if _GLIBCXX_HAVE_OBSOLETE_ISINF \
  && !_GLIBCXX_NO_OBSOLETE_ISINF_ISNAN_DYNAMIC
  using ::isinf;
#else
  constexpr bool
  isinf(double __x)
  { return __builtin_isinf(__x); }
#endif

  constexpr bool
  isinf(long double __x)
  { return __builtin_isinf(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isinf(_Tp __x)
    { return false; }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr bool
  isnan(float __x)
  { return __builtin_isnan(__x); }

#if _GLIBCXX_HAVE_OBSOLETE_ISNAN \
  && !_GLIBCXX_NO_OBSOLETE_ISINF_ISNAN_DYNAMIC
  using ::isnan;
#else
  constexpr bool
  isnan(double __x)
  { return __builtin_isnan(__x); }
#endif

  constexpr bool
  isnan(long double __x)
  { return __builtin_isnan(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isnan(_Tp __x)
    { return false; }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr bool
  isnormal(float __x)
  { return __builtin_isnormal(__x); }

  constexpr bool
  isnormal(double __x)
  { return __builtin_isnormal(__x); }

  constexpr bool
  isnormal(long double __x)
  { return __builtin_isnormal(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isnormal(_Tp __x)
    { return __x != 0 ? true : false; }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  // Note: middle-end/36757 is fixed, __builtin_signbit is type-generic.
  constexpr bool
  signbit(float __x)
  { return __builtin_signbit(__x); }

  constexpr bool
  signbit(double __x)
  { return __builtin_signbit(__x); }

  constexpr bool
  signbit(long double __x)
  { return __builtin_signbit(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    signbit(_Tp __x)
    { return __x < 0 ? true : false; }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr bool
  isgreater(float __x, float __y)
  { return __builtin_isgreater(__x, __y); }

  constexpr bool
  isgreater(double __x, double __y)
  { return __builtin_isgreater(__x, __y); }

  constexpr bool
  isgreater(long double __x, long double __y)
  { return __builtin_isgreater(__x, __y); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isgreater(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isgreater(__type(__x), __type(__y));
    }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr bool
  isgreaterequal(float __x, float __y)
  { return __builtin_isgreaterequal(__x, __y); }

  constexpr bool
  isgreaterequal(double __x, double __y)
  { return __builtin_isgreaterequal(__x, __y); }

  constexpr bool
  isgreaterequal(long double __x, long double __y)
  { return __builtin_isgreaterequal(__x, __y); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isgreaterequal(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isgreaterequal(__type(__x), __type(__y));
    }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr bool
  isless(float __x, float __y)
  { return __builtin_isless(__x, __y); }

  constexpr bool
  isless(double __x, double __y)
  { return __builtin_isless(__x, __y); }

  constexpr bool
  isless(long double __x, long double __y)
  { return __builtin_isless(__x, __y); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isless(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isless(__type(__x), __type(__y));
    }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr bool
  islessequal(float __x, float __y)
  { return __builtin_islessequal(__x, __y); }

  constexpr bool
  islessequal(double __x, double __y)
  { return __builtin_islessequal(__x, __y); }

  constexpr bool
  islessequal(long double __x, long double __y)
  { return __builtin_islessequal(__x, __y); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    islessequal(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_islessequal(__type(__x), __type(__y));
    }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr bool
  islessgreater(float __x, float __y)
  { return __builtin_islessgreater(__x, __y); }

  constexpr bool
  islessgreater(double __x, double __y)
  { return __builtin_islessgreater(__x, __y); }

  constexpr bool
  islessgreater(long double __x, long double __y)
  { return __builtin_islessgreater(__x, __y); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    islessgreater(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_islessgreater(__type(__x), __type(__y));
    }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr bool
  isunordered(float __x, float __y)
  { return __builtin_isunordered(__x, __y); }

  constexpr bool
  isunordered(double __x, double __y)
  { return __builtin_isunordered(__x, __y); }

  constexpr bool
  isunordered(long double __x, long double __y)
  { return __builtin_isunordered(__x, __y); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isunordered(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isunordered(__type(__x), __type(__y));
    }
#endif

#else

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    fpclassify(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_fpclassify(FP_NAN, FP_INFINITE, FP_NORMAL,
      FP_SUBNORMAL, FP_ZERO, __type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isfinite(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isfinite(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isinf(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isinf(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isnan(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isnan(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isnormal(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isnormal(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    signbit(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_signbit(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isgreater(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isgreater(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isgreaterequal(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isgreaterequal(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isless(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isless(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    islessequal(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_islessequal(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    islessgreater(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_islessgreater(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isunordered(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isunordered(__type(__f1), __type(__f2));
    }


  /// Additional overloads.
#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  acosh(float __x)
  { return __builtin_acoshf(__x); }

  constexpr long double
  acosh(long double __x)
  { return __builtin_acoshl(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    acosh(_Tp __x)
    { return __builtin_acosh(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  asinh(float __x)
  { return __builtin_asinhf(__x); }

  constexpr long double
  asinh(long double __x)
  { return __builtin_asinhl(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    asinh(_Tp __x)
    { return __builtin_asinh(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  atanh(float __x)
  { return __builtin_atanhf(__x); }

  constexpr long double
  atanh(long double __x)
  { return __builtin_atanhl(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    atanh(_Tp __x)
    { return __builtin_atanh(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  cbrt(float __x)
  { return __builtin_cbrtf(__x); }

  constexpr long double
  cbrt(long double __x)
  { return __builtin_cbrtl(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    cbrt(_Tp __x)
    { return __builtin_cbrt(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  copysign(float __x, float __y)
  { return __builtin_copysignf(__x, __y); }

  constexpr long double
  copysign(long double __x, long double __y)
  { return __builtin_copysignl(__x, __y); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    copysign(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return copysign(__type(__x), __type(__y));
    }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  erf(float __x)
  { return __builtin_erff(__x); }

  constexpr long double
  erf(long double __x)
  { return __builtin_erfl(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    erf(_Tp __x)
    { return __builtin_erf(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  erfc(float __x)
  { return __builtin_erfcf(__x); }

  constexpr long double
  erfc(long double __x)
  { return __builtin_erfcl(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    erfc(_Tp __x)
    { return __builtin_erfc(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  exp2(float __x)
  { return __builtin_exp2f(__x); }

  constexpr long double
  exp2(long double __x)
  { return __builtin_exp2l(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    exp2(_Tp __x)
    { return __builtin_exp2(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  expm1(float __x)
  { return __builtin_expm1f(__x); }

  constexpr long double
  expm1(long double __x)
  { return __builtin_expm1l(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    expm1(_Tp __x)
    { return __builtin_expm1(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  fdim(float __x, float __y)
  { return __builtin_fdimf(__x, __y); }

  constexpr long double
  fdim(long double __x, long double __y)
  { return __builtin_fdiml(__x, __y); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fdim(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fdim(__type(__x), __type(__y));
    }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  fma(float __x, float __y, float __z)
  { return __builtin_fmaf(__x, __y, __z); }

  constexpr long double
  fma(long double __x, long double __y, long double __z)
  { return __builtin_fmal(__x, __y, __z); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp, typename _Up, typename _Vp>
    constexpr typename __gnu_cxx::__promote_3<_Tp, _Up, _Vp>::__type
    fma(_Tp __x, _Up __y, _Vp __z)
    {
      typedef typename __gnu_cxx::__promote_3<_Tp, _Up, _Vp>::__type __type;
      return fma(__type(__x), __type(__y), __type(__z));
    }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  fmax(float __x, float __y)
  { return __builtin_fmaxf(__x, __y); }

  constexpr long double
  fmax(long double __x, long double __y)
  { return __builtin_fmaxl(__x, __y); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fmax(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fmax(__type(__x), __type(__y));
    }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  fmin(float __x, float __y)
  { return __builtin_fminf(__x, __y); }

  constexpr long double
  fmin(long double __x, long double __y)
  { return __builtin_fminl(__x, __y); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fmin(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fmin(__type(__x), __type(__y));
    }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  hypot(float __x, float __y)
  { return __builtin_hypotf(__x, __y); }

  constexpr long double
  hypot(long double __x, long double __y)
  { return __builtin_hypotl(__x, __y); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    hypot(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return hypot(__type(__x), __type(__y));
    }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr int
  ilogb(float __x)
  { return __builtin_ilogbf(__x); }

  constexpr int
  ilogb(long double __x)
  { return __builtin_ilogbl(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    int>::__type
    ilogb(_Tp __x)
    { return __builtin_ilogb(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  lgamma(float __x)
  { return __builtin_lgammaf(__x); }

  constexpr long double
  lgamma(long double __x)
  { return __builtin_lgammal(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    lgamma(_Tp __x)
    { return __builtin_lgamma(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr long long
  llrint(float __x)
  { return __builtin_llrintf(__x); }

  constexpr long long
  llrint(long double __x)
  { return __builtin_llrintl(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long long>::__type
    llrint(_Tp __x)
    { return __builtin_llrint(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr long long
  llround(float __x)
  { return __builtin_llroundf(__x); }

  constexpr long long
  llround(long double __x)
  { return __builtin_llroundl(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long long>::__type
    llround(_Tp __x)
    { return __builtin_llround(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  log1p(float __x)
  { return __builtin_log1pf(__x); }

  constexpr long double
  log1p(long double __x)
  { return __builtin_log1pl(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    log1p(_Tp __x)
    { return __builtin_log1p(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  // DR 568.
  constexpr float
  log2(float __x)
  { return __builtin_log2f(__x); }

  constexpr long double
  log2(long double __x)
  { return __builtin_log2l(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    log2(_Tp __x)
    { return __builtin_log2(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  logb(float __x)
  { return __builtin_logbf(__x); }

  constexpr long double
  logb(long double __x)
  { return __builtin_logbl(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    logb(_Tp __x)
    { return __builtin_logb(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr long
  lrint(float __x)
  { return __builtin_lrintf(__x); }

  constexpr long
  lrint(long double __x)
  { return __builtin_lrintl(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long>::__type
    lrint(_Tp __x)
    { return __builtin_lrint(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr long
  lround(float __x)
  { return __builtin_lroundf(__x); }

  constexpr long
  lround(long double __x)
  { return __builtin_lroundl(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long>::__type
    lround(_Tp __x)
    { return __builtin_lround(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  nearbyint(float __x)
  { return __builtin_nearbyintf(__x); }

  constexpr long double
  nearbyint(long double __x)
  { return __builtin_nearbyintl(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    nearbyint(_Tp __x)
    { return __builtin_nearbyint(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  nextafter(float __x, float __y)
  { return __builtin_nextafterf(__x, __y); }

  constexpr long double
  nextafter(long double __x, long double __y)
  { return __builtin_nextafterl(__x, __y); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    nextafter(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return nextafter(__type(__x), __type(__y));
    }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  nexttoward(float __x, long double __y)
  { return __builtin_nexttowardf(__x, __y); }

  constexpr long double
  nexttoward(long double __x, long double __y)
  { return __builtin_nexttowardl(__x, __y); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    nexttoward(_Tp __x, long double __y)
    { return __builtin_nexttoward(__x, __y); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  remainder(float __x, float __y)
  { return __builtin_remainderf(__x, __y); }

  constexpr long double
  remainder(long double __x, long double __y)
  { return __builtin_remainderl(__x, __y); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    remainder(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return remainder(__type(__x), __type(__y));
    }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  inline float
  remquo(float __x, float __y, int* __pquo)
  { return __builtin_remquof(__x, __y, __pquo); }

  inline long double
  remquo(long double __x, long double __y, int* __pquo)
  { return __builtin_remquol(__x, __y, __pquo); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp, typename _Up>
    inline typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    remquo(_Tp __x, _Up __y, int* __pquo)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return remquo(__type(__x), __type(__y), __pquo);
    }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  rint(float __x)
  { return __builtin_rintf(__x); }

  constexpr long double
  rint(long double __x)
  { return __builtin_rintl(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    rint(_Tp __x)
    { return __builtin_rint(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  round(float __x)
  { return __builtin_roundf(__x); }

  constexpr long double
  round(long double __x)
  { return __builtin_roundl(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    round(_Tp __x)
    { return __builtin_round(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  scalbln(float __x, long __ex)
  { return __builtin_scalblnf(__x, __ex); }

  constexpr long double
  scalbln(long double __x, long __ex)
  { return __builtin_scalblnl(__x, __ex); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    scalbln(_Tp __x, long __ex)
    { return __builtin_scalbln(__x, __ex); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  scalbn(float __x, int __ex)
  { return __builtin_scalbnf(__x, __ex); }

  constexpr long double
  scalbn(long double __x, int __ex)
  { return __builtin_scalbnl(__x, __ex); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    scalbn(_Tp __x, int __ex)
    { return __builtin_scalbn(__x, __ex); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  tgamma(float __x)
  { return __builtin_tgammaf(__x); }

  constexpr long double
  tgamma(long double __x)
  { return __builtin_tgammal(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    tgamma(_Tp __x)
    { return __builtin_tgamma(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP
  constexpr float
  trunc(float __x)
  { return __builtin_truncf(__x); }

  constexpr long double
  trunc(long double __x)
  { return __builtin_truncl(__x); }
#endif

#ifndef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    trunc(_Tp __x)
    { return __builtin_trunc(__x); }
#endif

#endif // _GLIBCXX_USE_C99_MATH_TR1
#endif // C++11

#if __cplusplus > 201402L

  // [c.math.hypot3], three-dimensional hypotenuse
#define __cpp_lib_hypot 201603

  template<typename _Tp>
    inline _Tp
    __hypot3(_Tp __x, _Tp __y, _Tp __z)
    {
      __x = std::abs(__x);
      __y = std::abs(__y);
      __z = std::abs(__z);
      if (_Tp __a = __x < __y ? __y < __z ? __z : __y : __x < __z ? __z : __x)
 return __a * std::sqrt((__x / __a) * (__x / __a)
          + (__y / __a) * (__y / __a)
          + (__z / __a) * (__z / __a));
      else
 return {};
    }

  inline float
  hypot(float __x, float __y, float __z)
  { return std::__hypot3<float>(__x, __y, __z); }

  inline double
  hypot(double __x, double __y, double __z)
  { return std::__hypot3<double>(__x, __y, __z); }

  inline long double
  hypot(long double __x, long double __y, long double __z)
  { return std::__hypot3<long double>(__x, __y, __z); }

  template<typename _Tp, typename _Up, typename _Vp>
    typename __gnu_cxx::__promote_3<_Tp, _Up, _Vp>::__type
    hypot(_Tp __x, _Up __y, _Vp __z)
    {
      using __type = typename __gnu_cxx::__promote_3<_Tp, _Up, _Vp>::__type;
      return std::__hypot3<__type>(__x, __y, __z);
    }
#endif // C++17

#if __cplusplus > 201703L
  // linear interpolation
# define __cpp_lib_interpolate 201902L

  template<typename _Fp>
    constexpr _Fp
    __lerp(_Fp __a, _Fp __b, _Fp __t) noexcept
    {
      if (__a <= 0 && __b >= 0 || __a >= 0 && __b <= 0)
 return __t * __b + (1 - __t) * __a;

      if (__t == 1)
 return __b;                        // exact

      // Exact at __t=0, monotonic except near __t=1,
      // bounded, determinate, and consistent:
      const _Fp __x = __a + __t * (__b - __a);
      return __t > 1 == __b > __a
 ? (__b < __x ? __x : __b)
 : (__b > __x ? __x : __b);  // monotonic near __t=1
    }

  constexpr float
  lerp(float __a, float __b, float __t) noexcept
  { return std::__lerp(__a, __b, __t); }

  constexpr double
  lerp(double __a, double __b, double __t) noexcept
  { return std::__lerp(__a, __b, __t); }

  constexpr long double
  lerp(long double __a, long double __b, long double __t) noexcept
  { return std::__lerp(__a, __b, __t); }
#endif // C++20

_GLIBCXX_END_NAMESPACE_VERSION
} // namespace

#if _GLIBCXX_USE_STD_SPEC_FUNCS
#  include <bits/specfun.h>
#endif

} // extern "C++"

#endif

*/
