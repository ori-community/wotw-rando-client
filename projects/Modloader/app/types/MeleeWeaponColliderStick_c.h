#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeWeaponColliderStick_c {
        inline app::MeleeWeaponColliderStick_c__Class** type_info = (app::MeleeWeaponColliderStick_c__Class**)(modloader::win::memory::resolve_rva(0x04764130));
        inline app::MeleeWeaponColliderStick_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeWeaponColliderStick_c__Class>(type_info, "", "MeleeWeaponColliderStick", "<>c");
        }
        inline app::MeleeWeaponColliderStick_c* create() {
            return il2cpp::create_object<app::MeleeWeaponColliderStick_c>(get_class());
        }
    } // namespace MeleeWeaponColliderStick_c
} // namespace app::classes::types
