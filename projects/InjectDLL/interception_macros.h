#pragma once

#include "interception.h"

// TEMP
#define INTERCEPT(address, return_type, name, params) \
INTERNAL_INTERCEPT(address, return_type, name, params)

#define BINDING(address, return_type, name, params) \
INTERNAL_BINDING(address, return_type, name, params)

// Overloads

#define STATIC_IL2CPP_INTERCEPT_OVERLOAD(namezpace, klass_name, return_type, method_name, params, overloads) \
IL2CPP_INTERCEPT_HELPER(true, namezpace, klass_name,, return_type, method_name, klass_name##_##method_name, params, overloads)

#define STATIC_IL2CPP_BINDING_OVERLOAD(namezpace, klass_name, return_type, method_name, params, overloads) \
IL2CPP_BINDING_HELPER(true, namezpace, klass_name,, return_type, method_name, klass_name##_##method_name, params, overloads)

#define IL2CPP_INTERCEPT_OVERLOAD(namezpace, klass_name, return_type, method_name, params, overloads) \
IL2CPP_INTERCEPT_HELPER(false, namezpace, klass_name,, return_type, method_name, klass_name##_##method_name, params, overloads)

#define IL2CPP_BINDING_OVERLOAD(namezpace, klass_name, return_type, method_name, params, overloads) \
IL2CPP_BINDING_HELPER(false, namezpace, klass_name,, return_type, method_name, klass_name##_##method_name, params, overloads)

// Nested

#define NESTED_STATIC_IL2CPP_INTERCEPT(namezpace, klass_name, nested, return_type, method_name, params) \
IL2CPP_INTERCEPT_HELPER(true, namezpace, klass_name, nested, return_type, method_name, klass_name##_##nested##_##method_name, params,)

#define NESTED_STATIC_IL2CPP_BINDING(namezpace, klass_name, nested, return_type, method_name, params) \
IL2CPP_BINDING_HELPER(true, namezpace, klass_name, nested, return_type, method_name, klass_name##_##nested##_##method_name, params,)

#define NESTED_IL2CPP_INTERCEPT(namezpace, klass_name, nested, return_type, method_name, params) \
IL2CPP_INTERCEPT_HELPER(false, namezpace, klass_name, nested, return_type, method_name, klass_name##_##nested##_##method_name, params,)

#define NESTED_IL2CPP_BINDING(namezpace, klass_name, return_type, method_name, params) \
IL2CPP_BINDING_HELPER(false, namezpace, klass_name, nested, return_type, method_name, klass_name##_##nested##_##method_name, params,)

// Normal

#define STATIC_IL2CPP_INTERCEPT(namezpace, klass_name, return_type, method_name, params) \
IL2CPP_INTERCEPT_HELPER(true, namezpace, klass_name,, return_type, method_name, klass_name##_##method_name, params,)

#define STATIC_IL2CPP_BINDING(namezpace, klass_name, return_type, method_name, params) \
IL2CPP_BINDING_HELPER(true, namezpace, klass_name,, return_type, method_name, klass_name##_##method_name, params,)

#define IL2CPP_INTERCEPT(namezpace, klass_name, return_type, method_name, params) \
IL2CPP_INTERCEPT_HELPER(false, namezpace, klass_name,, return_type, method_name, klass_name##_##method_name, params,)

#define IL2CPP_BINDING(namezpace, klass_name, return_type, method_name, params) \
IL2CPP_BINDING_HELPER(false, namezpace, klass_name,, return_type, method_name, klass_name##_##method_name, params,)

#define IL2CPP_INTERCEPT_HELPER(ztatic, namezpace, klass_name, nested, return_type, method_name, name_override, params, overload) \
return_type (*name_override) params; \
return_type name_override##_intercept params; \
intercept::il2cpp_intercept binding_##name_override (ztatic, #namezpace, #klass_name, #nested, #method_name, #params, #overload, &reinterpret_cast<void*>(name_override), name_override##_intercept); \
return_type name_override##_intercept params

#define IL2CPP_BINDING_HELPER(ztatic, namezpace, klass_name, nested, return_type, method_name, name_override, params, overload) \
return_type (*name_override) params; \
intercept::il2cpp_intercept binding_##name_override (ztatic, #namezpace, #klass_name, #nested, #method_name, #params, #overload, &reinterpret_cast<void*>(name_override), nullptr); \

#define INTERNAL_INTERCEPT(address, return_type, name, params) \
return_type (*name) params; \
return_type name##_intercept params; \
intercept::intercept binding_##name (address, &reinterpret_cast<void*>(name), name##_intercept, #name); \
return_type name##_intercept params

#define INTERNAL_BINDING(address, return_type, name, params) \
return_type (*name) params; \
intercept::intercept binding_##name (address, &reinterpret_cast<void*>(name), nullptr, #name);
