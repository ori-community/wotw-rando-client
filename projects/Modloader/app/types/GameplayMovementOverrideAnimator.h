#pragma once
#include <Modloader/app/structs/GameplayMovementOverrideAnimator.h>
#include <Modloader/app/structs/GameplayMovementOverrideAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameplayMovementOverrideAnimator {
        inline app::GameplayMovementOverrideAnimator__Class** type_info() {
            static app::GameplayMovementOverrideAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameplayMovementOverrideAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameplayMovementOverrideAnimator__Class* get_class() {
            return il2cpp::get_class<app::GameplayMovementOverrideAnimator__Class>(type_info(), "Moon.Timeline", "GameplayMovementOverrideAnimator");
        }
        inline app::GameplayMovementOverrideAnimator* create() {
            return il2cpp::create_object<app::GameplayMovementOverrideAnimator>(get_class());
        }
    } // namespace GameplayMovementOverrideAnimator
} // namespace app::classes::types
