#pragma once
#include <Modloader/app/structs/CharacterAnimationState.h>
#include <Modloader/app/structs/CharacterAnimationState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterAnimationState {
        inline app::CharacterAnimationState__Class** type_info() {
            static app::CharacterAnimationState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterAnimationState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterAnimationState__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationState__Class>(type_info(), "", "CharacterAnimationState");
        }
        inline app::CharacterAnimationState* create() {
            return il2cpp::create_object<app::CharacterAnimationState>(get_class());
        }
    } // namespace CharacterAnimationState
} // namespace app::classes::types
