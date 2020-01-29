#ifndef GLM_EXT_TYPE_FLOAT4_H
#define GLM_EXT_TYPE_FLOAT4_H

#include "../detail/qualifier.h"
#include "type_bool4.h"
#include "../detail/namespace_begin.inl"

#define L 4
#define T float
#define Q defaultp
#include "../detail/type_vec4.inl"
#include "../detail/func_vector_common.inl"
#include "../detail/func_vector_trigonometric.inl"
#include "../detail/func_vector_exponential.inl"
#include "../detail/func_vector_rational.inl"
#undef L
#undef T
#undef Q

typedef vec(4, float, defaultp) vec4;

#include "../detail/namespace_end.inl"

#endif /* GLM_EXT_TYPE_FLOAT4_H */