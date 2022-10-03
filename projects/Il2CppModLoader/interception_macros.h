#pragma once

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception.h>
#include <Il2CppModLoader/windows_api/memory.h>

#define IL2CPP_REGISTER_METHOD(address, return_type, name, params) \
    inline return_type(*name) params = nullptr;                     \
    namespace binding {                                            \
        inline modloader::interception::binding name##_binding(address, reinterpret_cast<void**>(&name), #name); \
    }

// We may use this later.
#define IL2CPP_REGISTER_METHODINFO(address, name) \
    inline Il2CppMethodInfo* name = reinterpret_cast<Il2CppMethodInfo*>(modloader::win::memory::get_game_assembly_address() + address);

#define IL2CPP_INTERCEPT(method_namespace, return_type, method_name, params)                                                                         \
    static_assert(std::is_same<decltype(app::classes::method_namespace::method_name), return_type(*) params>::value, "incorrect function type");     \
                                                                                                                                                     \
    namespace next::method_namespace {                                                                                                               \
        return_type(*(method_name)) params = nullptr;                                                                                                \
    }                                                                                                                                                \
    \
    /* I hate myself for this */                                                                                                                     \
    namespace _intercept::_internal##_##method_namespace {                                                                                           \
        return_type method_name params;                                                                                                              \
        modloader::interception::intercept method_name##_intercept(                                                                                  \
                reinterpret_cast<void**>(&app::classes::method_namespace::method_name),                                                              \
                reinterpret_cast<void**>(&next::method_namespace::method_name),                                                                      \
                method_name,                                                                                                                         \
                #method_namespace "::" #method_name                                                                                                   \
        ); \
    }                                                                                                                                                \
                                                                                                                                                     \
    return_type _intercept::_internal##_##method_namespace::method_name params

#define GUARD(namezpace, nested, klass_name, name, ...)                                                                                                           \
    {                                                                                                                                                             \
        auto klass = std::string_view(#nested).empty() ? il2cpp::get_class(#namezpace, #klass_name) : il2cpp::get_nested_class(#namezpace, #nested, #klass_name); \
        if (!il2cpp::is_assignable(this_ptr, klass))                                                                                                              \
            return name(this_ptr, __VA_ARGS__);                                                                                                                   \
    }\
