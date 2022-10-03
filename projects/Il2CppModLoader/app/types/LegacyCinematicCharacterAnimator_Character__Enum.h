#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyCinematicCharacterAnimator_Character__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyCinematicCharacterAnimator_Character__Enum__Class** type_info;
        inline app::LegacyCinematicCharacterAnimator_Character__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyCinematicCharacterAnimator_Character__Enum__Class>(type_info, "", "LegacyCinematicCharacterAnimator", "Character");
        }
        inline app::LegacyCinematicCharacterAnimator_Character__Enum* create() {
            return il2cpp::create_object<app::LegacyCinematicCharacterAnimator_Character__Enum>(get_class());
        }
    } // namespace LegacyCinematicCharacterAnimator_Character__Enum
} // namespace app::classes::types
