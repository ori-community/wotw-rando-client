#pragma once
#include <Modloader/app/structs/PlayableCharacterControlAnimator.h>
#include <Modloader/app/structs/PlayableCharacterControlAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayableCharacterControlAnimator {
        inline app::PlayableCharacterControlAnimator__Class** type_info() {
            static app::PlayableCharacterControlAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayableCharacterControlAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayableCharacterControlAnimator__Class* get_class() {
            return il2cpp::get_class<app::PlayableCharacterControlAnimator__Class>(type_info(), "Moon.Timeline", "PlayableCharacterControlAnimator");
        }
        inline app::PlayableCharacterControlAnimator* create() {
            return il2cpp::create_object<app::PlayableCharacterControlAnimator>(get_class());
        }
    } // namespace PlayableCharacterControlAnimator
} // namespace app::classes::types
