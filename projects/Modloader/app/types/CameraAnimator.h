#pragma once
#include <Modloader/app/structs/CameraAnimator.h>
#include <Modloader/app/structs/CameraAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraAnimator {
        inline app::CameraAnimator__Class** type_info() {
            static app::CameraAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraAnimator__Class>(type_info(), "", "CameraAnimator");
        }
        inline app::CameraAnimator* create() {
            return il2cpp::create_object<app::CameraAnimator>(get_class());
        }
    } // namespace CameraAnimator
} // namespace app::classes::types
