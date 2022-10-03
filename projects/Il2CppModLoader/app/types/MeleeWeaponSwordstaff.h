#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeWeaponSwordstaff {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeWeaponSwordstaff__Class** type_info;
        inline app::MeleeWeaponSwordstaff__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeaponSwordstaff__Class>(type_info, "", "MeleeWeaponSwordstaff");
        }
        inline app::MeleeWeaponSwordstaff* create() {
            return il2cpp::create_object<app::MeleeWeaponSwordstaff>(get_class());
        }
    } // namespace MeleeWeaponSwordstaff
} // namespace app::classes::types
