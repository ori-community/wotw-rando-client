#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose__Class** type_info;
        inline app::IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_SetWorkingStandingZeroPoseToRawTrackingPose");
        }
        inline app::IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose>(get_class());
        }
    } // namespace IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose
} // namespace app::classes::types
