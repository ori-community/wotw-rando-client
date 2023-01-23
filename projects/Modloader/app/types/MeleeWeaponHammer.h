#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MeleeWeaponHammer__Class.h>
#include <Modloader/app/structs/MeleeWeaponHammer.h>

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
