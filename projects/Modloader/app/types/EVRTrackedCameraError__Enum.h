#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EVRTrackedCameraError__Enum {
        inline app::EVRTrackedCameraError__Enum__Class** type_info = (app::EVRTrackedCameraError__Enum__Class**)(modloader::win::memory::resolve_rva(0x047678C0));
        inline app::EVRTrackedCameraError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRTrackedCameraError__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRTrackedCameraError");
        }
        inline app::EVRTrackedCameraError__Enum* create() {
            return il2cpp::create_object<app::EVRTrackedCameraError__Enum>(get_class());
        }
    } // namespace EVRTrackedCameraError__Enum
} // namespace app::classes::types
