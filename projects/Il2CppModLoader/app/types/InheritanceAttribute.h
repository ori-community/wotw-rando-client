#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InheritanceAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InheritanceAttribute__Class** type_info;
        inline app::InheritanceAttribute__Class* get_class() {
            return il2cpp::get_class<app::InheritanceAttribute__Class>(type_info, "System.ComponentModel", "InheritanceAttribute");
        }
        inline app::InheritanceAttribute* create() {
            return il2cpp::create_object<app::InheritanceAttribute>(get_class());
        }
    } // namespace InheritanceAttribute
} // namespace app::classes::types
