#pragma once
#include <Modloader/app/structs/MeleeWeaponChainsword.h>
#include <Modloader/app/structs/MeleeWeaponChainsword__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeWeaponChainsword {
        inline app::MeleeWeaponChainsword__Class** type_info() {
            static app::MeleeWeaponChainsword__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeWeaponChainsword__Class**)(modloader::win::memory::resolve_rva(0x047607F0));
            }
            return cache;
        }
        inline app::MeleeWeaponChainsword__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeaponChainsword__Class>(type_info(), "", "MeleeWeaponChainsword");
        }
        inline app::MeleeWeaponChainsword* create() {
            return il2cpp::create_object<app::MeleeWeaponChainsword>(get_class());
        }
    } // namespace MeleeWeaponChainsword
} // namespace app::classes::types
