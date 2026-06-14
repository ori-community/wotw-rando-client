#pragma once
#include <Modloader/app/structs/LegacyCinematicCharacterAnimator_Character__Enum.h>
#include <Modloader/app/structs/LegacyCinematicCharacterAnimator_Character__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyCinematicCharacterAnimator_Character__Enum {
        inline app::LegacyCinematicCharacterAnimator_Character__Enum__Class** type_info() {
            static app::LegacyCinematicCharacterAnimator_Character__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyCinematicCharacterAnimator_Character__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478F6C8));
            }
            return cache;
        }
        inline app::LegacyCinematicCharacterAnimator_Character__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyCinematicCharacterAnimator_Character__Enum__Class>(type_info(), "", "LegacyCinematicCharacterAnimator", "Character");
        }
        inline app::LegacyCinematicCharacterAnimator_Character__Enum* create() {
            return il2cpp::create_object<app::LegacyCinematicCharacterAnimator_Character__Enum>(get_class());
        }
    } // namespace LegacyCinematicCharacterAnimator_Character__Enum
} // namespace app::classes::types
