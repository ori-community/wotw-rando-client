#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace YieldAwaitable_YieldAwaiter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::YieldAwaitable_YieldAwaiter__Class** type_info;
        inline app::YieldAwaitable_YieldAwaiter__Class* get_class() {
            return il2cpp::get_nested_class<app::YieldAwaitable_YieldAwaiter__Class>(type_info, "System.Runtime.CompilerServices", "YieldAwaitable", "YieldAwaiter");
        }
        inline app::YieldAwaitable_YieldAwaiter* create() {
            return il2cpp::create_object<app::YieldAwaitable_YieldAwaiter>(get_class());
        }
        inline app::YieldAwaitable_YieldAwaiter__Boxed* box(app::YieldAwaitable_YieldAwaiter value) {
            return il2cpp::box_value<app::YieldAwaitable_YieldAwaiter__Boxed>(get_class(), value);
        }
    } // namespace YieldAwaitable_YieldAwaiter
} // namespace app::classes::types
