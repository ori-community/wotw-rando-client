#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameplayToCinematicAnimator {
        namespace {
            inline app::GameplayToCinematicAnimator__Class* type_info_ref = nullptr;
        }
        inline app::GameplayToCinematicAnimator__Class** type_info = &type_info_ref;
        inline app::GameplayToCinematicAnimator__Class* get_class() {
            return il2cpp::get_class<app::GameplayToCinematicAnimator__Class>(type_info, "", "GameplayToCinematicAnimator");
        }
        inline app::GameplayToCinematicAnimator* create() {
            return il2cpp::create_object<app::GameplayToCinematicAnimator>(get_class());
        }
    } // namespace GameplayToCinematicAnimator
} // namespace app::classes::types
