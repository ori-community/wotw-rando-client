#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CinematicCharacterAnimator_FacingDirection__Enum__Class.h>
#include <Modloader/app/structs/CinematicCharacterAnimator_FacingDirection__Enum.h>

namespace app::classes::types {
    namespace CinematicCharacterAnimator_FacingDirection__Enum {
        namespace {
            inline app::CinematicCharacterAnimator_FacingDirection__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CinematicCharacterAnimator_FacingDirection__Enum__Class** type_info = &type_info_ref;
        inline app::CinematicCharacterAnimator_FacingDirection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CinematicCharacterAnimator_FacingDirection__Enum__Class>(type_info, "Moon.Timeline", "CinematicCharacterAnimator", "FacingDirection");
        }
        inline app::CinematicCharacterAnimator_FacingDirection__Enum* create() {
            return il2cpp::create_object<app::CinematicCharacterAnimator_FacingDirection__Enum>(get_class());
        }
    } // namespace CinematicCharacterAnimator_FacingDirection__Enum
} // namespace app::classes::types
