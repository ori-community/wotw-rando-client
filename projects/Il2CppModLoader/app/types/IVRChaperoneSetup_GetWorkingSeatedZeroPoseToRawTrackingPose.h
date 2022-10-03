#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose__Class** type_info;
        inline app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetWorkingSeatedZeroPoseToRawTrackingPose");
        }
        inline app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose
} // namespace app::classes::types
