#pragma once
#include <Modloader/app/structs/MoveCameraToPointAnimator.h>
#include <Modloader/app/structs/MoveCameraToPointAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveCameraToPointAnimator {
        inline app::MoveCameraToPointAnimator__Class** type_info() {
            static app::MoveCameraToPointAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoveCameraToPointAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoveCameraToPointAnimator__Class* get_class() {
            return il2cpp::get_class<app::MoveCameraToPointAnimator__Class>(type_info(), "Moon.Timeline", "MoveCameraToPointAnimator");
        }
        inline app::MoveCameraToPointAnimator* create() {
            return il2cpp::create_object<app::MoveCameraToPointAnimator>(get_class());
        }
    } // namespace MoveCameraToPointAnimator
} // namespace app::classes::types
