#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeWeaponColliderStick_DebugCircle {
        inline app::MeleeWeaponColliderStick_DebugCircle__Class** type_info = (app::MeleeWeaponColliderStick_DebugCircle__Class**)(modloader::win::memory::resolve_rva(0x04772528));
        inline app::MeleeWeaponColliderStick_DebugCircle__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeWeaponColliderStick_DebugCircle__Class>(type_info, "", "MeleeWeaponColliderStick", "DebugCircle");
        }
        inline app::MeleeWeaponColliderStick_DebugCircle* create() {
            return il2cpp::create_object<app::MeleeWeaponColliderStick_DebugCircle>(get_class());
        }
        inline app::MeleeWeaponColliderStick_DebugCircle__Array* create_array(int size) {
            return il2cpp::array_new<app::MeleeWeaponColliderStick_DebugCircle__Array>(get_class(), size);
        }
        inline app::MeleeWeaponColliderStick_DebugCircle__Array* create_array(const std::vector<app::MeleeWeaponColliderStick_DebugCircle*>& items) {
            return il2cpp::array_new<app::MeleeWeaponColliderStick_DebugCircle__Array>(get_class(), items);
        }
    } // namespace MeleeWeaponColliderStick_DebugCircle
} // namespace app::classes::types
