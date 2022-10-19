#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CinematicCharacterAnimator_GameplayTransitionEnd__Enum {
        namespace {
            inline app::CinematicCharacterAnimator_GameplayTransitionEnd__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CinematicCharacterAnimator_GameplayTransitionEnd__Enum__Class** type_info = &type_info_ref;
        inline app::CinematicCharacterAnimator_GameplayTransitionEnd__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CinematicCharacterAnimator_GameplayTransitionEnd__Enum__Class>(type_info, "Moon.Timeline", "CinematicCharacterAnimator", "GameplayTransitionEnd");
        }
        inline app::CinematicCharacterAnimator_GameplayTransitionEnd__Enum* create() {
            return il2cpp::create_object<app::CinematicCharacterAnimator_GameplayTransitionEnd__Enum>(get_class());
        }
    } // namespace CinematicCharacterAnimator_GameplayTransitionEnd__Enum
} // namespace app::classes::types
