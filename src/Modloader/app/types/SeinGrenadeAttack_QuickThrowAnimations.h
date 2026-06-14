#pragma once
#include <Modloader/app/structs/SeinGrenadeAttack_QuickThrowAnimations.h>
#include <Modloader/app/structs/SeinGrenadeAttack_QuickThrowAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGrenadeAttack_QuickThrowAnimations {
        inline app::SeinGrenadeAttack_QuickThrowAnimations__Class** type_info() {
            static app::SeinGrenadeAttack_QuickThrowAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGrenadeAttack_QuickThrowAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGrenadeAttack_QuickThrowAnimations__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGrenadeAttack_QuickThrowAnimations__Class>(type_info(), "", "SeinGrenadeAttack", "QuickThrowAnimations");
        }
        inline app::SeinGrenadeAttack_QuickThrowAnimations* create() {
            return il2cpp::create_object<app::SeinGrenadeAttack_QuickThrowAnimations>(get_class());
        }
    } // namespace SeinGrenadeAttack_QuickThrowAnimations
} // namespace app::classes::types
