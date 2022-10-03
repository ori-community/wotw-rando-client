#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LookupBindingPropertiesAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LookupBindingPropertiesAttribute__Class** type_info;
        inline app::LookupBindingPropertiesAttribute__Class* get_class() {
            return il2cpp::get_class<app::LookupBindingPropertiesAttribute__Class>(type_info, "System.ComponentModel", "LookupBindingPropertiesAttribute");
        }
        inline app::LookupBindingPropertiesAttribute* create() {
            return il2cpp::create_object<app::LookupBindingPropertiesAttribute>(get_class());
        }
    } // namespace LookupBindingPropertiesAttribute
} // namespace app::classes::types
