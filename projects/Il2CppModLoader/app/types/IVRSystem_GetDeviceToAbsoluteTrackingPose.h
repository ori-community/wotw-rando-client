#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetDeviceToAbsoluteTrackingPose {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetDeviceToAbsoluteTrackingPose__Class** type_info;
        inline app::IVRSystem_GetDeviceToAbsoluteTrackingPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetDeviceToAbsoluteTrackingPose__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetDeviceToAbsoluteTrackingPose");
        }
        inline app::IVRSystem_GetDeviceToAbsoluteTrackingPose* create() {
            return il2cpp::create_object<app::IVRSystem_GetDeviceToAbsoluteTrackingPose>(get_class());
        }
    } // namespace IVRSystem_GetDeviceToAbsoluteTrackingPose
} // namespace app::classes::types
