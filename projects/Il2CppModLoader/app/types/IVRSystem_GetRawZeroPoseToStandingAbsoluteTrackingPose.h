#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Class** type_info;
        inline app::IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetRawZeroPoseToStandingAbsoluteTrackingPose");
        }
        inline app::IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose* create() {
            return il2cpp::create_object<app::IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose>(get_class());
        }
    } // namespace IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose
} // namespace app::classes::types
