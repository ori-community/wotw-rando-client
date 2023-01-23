#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MeleeWeaponColliderStick_DebugCircle__Array__Class.h>
#include <Modloader/app/structs/MeleeWeaponColliderStick_DebugCircle__Array.h>

namespace app::classes::types {
    namespace MeleeWeaponColliderStick_DebugCircle__Array {
        namespace {
            inline app::MeleeWeaponColliderStick_DebugCircle__Array__Class* type_info_ref = nullptr;
        }
        inline app::MeleeWeaponColliderStick_DebugCircle__Array__Class** type_info = &type_info_ref;
        inline app::MeleeWeaponColliderStick_DebugCircle__Array__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeaponColliderStick_DebugCircle__Array__Class>(type_info, "", "MeleeWeaponColliderStick+DebugCircle[]");
        }
        inline app::MeleeWeaponColliderStick_DebugCircle__Array* create() {
            return il2cpp::create_object<app::MeleeWeaponColliderStick_DebugCircle__Array>(get_class());
        }
    } // namespace MeleeWeaponColliderStick_DebugCircle__Array
} // namespace app::classes::types
