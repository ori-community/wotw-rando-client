#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose__Class** type_info;
        inline app::IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetLiveSeatedZeroPoseToRawTrackingPose");
        }
        inline app::IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose
} // namespace app::classes::types
