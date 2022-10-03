#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeWeaponColliderStick_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeWeaponColliderStick_c__Class** type_info;
        inline app::MeleeWeaponColliderStick_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeWeaponColliderStick_c__Class>(type_info, "", "MeleeWeaponColliderStick", "<>c");
        }
        inline app::MeleeWeaponColliderStick_c* create() {
            return il2cpp::create_object<app::MeleeWeaponColliderStick_c>(get_class());
        }
    } // namespace MeleeWeaponColliderStick_c
} // namespace app::classes::types
