#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MeleeWeaponChainsword__Class.h>
#include <Modloader/app/structs/MeleeWeaponChainsword.h>

namespace app::classes::types {
    namespace MeleeWeaponChainsword {
        inline app::MeleeWeaponChainsword__Class** type_info = (app::MeleeWeaponChainsword__Class**)(modloader::win::memory::resolve_rva(0x047607F0));
        inline app::MeleeWeaponChainsword__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeaponChainsword__Class>(type_info, "", "MeleeWeaponChainsword");
        }
        inline app::MeleeWeaponChainsword* create() {
            return il2cpp::create_object<app::MeleeWeaponChainsword>(get_class());
        }
    } // namespace MeleeWeaponChainsword
} // namespace app::classes::types
