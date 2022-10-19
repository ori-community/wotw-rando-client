#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeWeaponSword {
        inline app::MeleeWeaponSword__Class** type_info = (app::MeleeWeaponSword__Class**)(modloader::win::memory::resolve_rva(0x04718D40));
        inline app::MeleeWeaponSword__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeaponSword__Class>(type_info, "", "MeleeWeaponSword");
        }
        inline app::MeleeWeaponSword* create() {
            return il2cpp::create_object<app::MeleeWeaponSword>(get_class());
        }
    } // namespace MeleeWeaponSword
} // namespace app::classes::types
