#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CinematicCharacterAnimator_GameplayTransitionStart__Enum {
        namespace {
            inline app::CinematicCharacterAnimator_GameplayTransitionStart__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CinematicCharacterAnimator_GameplayTransitionStart__Enum__Class** type_info = &type_info_ref;
        inline app::CinematicCharacterAnimator_GameplayTransitionStart__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CinematicCharacterAnimator_GameplayTransitionStart__Enum__Class>(type_info, "Moon.Timeline", "CinematicCharacterAnimator", "GameplayTransitionStart");
        }
        inline app::CinematicCharacterAnimator_GameplayTransitionStart__Enum* create() {
            return il2cpp::create_object<app::CinematicCharacterAnimator_GameplayTransitionStart__Enum>(get_class());
        }
    } // namespace CinematicCharacterAnimator_GameplayTransitionStart__Enum
} // namespace app::classes::types
