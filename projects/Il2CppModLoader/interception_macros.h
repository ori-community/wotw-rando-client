#pragma once

#include <Il2CppModLoader/interception.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#define DECLARE_BINDING(namezpace, klass_name, return_type, name, params) \
namespace klass_name { \
extern return_type (*(name)) params; \
}

#define DECLARE_INTERCEPT(namezpace, klass_name, return_type, name, params) \
namespace klass_name { \
return_type name##_intercept params; \
}
// Named Overloads

#define NAMED_STATIC_IL2CPP_INTERCEPT_OVERLOAD(namezpace, klass_name, return_type, method_name, name, params, overloads) \
IL2CPP_INTERCEPT_HELPER(true, namezpace, klass_name, return_type, method_name, name, params, overloads, 0)

#define NAMED_STATIC_IL2CPP_BINDING_OVERLOAD(namezpace, klass_name, return_type, method_name, name, params, overloads) \
IL2CPP_BINDING_HELPER(true, namezpace, klass_name, return_type, method_name, name, params, overloads, 0)

#define NAMED_IL2CPP_INTERCEPT_OVERLOAD(namezpace, klass_name, return_type, method_name, name, params, overloads) \
IL2CPP_INTERCEPT_HELPER(false, namezpace, klass_name, return_type, method_name, name, params, overloads, 0)

#define NAMED_IL2CPP_BINDING_OVERLOAD(namezpace, klass_name, return_type, method_name, name, params, overloads) \
IL2CPP_BINDING_HELPER(false, namezpace, klass_name, return_type, method_name, name, params, overloads, 0)

// Overloads

#define STATIC_IL2CPP_INTERCEPT_OVERLOAD(namezpace, klass_name, return_type, method_name, params, overloads) \
IL2CPP_INTERCEPT_HELPER(true, namezpace, klass_name, return_type, method_name, method_name, params, overloads, 0)

#define STATIC_IL2CPP_BINDING_OVERLOAD(namezpace, klass_name, return_type, method_name, params, overloads) \
IL2CPP_BINDING_HELPER(true, namezpace, klass_name, return_type, method_name, method_name, params, overloads, 0)

#define IL2CPP_INTERCEPT_OVERLOAD(namezpace, klass_name, return_type, method_name, params, overloads) \
IL2CPP_INTERCEPT_HELPER(false, namezpace, klass_name, return_type, method_name, method_name, params, overloads, 0)

#define IL2CPP_BINDING_OVERLOAD(namezpace, klass_name, return_type, method_name, params, overloads) \
IL2CPP_BINDING_HELPER(false, namezpace, klass_name, return_type, method_name, method_name, params, overloads, 0)

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
IL2CPP_INTERCEPT_HELPER_NESTED(true, namezpace, klass_name, nested, return_type, method_name, name, params,,0)

#define NAMED_NESTED_STATIC_IL2CPP_BINDING(namezpace, klass_name, nested, return_type, method_name, name, params) \
IL2CPP_BINDING_HELPER_NESTED(true, namezpace, klass_name, nested, return_type, method_name, name, params,,0)

#define NAMED_NESTED_IL2CPP_INTERCEPT(namezpace, klass_name, nested, return_type, method_name, name, params) \
IL2CPP_INTERCEPT_HELPER_NESTED(false, namezpace, klass_name, nested, return_type, method_name, name, params,,0)

#define NAMED_NESTED_IL2CPP_BINDING(namezpace, klass_name, nested, return_type, method_name, name, params) \
IL2CPP_BINDING_HELPER_NESTED(false, namezpace, klass_name, nested, return_type, method_name, name, params,,0)

// Normal

#define STATIC_IL2CPP_INTERCEPT(namezpace, klass_name, return_type, method_name, params) \
NAMED_STATIC_IL2CPP_INTERCEPT(namezpace, klass_name, return_type, method_name, method_name, params)

#define STATIC_IL2CPP_BINDING(namezpace, klass_name, return_type, method_name, params) \
NAMED_STATIC_IL2CPP_BINDING(namezpace, klass_name, return_type, method_name, method_name, params)

#define IL2CPP_INTERCEPT(namezpace, klass_name, return_type, method_name, params) \
NAMED_IL2CPP_INTERCEPT(namezpace, klass_name, return_type, method_name, method_name, params)

#define IL2CPP_BINDING(namezpace, klass_name, return_type, method_name, params) \
NAMED_IL2CPP_BINDING(namezpace, klass_name, return_type, method_name, method_name, params)

#define STATIC_IL2CPP_VIRTUAL_INTERCEPT(namezpace, klass_name, return_type, method_name, params, virtual_count) \
NAMED_STATIC_IL2CPP_VIRTUAL_INTERCEPT(namezpace, klass_name, return_type, method_name, method_name, params, virtual_count)

#define STATIC_IL2CPP_VIRTUAL_BINDING(namezpace, klass_name, return_type, method_name, params, virtual_count) \
NAMED_STATIC_IL2CPP_VIRTUAL_BINDING(namezpace, klass_name, return_type, method_name, method_name, params, virtual_count)

#define IL2CPP_VIRTUAL_INTERCEPT(namezpace, klass_name, return_type, method_name, params, virtual_count) \
NAMED_IL2CPP_VIRTUAL_INTERCEPT(namezpace, klass_name, return_type, method_name, method_name, params, virtual_count)

#define IL2CPP_VIRTUAL_BINDING(namezpace, klass_name, return_type, method_name, params, virtual_count) \
NAMED_IL2CPP_VIRTUAL_BINDING(namezpace, klass_name, return_type, method_name, method_name, params, virtual_count)

// Named

#define NAMED_STATIC_IL2CPP_INTERCEPT(namezpace, klass_name, return_type, method_name, name, params) \
IL2CPP_INTERCEPT_HELPER(true, namezpace, klass_name, return_type, method_name, name, params,,0)

#define NAMED_STATIC_IL2CPP_BINDING(namezpace, klass_name, return_type, method_name, name, params) \
IL2CPP_BINDING_HELPER(true, namezpace, klass_name, return_type, method_name, name, params,,0)

#define NAMED_IL2CPP_INTERCEPT(namezpace, klass_name, return_type, method_name, name, params) \
IL2CPP_INTERCEPT_HELPER(false, namezpace, klass_name, return_type, method_name, name, params,,0)

#define NAMED_IL2CPP_BINDING(namezpace, klass_name, return_type, method_name, name, params) \
IL2CPP_BINDING_HELPER(false, namezpace, klass_name, return_type, method_name, name, params,,0)

#define NAMED_STATIC_IL2CPP_VIRTUAL_INTERCEPT(namezpace, klass_name, return_type, method_name, name, params, virtual_count) \
IL2CPP_INTERCEPT_HELPER(true, namezpace, klass_name, return_type, method_name, name, params,,virtual_count)

#define NAMED_STATIC_IL2CPP_VIRTUAL_BINDING(namezpace, klass_name, return_type, method_name, name, params, virtual_count) \
IL2CPP_BINDING_HELPER(true, namezpace, klass_name, return_type, method_name, name, params,,virtual_count)

#define NAMED_IL2CPP_VIRTUAL_INTERCEPT(namezpace, klass_name, return_type, method_name, name, params, virtual_count) \
IL2CPP_INTERCEPT_HELPER(false, namezpace, klass_name, return_type, method_name, name, params,,virtual_count)

#define NAMED_IL2CPP_VIRTUAL_BINDING(namezpace, klass_name, return_type, method_name, name, params, virtual_count) \
IL2CPP_BINDING_HELPER(false, namezpace, klass_name, return_type, method_name, name, params,,virtual_count)

// Helpers

#define IL2CPP_INTERCEPT_HELPER_NESTED(ztatic, namezpace, klass_name, nested, return_type, method_name, name_override, params, overload, virtual_count) \
namespace klass_name { \
namespace nested { \
return_type (*(name_override)) params = nullptr; \
return_type name_override##_intercept params; \
modloader::intercept::il2cpp_intercept binding_##name_override (ztatic, #namezpace, #klass_name, #nested, #method_name, #params, #overload, reinterpret_cast<void**>(&name_override), name_override##_intercept, virtual_count); \
}} \
return_type klass_name::nested::name_override##_intercept params

#define IL2CPP_BINDING_HELPER_NESTED(ztatic, namezpace, klass_name, nested, return_type, method_name, name_override, params, overload, virtual_count) \
namespace klass_name { \
namespace nested { \
return_type (*(name_override)) params = nullptr; \
modloader::intercept::il2cpp_intercept binding_##name_override (ztatic, #namezpace, #klass_name, #nested, #method_name, #params, #overload, reinterpret_cast<void**>(&name_override), nullptr, virtual_count); \
}}

#define IL2CPP_INTERCEPT_HELPER(ztatic, namezpace, klass_name, return_type, method_name, name_override, params, overload, virtual_count) \
namespace klass_name { \
return_type (*(name_override)) params = nullptr; \
return_type name_override##_intercept params; \
modloader::intercept::il2cpp_intercept binding_##name_override (ztatic, #namezpace, #klass_name, "", #method_name, #params, #overload, reinterpret_cast<void**>(&name_override), name_override##_intercept, virtual_count); \
} \
return_type klass_name::name_override##_intercept params

// TODO: Use a different structure for bindings, we want them to apply after all the intercepts.
#define IL2CPP_BINDING_HELPER(ztatic, namezpace, klass_name, return_type, method_name, name_override, params, overload, virtual_count) \
namespace klass_name { \
return_type (*(name_override)) params = nullptr; \
modloader::intercept::il2cpp_intercept binding_##name_override (ztatic, #namezpace, #klass_name, "", #method_name, #params, #overload, reinterpret_cast<void**>(&name_override), nullptr, virtual_count); \
}

#define INTERNAL_INTERCEPT(address, return_type, name, params) \
return_type (*name) params = nullptr; \
return_type name##_intercept params; \
modloader::intercept::intercept binding_##name (address, reinterpret_cast<void**>(&name), name##_intercept, #name); \
return_type name##_intercept params

#define INTERNAL_BINDING(address, return_type, name, params) \
return_type (*name) params = nullptr; \
modloader::intercept::intercept binding_##name (address, reinterpret_cast<void**>(&name), nullptr, #name);

#define GUARD(namezpace, nested, klass_name, name, ...) \
{ auto klass = std::string_view( #nested ).empty() ? il2cpp::get_class(#namezpace, #klass_name) : il2cpp::get_nested_class(#namezpace, #nested, #klass_name); \
if (!il2cpp::is_assignable(this_ptr, klass)) return name(this_ptr, __VA_ARGS__ ); } \
