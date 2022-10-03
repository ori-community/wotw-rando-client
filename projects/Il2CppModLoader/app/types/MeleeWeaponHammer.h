#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeWeaponHammer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeWeaponHammer__Class** type_info;
        inline app::MeleeWeaponHammer__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeaponHammer__Class>(type_info, "", "MeleeWeaponHammer");
        }
        inline app::MeleeWeaponHammer* create() {
            return il2cpp::create_object<app::MeleeWeaponHammer>(get_class());
        }
    } // namespace MeleeWeaponHammer
} // namespace app::classes::types
