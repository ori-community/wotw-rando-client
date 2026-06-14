#pragma once
#include <Modloader/app/structs/LegacyCinematicCharacterAnimator.h>
#include <Modloader/app/structs/LegacyCinematicCharacterAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyCinematicCharacterAnimator {
        inline app::LegacyCinematicCharacterAnimator__Class** type_info() {
            static app::LegacyCinematicCharacterAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyCinematicCharacterAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyCinematicCharacterAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyCinematicCharacterAnimator__Class>(type_info(), "", "LegacyCinematicCharacterAnimator");
        }
        inline app::LegacyCinematicCharacterAnimator* create() {
            return il2cpp::create_object<app::LegacyCinematicCharacterAnimator>(get_class());
        }
    } // namespace LegacyCinematicCharacterAnimator
} // namespace app::classes::types
