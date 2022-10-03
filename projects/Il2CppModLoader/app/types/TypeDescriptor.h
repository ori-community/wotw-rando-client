#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeDescriptor__Class** type_info;
        inline app::TypeDescriptor__Class* get_class() {
            return il2cpp::get_class<app::TypeDescriptor__Class>(type_info, "System.ComponentModel", "TypeDescriptor");
        }
        inline app::TypeDescriptor* create() {
            return il2cpp::create_object<app::TypeDescriptor>(get_class());
        }
    } // namespace TypeDescriptor
} // namespace app::classes::types
