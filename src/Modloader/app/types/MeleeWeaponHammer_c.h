#pragma once
#include <Modloader/app/structs/MeleeWeaponHammer_c.h>
#include <Modloader/app/structs/MeleeWeaponHammer_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeWeaponHammer_c {
        inline app::MeleeWeaponHammer_c__Class** type_info() {
            static app::MeleeWeaponHammer_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeWeaponHammer_c__Class**)(modloader::win::memory::resolve_rva(0x047789B8));
            }
            return cache;
        }
        inline app::MeleeWeaponHammer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeWeaponHammer_c__Class>(type_info(), "", "MeleeWeaponHammer", "<>c");
        }
        inline app::MeleeWeaponHammer_c* create() {
            return il2cpp::create_object<app::MeleeWeaponHammer_c>(get_class());
        }
    } // namespace MeleeWeaponHammer_c
} // namespace app::classes::types
