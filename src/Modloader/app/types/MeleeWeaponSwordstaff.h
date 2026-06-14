#pragma once
#include <Modloader/app/structs/MeleeWeaponSwordstaff.h>
#include <Modloader/app/structs/MeleeWeaponSwordstaff__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeWeaponSwordstaff {
        inline app::MeleeWeaponSwordstaff__Class** type_info() {
            static app::MeleeWeaponSwordstaff__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeWeaponSwordstaff__Class**)(modloader::win::memory::resolve_rva(0x04704CF8));
            }
            return cache;
        }
        inline app::MeleeWeaponSwordstaff__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeaponSwordstaff__Class>(type_info(), "", "MeleeWeaponSwordstaff");
        }
        inline app::MeleeWeaponSwordstaff* create() {
            return il2cpp::create_object<app::MeleeWeaponSwordstaff>(get_class());
        }
    } // namespace MeleeWeaponSwordstaff
} // namespace app::classes::types
