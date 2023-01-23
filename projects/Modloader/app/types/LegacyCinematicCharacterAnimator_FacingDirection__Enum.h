#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyCinematicCharacterAnimator_FacingDirection__Enum__Class.h>
#include <Modloader/app/structs/LegacyCinematicCharacterAnimator_FacingDirection__Enum.h>

namespace app::classes::types {
    namespace LegacyCinematicCharacterAnimator_FacingDirection__Enum {
        inline app::LegacyCinematicCharacterAnimator_FacingDirection__Enum__Class** type_info = (app::LegacyCinematicCharacterAnimator_FacingDirection__Enum__Class**)(modloader::win::memory::resolve_rva(0x04729F40));
        inline app::LegacyCinematicCharacterAnimator_FacingDirection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyCinematicCharacterAnimator_FacingDirection__Enum__Class>(type_info, "", "LegacyCinematicCharacterAnimator", "FacingDirection");
        }
        inline app::LegacyCinematicCharacterAnimator_FacingDirection__Enum* create() {
            return il2cpp::create_object<app::LegacyCinematicCharacterAnimator_FacingDirection__Enum>(get_class());
        }
    } // namespace LegacyCinematicCharacterAnimator_FacingDirection__Enum
} // namespace app::classes::types
