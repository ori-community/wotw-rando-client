#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeWeaponHammer {
        inline app::MeleeWeaponHammer__Class** type_info = (app::MeleeWeaponHammer__Class**)(modloader::win::memory::resolve_rva(0x047440B8));
        inline app::MeleeWeaponHammer__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeaponHammer__Class>(type_info, "", "MeleeWeaponHammer");
        }
        inline app::MeleeWeaponHammer* create() {
            return il2cpp::create_object<app::MeleeWeaponHammer>(get_class());
        }
    } // namespace MeleeWeaponHammer
} // namespace app::classes::types
