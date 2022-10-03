#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetLastPoseForTrackedDeviceIndex {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_GetLastPoseForTrackedDeviceIndex__Class** type_info;
        inline app::IVRCompositor_GetLastPoseForTrackedDeviceIndex__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetLastPoseForTrackedDeviceIndex__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetLastPoseForTrackedDeviceIndex");
        }
        inline app::IVRCompositor_GetLastPoseForTrackedDeviceIndex* create() {
            return il2cpp::create_object<app::IVRCompositor_GetLastPoseForTrackedDeviceIndex>(get_class());
        }
    } // namespace IVRCompositor_GetLastPoseForTrackedDeviceIndex
} // namespace app::classes::types
