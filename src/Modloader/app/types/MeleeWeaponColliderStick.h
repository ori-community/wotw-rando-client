#pragma once
#include <Modloader/app/structs/MeleeWeaponColliderStick.h>
#include <Modloader/app/structs/MeleeWeaponColliderStick__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeWeaponColliderStick {
        inline app::MeleeWeaponColliderStick__Class** type_info() {
            static app::MeleeWeaponColliderStick__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeWeaponColliderStick__Class**)(modloader::win::memory::resolve_rva(0x04707118));
            }
            return cache;
        }
        inline app::MeleeWeaponColliderStick__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeaponColliderStick__Class>(type_info(), "", "MeleeWeaponColliderStick");
        }
        inline app::MeleeWeaponColliderStick* create() {
            return il2cpp::create_object<app::MeleeWeaponColliderStick>(get_class());
        }
    } // namespace MeleeWeaponColliderStick
} // namespace app::classes::types
