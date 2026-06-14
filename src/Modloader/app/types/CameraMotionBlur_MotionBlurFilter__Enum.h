#pragma once
#include <Modloader/app/structs/CameraMotionBlur_MotionBlurFilter__Enum.h>
#include <Modloader/app/structs/CameraMotionBlur_MotionBlurFilter__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraMotionBlur_MotionBlurFilter__Enum {
        inline app::CameraMotionBlur_MotionBlurFilter__Enum__Class** type_info() {
            static app::CameraMotionBlur_MotionBlurFilter__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraMotionBlur_MotionBlurFilter__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraMotionBlur_MotionBlurFilter__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraMotionBlur_MotionBlurFilter__Enum__Class>(type_info(), "UnityStandardAssets.ImageEffects", "CameraMotionBlur", "MotionBlurFilter");
        }
        inline app::CameraMotionBlur_MotionBlurFilter__Enum* create() {
            return il2cpp::create_object<app::CameraMotionBlur_MotionBlurFilter__Enum>(get_class());
        }
    } // namespace CameraMotionBlur_MotionBlurFilter__Enum
} // namespace app::classes::types
