#pragma once
#include <Modloader/app/structs/CameraMultiplyMotionBlurAnimator.h>
#include <Modloader/app/structs/CameraMultiplyMotionBlurAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraMultiplyMotionBlurAnimator {
        inline app::CameraMultiplyMotionBlurAnimator__Class** type_info() {
            static app::CameraMultiplyMotionBlurAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraMultiplyMotionBlurAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraMultiplyMotionBlurAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraMultiplyMotionBlurAnimator__Class>(type_info(), "", "CameraMultiplyMotionBlurAnimator");
        }
        inline app::CameraMultiplyMotionBlurAnimator* create() {
            return il2cpp::create_object<app::CameraMultiplyMotionBlurAnimator>(get_class());
        }
    } // namespace CameraMultiplyMotionBlurAnimator
} // namespace app::classes::types
