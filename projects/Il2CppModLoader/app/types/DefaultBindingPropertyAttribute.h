#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultBindingPropertyAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultBindingPropertyAttribute__Class** type_info;
        inline app::DefaultBindingPropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultBindingPropertyAttribute__Class>(type_info, "System.ComponentModel", "DefaultBindingPropertyAttribute");
        }
        inline app::DefaultBindingPropertyAttribute* create() {
            return il2cpp::create_object<app::DefaultBindingPropertyAttribute>(get_class());
        }
    } // namespace DefaultBindingPropertyAttribute
} // namespace app::classes::types
