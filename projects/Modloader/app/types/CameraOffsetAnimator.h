#pragma once
#include <Modloader/app/structs/CameraOffsetAnimator.h>
#include <Modloader/app/structs/CameraOffsetAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraOffsetAnimator {
        inline app::CameraOffsetAnimator__Class** type_info() {
            static app::CameraOffsetAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraOffsetAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraOffsetAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetAnimator__Class>(type_info(), "", "CameraOffsetAnimator");
        }
        inline app::CameraOffsetAnimator* create() {
            return il2cpp::create_object<app::CameraOffsetAnimator>(get_class());
        }
    } // namespace CameraOffsetAnimator
} // namespace app::classes::types
