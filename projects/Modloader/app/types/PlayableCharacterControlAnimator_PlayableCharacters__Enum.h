#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayableCharacterControlAnimator_PlayableCharacters__Enum {
        namespace {
            inline app::PlayableCharacterControlAnimator_PlayableCharacters__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PlayableCharacterControlAnimator_PlayableCharacters__Enum__Class** type_info = &type_info_ref;
        inline app::PlayableCharacterControlAnimator_PlayableCharacters__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayableCharacterControlAnimator_PlayableCharacters__Enum__Class>(type_info, "Moon.Timeline", "PlayableCharacterControlAnimator", "PlayableCharacters");
        }
        inline app::PlayableCharacterControlAnimator_PlayableCharacters__Enum* create() {
            return il2cpp::create_object<app::PlayableCharacterControlAnimator_PlayableCharacters__Enum>(get_class());
        }
    } // namespace PlayableCharacterControlAnimator_PlayableCharacters__Enum
} // namespace app::classes::types
