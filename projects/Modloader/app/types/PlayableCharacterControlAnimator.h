#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayableCharacterControlAnimator__Class.h>
#include <Modloader/app/structs/PlayableCharacterControlAnimator.h>

namespace app::classes::types {
    namespace PlayableCharacterControlAnimator {
        namespace {
            inline app::PlayableCharacterControlAnimator__Class* type_info_ref = nullptr;
        }
        inline app::PlayableCharacterControlAnimator__Class** type_info = &type_info_ref;
        inline app::PlayableCharacterControlAnimator__Class* get_class() {
            return il2cpp::get_class<app::PlayableCharacterControlAnimator__Class>(type_info, "Moon.Timeline", "PlayableCharacterControlAnimator");
        }
        inline app::PlayableCharacterControlAnimator* create() {
            return il2cpp::create_object<app::PlayableCharacterControlAnimator>(get_class());
        }
    } // namespace PlayableCharacterControlAnimator
} // namespace app::classes::types
