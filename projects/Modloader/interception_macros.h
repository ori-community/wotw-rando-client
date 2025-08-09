#pragma once

#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception.h>
#include <Modloader/windows_api/memory.h>

#define IL2CPP_REGISTER_METHOD(address, return_type, name, ...)                                                                                                \
    inline return_type (*name)(__VA_ARGS__) = nullptr;                                                                                                         \
    namespace binding {                                                                                                                                        \
        inline modloader::interception::Binding name##_binding(address, reinterpret_cast<void**>(&(name)), #name);                                             \
    }

// We may use this later.
#define IL2CPP_REGISTER_METHODINFO(address, name)                                                                                                              \
    inline Il2CppMethodInfo* name = reinterpret_cast<Il2CppMethodInfo*>(modloader::win::memory::get_game_assembly_address() + (address));

#define IL2CPP_INTERCEPT(return_type, namespace_and_class_name, method_name, ...)                                                                              \
    static_assert(                                                                                                                                             \
        std::is_same<decltype(app::classes::namespace_and_class_name::method_name), return_type (*)(__VA_ARGS__)>::value, "incorrect function type"            \
    );                                                                                                                                                         \
                                                                                                                                                               \
    namespace next::namespace_and_class_name {                                                                                                                 \
        return_type (*(method_name))(__VA_ARGS__) = nullptr;                                                                                                   \
    }                                                                                                                                                          \
                                                                                                                                                               \
    namespace _intercept::_internal##_##namespace_and_class_name {                                                                                             \
        return_type method_name(__VA_ARGS__);                                                                                                                  \
        modloader::interception::Intercept method_name##_intercept(                                                                                            \
            reinterpret_cast<void**>(&app::classes::namespace_and_class_name::method_name),                                                                    \
            reinterpret_cast<void**>(&next::namespace_and_class_name::method_name),                                                                            \
            reinterpret_cast<void*>(method_name),                                                                                                              \
            #namespace_and_class_name "::" #method_name                                                                                                        \
        );                                                                                                                                                     \
    }                                                                                                                                                          \
                                                                                                                                                               \
    return_type _intercept::_internal##_##namespace_and_class_name::method_name(__VA_ARGS__)

#define IL2CPP_INTERCEPT_WITH_ORDER(order, return_type, namespace_and_class_name, method_name, ...)                                                            \
    static_assert(                                                                                                                                             \
        std::is_same<decltype(app::classes::namespace_and_class_name::method_name), return_type (*)(__VA_ARGS__)>::value, "incorrect function type"            \
    );                                                                                                                                                         \
                                                                                                                                                               \
    namespace next::namespace_and_class_name {                                                                                                                 \
        return_type (*(method_name))(__VA_ARGS__) = nullptr;                                                                                                   \
    }                                                                                                                                                          \
                                                                                                                                                               \
    namespace _intercept::_internal##_##namespace_and_class_name {                                                                                             \
        return_type method_name(__VA_ARGS__);                                                                                                                  \
        modloader::interception::Intercept method_name##_intercept(                                                                                            \
            reinterpret_cast<void**>(&app::classes::namespace_and_class_name::method_name),                                                                    \
            reinterpret_cast<void**>(&next::namespace_and_class_name::method_name),                                                                            \
            reinterpret_cast<void*>(method_name),                                                                                                              \
            #namespace_and_class_name "::" #method_name,                                                                                                       \
            order                                                                                                                                              \
        );                                                                                                                                                     \
    }                                                                                                                                                          \
                                                                                                                                                               \
    return_type _intercept::_internal##_##namespace_and_class_name::method_name(__VA_ARGS__)
