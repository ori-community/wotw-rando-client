#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PasswordPropertyTextAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PasswordPropertyTextAttribute__Class** type_info;
        inline app::PasswordPropertyTextAttribute__Class* get_class() {
            return il2cpp::get_class<app::PasswordPropertyTextAttribute__Class>(type_info, "System.ComponentModel", "PasswordPropertyTextAttribute");
        }
        inline app::PasswordPropertyTextAttribute* create() {
            return il2cpp::create_object<app::PasswordPropertyTextAttribute>(get_class());
        }
    } // namespace PasswordPropertyTextAttribute
} // namespace app::classes::types
