#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DisplayNameAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DisplayNameAttribute__Class** type_info;
        inline app::DisplayNameAttribute__Class* get_class() {
            return il2cpp::get_class<app::DisplayNameAttribute__Class>(type_info, "System.ComponentModel", "DisplayNameAttribute");
        }
        inline app::DisplayNameAttribute* create() {
            return il2cpp::create_object<app::DisplayNameAttribute>(get_class());
        }
    } // namespace DisplayNameAttribute
} // namespace app::classes::types
