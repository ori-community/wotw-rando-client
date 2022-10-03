#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BindableAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BindableAttribute__Class** type_info;
        inline app::BindableAttribute__Class* get_class() {
            return il2cpp::get_class<app::BindableAttribute__Class>(type_info, "System.ComponentModel", "BindableAttribute");
        }
        inline app::BindableAttribute* create() {
            return il2cpp::create_object<app::BindableAttribute>(get_class());
        }
    } // namespace BindableAttribute
} // namespace app::classes::types
