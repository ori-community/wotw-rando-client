#pragma once
#include <Modloader/app/structs/GameplayToCinematicAnimator.h>
#include <Modloader/app/structs/GameplayToCinematicAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameplayToCinematicAnimator {
        inline app::GameplayToCinematicAnimator__Class** type_info() {
            static app::GameplayToCinematicAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameplayToCinematicAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameplayToCinematicAnimator__Class* get_class() {
            return il2cpp::get_class<app::GameplayToCinematicAnimator__Class>(type_info(), "", "GameplayToCinematicAnimator");
        }
        inline app::GameplayToCinematicAnimator* create() {
            return il2cpp::create_object<app::GameplayToCinematicAnimator>(get_class());
        }
    } // namespace GameplayToCinematicAnimator
} // namespace app::classes::types
