#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameplayMovementOverrideAnimator {
        namespace {
            app::GameplayMovementOverrideAnimator__Class* type_info_ref = nullptr;
        }
        app::GameplayMovementOverrideAnimator__Class** type_info = &type_info_ref;
        inline app::GameplayMovementOverrideAnimator__Class* get_class() {
            return il2cpp::get_class<app::GameplayMovementOverrideAnimator__Class>(type_info, "Moon.Timeline", "GameplayMovementOverrideAnimator");
        }
        inline app::GameplayMovementOverrideAnimator* create() {
            return il2cpp::create_object<app::GameplayMovementOverrideAnimator>(get_class());
        }
    } // namespace GameplayMovementOverrideAnimator
} // namespace app::classes::types
