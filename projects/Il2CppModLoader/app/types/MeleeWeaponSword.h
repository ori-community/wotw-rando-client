#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeWeaponSword {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeWeaponSword__Class** type_info;
        inline app::MeleeWeaponSword__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeaponSword__Class>(type_info, "", "MeleeWeaponSword");
        }
        inline app::MeleeWeaponSword* create() {
            return il2cpp::create_object<app::MeleeWeaponSword>(get_class());
        }
    } // namespace MeleeWeaponSword
} // namespace app::classes::types
