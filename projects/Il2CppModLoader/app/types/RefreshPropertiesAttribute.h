#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RefreshPropertiesAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RefreshPropertiesAttribute__Class** type_info;
        inline app::RefreshPropertiesAttribute__Class* get_class() {
            return il2cpp::get_class<app::RefreshPropertiesAttribute__Class>(type_info, "System.ComponentModel", "RefreshPropertiesAttribute");
        }
        inline app::RefreshPropertiesAttribute* create() {
            return il2cpp::create_object<app::RefreshPropertiesAttribute>(get_class());
        }
    } // namespace RefreshPropertiesAttribute
} // namespace app::classes::types
