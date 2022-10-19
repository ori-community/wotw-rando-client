#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_GetLastPoseForTrackedDeviceIndex {
        inline app::IVRCompositor_GetLastPoseForTrackedDeviceIndex__Class** type_info = (app::IVRCompositor_GetLastPoseForTrackedDeviceIndex__Class**)(modloader::win::memory::resolve_rva(0x047223F0));
        inline app::IVRCompositor_GetLastPoseForTrackedDeviceIndex__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetLastPoseForTrackedDeviceIndex__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetLastPoseForTrackedDeviceIndex");
        }
        inline app::IVRCompositor_GetLastPoseForTrackedDeviceIndex* create() {
            return il2cpp::create_object<app::IVRCompositor_GetLastPoseForTrackedDeviceIndex>(get_class());
        }
    } // namespace IVRCompositor_GetLastPoseForTrackedDeviceIndex
} // namespace app::classes::types
