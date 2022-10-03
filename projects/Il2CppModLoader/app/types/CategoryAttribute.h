#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CategoryAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CategoryAttribute__Class** type_info;
        inline app::CategoryAttribute__Class* get_class() {
            return il2cpp::get_class<app::CategoryAttribute__Class>(type_info, "System.ComponentModel", "CategoryAttribute");
        }
        inline app::CategoryAttribute* create() {
            return il2cpp::create_object<app::CategoryAttribute>(get_class());
        }
    } // namespace CategoryAttribute
} // namespace app::classes::types
