#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ComplexBindingPropertiesAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ComplexBindingPropertiesAttribute__Class** type_info;
        inline app::ComplexBindingPropertiesAttribute__Class* get_class() {
            return il2cpp::get_class<app::ComplexBindingPropertiesAttribute__Class>(type_info, "System.ComponentModel", "ComplexBindingPropertiesAttribute");
        }
        inline app::ComplexBindingPropertiesAttribute* create() {
            return il2cpp::create_object<app::ComplexBindingPropertiesAttribute>(get_class());
        }
    } // namespace ComplexBindingPropertiesAttribute
} // namespace app::classes::types
