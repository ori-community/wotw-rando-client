#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeWeaponChainsword {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeWeaponChainsword__Class** type_info;
        inline app::MeleeWeaponChainsword__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeaponChainsword__Class>(type_info, "", "MeleeWeaponChainsword");
        }
        inline app::MeleeWeaponChainsword* create() {
            return il2cpp::create_object<app::MeleeWeaponChainsword>(get_class());
        }
    } // namespace MeleeWeaponChainsword
} // namespace app::classes::types
