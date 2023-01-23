#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameplayMovementOverrideAnimator__Class.h>
#include <Modloader/app/structs/GameplayMovementOverrideAnimator.h>

namespace app::classes::types {
    namespace GameplayMovementOverrideAnimator {
        namespace {
            inline app::GameplayMovementOverrideAnimator__Class* type_info_ref = nullptr;
        }
        inline app::GameplayMovementOverrideAnimator__Class** type_info = &type_info_ref;
        inline app::GameplayMovementOverrideAnimator__Class* get_class() {
            return il2cpp::get_class<app::GameplayMovementOverrideAnimator__Class>(type_info, "Moon.Timeline", "GameplayMovementOverrideAnimator");
        }
        inline app::GameplayMovementOverrideAnimator* create() {
            return il2cpp::create_object<app::GameplayMovementOverrideAnimator>(get_class());
        }
    } // namespace GameplayMovementOverrideAnimator
} // namespace app::classes::types
