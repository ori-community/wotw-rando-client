#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeWeapon_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeWeapon_c__Class** type_info;
        inline app::MeleeWeapon_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeWeapon_c__Class>(type_info, "", "MeleeWeapon", "<>c");
        }
        inline app::MeleeWeapon_c* create() {
            return il2cpp::create_object<app::MeleeWeapon_c>(get_class());
        }
    } // namespace MeleeWeapon_c
} // namespace app::classes::types
