#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose {
        inline app::IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose__Class** type_info = (app::IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x04799AE0));
        inline app::IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_SetWorkingStandingZeroPoseToRawTrackingPose");
        }
        inline app::IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose>(get_class());
        }
    } // namespace IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose
} // namespace app::classes::types
