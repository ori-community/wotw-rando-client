#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyCinematicCharacterAnimator_FacingDirection__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyCinematicCharacterAnimator_FacingDirection__Enum__Class** type_info;
        inline app::LegacyCinematicCharacterAnimator_FacingDirection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyCinematicCharacterAnimator_FacingDirection__Enum__Class>(type_info, "", "LegacyCinematicCharacterAnimator", "FacingDirection");
        }
        inline app::LegacyCinematicCharacterAnimator_FacingDirection__Enum* create() {
            return il2cpp::create_object<app::LegacyCinematicCharacterAnimator_FacingDirection__Enum>(get_class());
        }
    } // namespace LegacyCinematicCharacterAnimator_FacingDirection__Enum
} // namespace app::classes::types
