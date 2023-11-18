#pragma once
#include <Modloader/app/structs/FrameCaptureTester_FrameCaptureTestType__Enum.h>
#include <Modloader/app/structs/FrameCaptureTester_FrameCaptureTestType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameCaptureTester_FrameCaptureTestType__Enum {
        inline app::FrameCaptureTester_FrameCaptureTestType__Enum__Class** type_info() {
            static app::FrameCaptureTester_FrameCaptureTestType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FrameCaptureTester_FrameCaptureTestType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475FBB8));
            }
            return cache;
        }
        inline app::FrameCaptureTester_FrameCaptureTestType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FrameCaptureTester_FrameCaptureTestType__Enum__Class>(type_info(), "", "FrameCaptureTester", "FrameCaptureTestType");
        }
        inline app::FrameCaptureTester_FrameCaptureTestType__Enum* create() {
            return il2cpp::create_object<app::FrameCaptureTester_FrameCaptureTestType__Enum>(get_class());
        }
    } // namespace FrameCaptureTester_FrameCaptureTestType__Enum
} // namespace app::classes::types
