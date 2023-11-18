#pragma once
#include <Modloader/app/structs/PlayableCharacterControlAnimator_PlayableCharacters__Enum.h>
#include <Modloader/app/structs/PlayableCharacterControlAnimator_PlayableCharacters__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayableCharacterControlAnimator_PlayableCharacters__Enum {
        inline app::PlayableCharacterControlAnimator_PlayableCharacters__Enum__Class** type_info() {
            static app::PlayableCharacterControlAnimator_PlayableCharacters__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayableCharacterControlAnimator_PlayableCharacters__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayableCharacterControlAnimator_PlayableCharacters__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayableCharacterControlAnimator_PlayableCharacters__Enum__Class>(type_info(), "Moon.Timeline", "PlayableCharacterControlAnimator", "PlayableCharacters");
        }
        inline app::PlayableCharacterControlAnimator_PlayableCharacters__Enum* create() {
            return il2cpp::create_object<app::PlayableCharacterControlAnimator_PlayableCharacters__Enum>(get_class());
        }
    } // namespace PlayableCharacterControlAnimator_PlayableCharacters__Enum
} // namespace app::classes::types
