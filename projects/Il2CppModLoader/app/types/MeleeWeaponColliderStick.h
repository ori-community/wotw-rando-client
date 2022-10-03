#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeWeaponColliderStick {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeWeaponColliderStick__Class** type_info;
        inline app::MeleeWeaponColliderStick__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeaponColliderStick__Class>(type_info, "", "MeleeWeaponColliderStick");
        }
        inline app::MeleeWeaponColliderStick* create() {
            return il2cpp::create_object<app::MeleeWeaponColliderStick>(get_class());
        }
    } // namespace MeleeWeaponColliderStick
} // namespace app::classes::types
