#pragma once
#include <Modloader/app/structs/MeleeWeaponColliderStick_DebugCircle__Array.h>
#include <Modloader/app/structs/MeleeWeaponColliderStick_DebugCircle__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeWeaponColliderStick_DebugCircle__Array {
        inline app::MeleeWeaponColliderStick_DebugCircle__Array__Class** type_info() {
            static app::MeleeWeaponColliderStick_DebugCircle__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeWeaponColliderStick_DebugCircle__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeWeaponColliderStick_DebugCircle__Array__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeaponColliderStick_DebugCircle__Array__Class>(type_info(), "", "MeleeWeaponColliderStick+DebugCircle[]");
        }
        inline app::MeleeWeaponColliderStick_DebugCircle__Array* create() {
            return il2cpp::create_object<app::MeleeWeaponColliderStick_DebugCircle__Array>(get_class());
        }
    } // namespace MeleeWeaponColliderStick_DebugCircle__Array
} // namespace app::classes::types
