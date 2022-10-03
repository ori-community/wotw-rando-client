#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRTrackedCameraFrameType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EVRTrackedCameraFrameType__Enum__Class** type_info;
        inline app::EVRTrackedCameraFrameType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRTrackedCameraFrameType__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRTrackedCameraFrameType");
        }
        inline app::EVRTrackedCameraFrameType__Enum* create() {
            return il2cpp::create_object<app::EVRTrackedCameraFrameType__Enum>(get_class());
        }
    } // namespace EVRTrackedCameraFrameType__Enum
} // namespace app::classes::types
