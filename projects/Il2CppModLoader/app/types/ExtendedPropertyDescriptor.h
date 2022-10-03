#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExtendedPropertyDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExtendedPropertyDescriptor__Class** type_info;
        inline app::ExtendedPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::ExtendedPropertyDescriptor__Class>(type_info, "System.ComponentModel", "ExtendedPropertyDescriptor");
        }
        inline app::ExtendedPropertyDescriptor* create() {
            return il2cpp::create_object<app::ExtendedPropertyDescriptor>(get_class());
        }
    } // namespace ExtendedPropertyDescriptor
} // namespace app::classes::types
