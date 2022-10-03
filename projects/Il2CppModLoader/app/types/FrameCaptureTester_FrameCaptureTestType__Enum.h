#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameCaptureTester_FrameCaptureTestType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FrameCaptureTester_FrameCaptureTestType__Enum__Class** type_info;
        inline app::FrameCaptureTester_FrameCaptureTestType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FrameCaptureTester_FrameCaptureTestType__Enum__Class>(type_info, "", "FrameCaptureTester", "FrameCaptureTestType");
        }
        inline app::FrameCaptureTester_FrameCaptureTestType__Enum* create() {
            return il2cpp::create_object<app::FrameCaptureTester_FrameCaptureTestType__Enum>(get_class());
        }
    } // namespace FrameCaptureTester_FrameCaptureTestType__Enum
} // namespace app::classes::types
