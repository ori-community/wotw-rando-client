#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinGrenadeAttack_QuickThrowAnimations {
        namespace {
            inline app::SeinGrenadeAttack_QuickThrowAnimations__Class* type_info_ref = nullptr;
        }
        inline app::SeinGrenadeAttack_QuickThrowAnimations__Class** type_info = &type_info_ref;
        inline app::SeinGrenadeAttack_QuickThrowAnimations__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGrenadeAttack_QuickThrowAnimations__Class>(type_info, "", "SeinGrenadeAttack", "QuickThrowAnimations");
        }
        inline app::SeinGrenadeAttack_QuickThrowAnimations* create() {
            return il2cpp::create_object<app::SeinGrenadeAttack_QuickThrowAnimations>(get_class());
        }
    } // namespace SeinGrenadeAttack_QuickThrowAnimations
} // namespace app::classes::types
