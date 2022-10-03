#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinBowAttack_Settings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinBowAttack_Settings__Class** type_info;
        inline app::SeinBowAttack_Settings__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinBowAttack_Settings__Class>(type_info, "", "SeinBowAttack", "Settings");
        }
        inline app::SeinBowAttack_Settings* create() {
            return il2cpp::create_object<app::SeinBowAttack_Settings>(get_class());
        }
    } // namespace SeinBowAttack_Settings
} // namespace app::classes::types
