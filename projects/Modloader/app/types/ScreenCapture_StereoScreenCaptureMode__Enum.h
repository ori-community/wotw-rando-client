#pragma once
#include <Modloader/app/structs/ScreenCapture_StereoScreenCaptureMode__Enum.h>
#include <Modloader/app/structs/ScreenCapture_StereoScreenCaptureMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenCapture_StereoScreenCaptureMode__Enum {
        inline app::ScreenCapture_StereoScreenCaptureMode__Enum__Class** type_info() {
            static app::ScreenCapture_StereoScreenCaptureMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenCapture_StereoScreenCaptureMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenCapture_StereoScreenCaptureMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenCapture_StereoScreenCaptureMode__Enum__Class>(type_info(), "UnityEngine", "ScreenCapture", "StereoScreenCaptureMode");
        }
        inline app::ScreenCapture_StereoScreenCaptureMode__Enum* create() {
            return il2cpp::create_object<app::ScreenCapture_StereoScreenCaptureMode__Enum>(get_class());
        }
    } // namespace ScreenCapture_StereoScreenCaptureMode__Enum
} // namespace app::classes::types
