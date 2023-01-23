#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayableCharacterAnimator__Class.h>
#include <Modloader/app/structs/PlayableCharacterAnimator.h>

namespace app::classes::types {
    namespace PlayableCharacterAnimator {
        namespace {
            inline app::PlayableCharacterAnimator__Class* type_info_ref = nullptr;
        }
        inline app::PlayableCharacterAnimator__Class** type_info = &type_info_ref;
        inline app::PlayableCharacterAnimator__Class* get_class() {
            return il2cpp::get_class<app::PlayableCharacterAnimator__Class>(type_info, "Moon.Timeline", "PlayableCharacterAnimator");
        }
        inline app::PlayableCharacterAnimator* create() {
            return il2cpp::create_object<app::PlayableCharacterAnimator>(get_class());
        }
    } // namespace PlayableCharacterAnimator
} // namespace app::classes::types
