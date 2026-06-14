#pragma once
#include <Modloader/app/structs/PlayableCharacterAnimator.h>
#include <Modloader/app/structs/PlayableCharacterAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayableCharacterAnimator {
        inline app::PlayableCharacterAnimator__Class** type_info() {
            static app::PlayableCharacterAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayableCharacterAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayableCharacterAnimator__Class* get_class() {
            return il2cpp::get_class<app::PlayableCharacterAnimator__Class>(type_info(), "Moon.Timeline", "PlayableCharacterAnimator");
        }
        inline app::PlayableCharacterAnimator* create() {
            return il2cpp::create_object<app::PlayableCharacterAnimator>(get_class());
        }
    } // namespace PlayableCharacterAnimator
} // namespace app::classes::types
