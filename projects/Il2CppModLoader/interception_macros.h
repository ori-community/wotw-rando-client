#pragma once

#include "interception.h"

// TEMP
#define INTERCEPT(address, return_type, name, params) \
INTERNAL_INTERCEPT(address, return_type, name, params)

#define BINDING(address, return_type, name, params) \
INTERNAL_BINDING(address, return_type, name, params)

// Overloads

#define STATIC_IL2CPP_INTERCEPT_OVERLOAD(namezpace, klass_name, return_type, method_name, params, overloads) \
IL2CPP_INTERCEPT_HELPER(true, namezpace, klass_name, return_type, method_name, method_name, params, overloads)

#define STATIC_IL2CPP_BINDING_OVERLOAD(namezpace, klass_name, return_type, method_name, params, overloads) \
IL2CPP_BINDING_HELPER(true, namezpace, klass_name, return_type, method_name, method_name, params, overloads)

#define IL2CPP_INTERCEPT_OVERLOAD(namezpace, klass_name, return_type, method_name, params, overloads) \
IL2CPP_INTERCEPT_HELPER(false, namezpace, klass_name, return_type, method_name, method_name, params, overloads)

#define IL2CPP_BINDING_OVERLOAD(namezpace, klass_name, return_type, method_name, params, overloads) \
IL2CPP_BINDING_HELPER(false, namezpace, klass_name, return_type, method_name, method_name, params, overloads)

// Nested

#define NESTED_STATIC_IL2CPP_INTERCEPT(namezpace, klass_name, nested, return_type, method_name, params) \
NAMED_NESTED_STATIC_IL2CPP_INTERCEPT(namezpace, klass_name, nested, return_type, method_name, method_name, params)

#define NESTED_STATIC_IL2CPP_BINDING(namezpace, klass_name, nested, return_type, method_name, params) \
NAMED_NESTED_STATIC_IL2CPP_BINDING(namezpace, klass_name, nested, return_type, method_name, method_name, params)

#define NESTED_IL2CPP_INTERCEPT(namezpace, klass_name, nested, return_type, method_name, params) \
NAMED_NESTED_IL2CPP_INTERCEPT(namezpace, klass_name, nested, return_type, method_name, method_name, params)

#define NESTED_IL2CPP_BINDING(namezpace, klass_name, nested, return_type, method_name, params) \
NAMED_NESTED_IL2CPP_BINDING(namezpace, klass_name, nested, return_type, method_name, method_name, params)

// Nested Named

#define NAMED_NESTED_STATIC_IL2CPP_INTERCEPT(namezpace, klass_name, nested, return_type, method_name, name, params) \
IL2CPP_INTERCEPT_HELPER_NESTED(true, namezpace, klass_name, nested, return_type, method_name, name, params,)

#define NAMED_NESTED_STATIC_IL2CPP_BINDING(namezpace, klass_name, nested, return_type, method_name, name, params) \
IL2CPP_BINDING_HELPER_NESTED(true, namezpace, klass_name, nested, return_type, method_name, name, params,)

#define NAMED_NESTED_IL2CPP_INTERCEPT(namezpace, klass_name, nested, return_type, method_name, name, params) \
IL2CPP_INTERCEPT_HELPER_NESTED(false, namezpace, klass_name, nested, return_type, method_name, name, params,)

#define NAMED_NESTED_IL2CPP_BINDING(namezpace, klass_name, nested, return_type, method_name, name, params) \
IL2CPP_BINDING_HELPER_NESTED(false, namezpace, klass_name, nested, return_type, method_name, name, params,)

// Normal

#define STATIC_IL2CPP_INTERCEPT(namezpace, klass_name, return_type, method_name, params) \
NAMED_STATIC_IL2CPP_INTERCEPT(namezpace, klass_name, return_type, method_name, method_name, params)

#define STATIC_IL2CPP_BINDING(namezpace, klass_name, return_type, method_name, params) \
NAMED_STATIC_IL2CPP_BINDING(namezpace, klass_name, return_type, method_name, method_name, params)

#define IL2CPP_INTERCEPT(namezpace, klass_name, return_type, method_name, params) \
NAMED_IL2CPP_INTERCEPT(namezpace, klass_name, return_type, method_name, method_name, params)

#define IL2CPP_BINDING(namezpace, klass_name, return_type, method_name, params) \
NAMED_IL2CPP_BINDING(namezpace, klass_name, return_type, method_name, method_name, params)

// Named

#define NAMED_STATIC_IL2CPP_INTERCEPT(namezpace, klass_name, return_type, method_name, name, params) \
IL2CPP_INTERCEPT_HELPER(true, namezpace, klass_name, return_type, method_name, name, params,)

#define NAMED_STATIC_IL2CPP_BINDING(namezpace, klass_name, return_type, method_name, name, params) \
IL2CPP_BINDING_HELPER(true, namezpace, klass_name, return_type, method_name, name, params,)

#define NAMED_IL2CPP_INTERCEPT(namezpace, klass_name, return_type, method_name, name, params) \
IL2CPP_INTERCEPT_HELPER(false, namezpace, klass_name, return_type, method_name, name, params,)

#define NAMED_IL2CPP_BINDING(namezpace, klass_name, return_type, method_name, name, params) \
IL2CPP_BINDING_HELPER(false, namezpace, klass_name, return_type, method_name, name, params,)

// Helpers

#define IL2CPP_INTERCEPT_HELPER_NESTED(ztatic, namezpace, klass_name, nested, return_type, method_name, name_override, params, overload) \
namespace klass_name { \
namespace nested { \
return_type (*name_override) params; \
return_type name_override##_intercept params; \
modloader::intercept::il2cpp_intercept binding_##name_override (ztatic, #namezpace, #klass_name, #nested, #method_name, #params, #overload, &reinterpret_cast<void*>(name_override), name_override##_intercept); \
}} \
return_type klass_name::nested::name_override##_intercept params

#define IL2CPP_BINDING_HELPER_NESTED(ztatic, namezpace, klass_name, nested, return_type, method_name, name_override, params, overload) \
namespace klass_name { \
namespace nested { \
return_type (*name_override) params; \
modloader::intercept::il2cpp_intercept binding_##name_override (ztatic, #namezpace, #klass_name, #nested, #method_name, #params, #overload, &reinterpret_cast<void*>(name_override), nullptr); \
}}

#define IL2CPP_INTERCEPT_HELPER(ztatic, namezpace, klass_name, return_type, method_name, name_override, params, overload) \
namespace klass_name { \
return_type (*name_override) params; \
return_type name_override##_intercept params; \
modloader::intercept::il2cpp_intercept binding_##name_override (ztatic, #namezpace, #klass_name, "", #method_name, #params, #overload, &reinterpret_cast<void*>(name_override), name_override##_intercept); \
} \
return_type klass_name::name_override##_intercept params

#define IL2CPP_BINDING_HELPER(ztatic, namezpace, klass_name, return_type, method_name, name_override, params, overload) \
namespace klass_name { \
return_type (*name_override) params; \
modloader::intercept::il2cpp_intercept binding_##name_override (ztatic, #namezpace, #klass_name, "", #method_name, #params, #overload, &reinterpret_cast<void*>(name_override), nullptr); \
}

#define INTERNAL_INTERCEPT(address, return_type, name, params) \
return_type (*name) params; \
return_type name##_intercept params; \
modloader::intercept::intercept binding_##name (address, &reinterpret_cast<void*>(name), name##_intercept, #name); \
return_type name##_intercept params

#define INTERNAL_BINDING(address, return_type, name, params) \
return_type (*name) params; \
modloader::intercept::intercept binding_##name (address, &reinterpret_cast<void*>(name), nullptr, #name);
