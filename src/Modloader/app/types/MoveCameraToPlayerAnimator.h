#pragma once
#include <Modloader/app/structs/MoveCameraToPlayerAnimator.h>
#include <Modloader/app/structs/MoveCameraToPlayerAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveCameraToPlayerAnimator {
        inline app::MoveCameraToPlayerAnimator__Class** type_info() {
            static app::MoveCameraToPlayerAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoveCameraToPlayerAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoveCameraToPlayerAnimator__Class* get_class() {
            return il2cpp::get_class<app::MoveCameraToPlayerAnimator__Class>(type_info(), "Moon.Timeline", "MoveCameraToPlayerAnimator");
        }
        inline app::MoveCameraToPlayerAnimator* create() {
            return il2cpp::create_object<app::MoveCameraToPlayerAnimator>(get_class());
        }
    } // namespace MoveCameraToPlayerAnimator
} // namespace app::classes::types
