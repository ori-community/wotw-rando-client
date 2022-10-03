#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayableCharacterAnimator {
        namespace {
            app::PlayableCharacterAnimator__Class* type_info_ref = nullptr;
        }
        app::PlayableCharacterAnimator__Class** type_info = &type_info_ref;
        inline app::PlayableCharacterAnimator__Class* get_class() {
            return il2cpp::get_class<app::PlayableCharacterAnimator__Class>(type_info, "Moon.Timeline", "PlayableCharacterAnimator");
        }
        inline app::PlayableCharacterAnimator* create() {
            return il2cpp::create_object<app::PlayableCharacterAnimator>(get_class());
        }
    } // namespace PlayableCharacterAnimator
} // namespace app::classes::types
