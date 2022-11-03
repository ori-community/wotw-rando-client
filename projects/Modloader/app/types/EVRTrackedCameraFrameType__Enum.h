#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EVRTrackedCameraFrameType__Enum {
        inline app::EVRTrackedCameraFrameType__Enum__Class** type_info = (app::EVRTrackedCameraFrameType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04790200));
        inline app::EVRTrackedCameraFrameType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRTrackedCameraFrameType__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRTrackedCameraFrameType");
        }
        inline app::EVRTrackedCameraFrameType__Enum* create() {
            return il2cpp::create_object<app::EVRTrackedCameraFrameType__Enum>(get_class());
        }
    } // namespace EVRTrackedCameraFrameType__Enum
} // namespace app::classes::types
