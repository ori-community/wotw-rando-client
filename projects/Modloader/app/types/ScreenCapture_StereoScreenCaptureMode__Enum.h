#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScreenCapture_StereoScreenCaptureMode__Enum__Class.h>
#include <Modloader/app/structs/ScreenCapture_StereoScreenCaptureMode__Enum.h>

namespace app::classes::types {
    namespace ScreenCapture_StereoScreenCaptureMode__Enum {
        namespace {
            inline app::ScreenCapture_StereoScreenCaptureMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ScreenCapture_StereoScreenCaptureMode__Enum__Class** type_info = &type_info_ref;
        inline app::ScreenCapture_StereoScreenCaptureMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenCapture_StereoScreenCaptureMode__Enum__Class>(type_info, "UnityEngine", "ScreenCapture", "StereoScreenCaptureMode");
        }
        inline app::ScreenCapture_StereoScreenCaptureMode__Enum* create() {
            return il2cpp::create_object<app::ScreenCapture_StereoScreenCaptureMode__Enum>(get_class());
        }
    } // namespace ScreenCapture_StereoScreenCaptureMode__Enum
} // namespace app::classes::types
