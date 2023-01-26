#pragma once
#include <Modloader/app/structs/CharacterAnimationThirdPersonIK.h>
#include <Modloader/app/structs/CharacterAnimationThirdPersonIK__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterAnimationThirdPersonIK {
        inline app::CharacterAnimationThirdPersonIK__Class** type_info() {
            static app::CharacterAnimationThirdPersonIK__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterAnimationThirdPersonIK__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterAnimationThirdPersonIK__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationThirdPersonIK__Class>(type_info(), "RootMotion.Demos", "CharacterAnimationThirdPersonIK");
        }
        inline app::CharacterAnimationThirdPersonIK* create() {
            return il2cpp::create_object<app::CharacterAnimationThirdPersonIK>(get_class());
        }
    } // namespace CharacterAnimationThirdPersonIK
} // namespace app::classes::types
