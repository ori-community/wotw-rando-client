#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListBindableAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListBindableAttribute__Class** type_info;
        inline app::ListBindableAttribute__Class* get_class() {
            return il2cpp::get_class<app::ListBindableAttribute__Class>(type_info, "System.ComponentModel", "ListBindableAttribute");
        }
        inline app::ListBindableAttribute* create() {
            return il2cpp::create_object<app::ListBindableAttribute>(get_class());
        }
    } // namespace ListBindableAttribute
} // namespace app::classes::types
