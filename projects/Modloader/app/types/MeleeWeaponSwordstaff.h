#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeWeaponSwordstaff {
        inline app::MeleeWeaponSwordstaff__Class** type_info = (app::MeleeWeaponSwordstaff__Class**)(modloader::win::memory::resolve_rva(0x04704CF8));
        inline app::MeleeWeaponSwordstaff__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeaponSwordstaff__Class>(type_info, "", "MeleeWeaponSwordstaff");
        }
        inline app::MeleeWeaponSwordstaff* create() {
            return il2cpp::create_object<app::MeleeWeaponSwordstaff>(get_class());
        }
    } // namespace MeleeWeaponSwordstaff
} // namespace app::classes::types
