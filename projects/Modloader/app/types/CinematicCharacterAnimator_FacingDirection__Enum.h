#pragma once
#include <Modloader/app/structs/CinematicCharacterAnimator_FacingDirection__Enum.h>
#include <Modloader/app/structs/CinematicCharacterAnimator_FacingDirection__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CinematicCharacterAnimator_FacingDirection__Enum {
        inline app::CinematicCharacterAnimator_FacingDirection__Enum__Class** type_info() {
            static app::CinematicCharacterAnimator_FacingDirection__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CinematicCharacterAnimator_FacingDirection__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CinematicCharacterAnimator_FacingDirection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CinematicCharacterAnimator_FacingDirection__Enum__Class>(type_info(), "Moon.Timeline", "CinematicCharacterAnimator", "FacingDirection");
        }
        inline app::CinematicCharacterAnimator_FacingDirection__Enum* create() {
            return il2cpp::create_object<app::CinematicCharacterAnimator_FacingDirection__Enum>(get_class());
        }
    } // namespace CinematicCharacterAnimator_FacingDirection__Enum
} // namespace app::classes::types
