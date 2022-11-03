#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose {
        inline app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose__Class** type_info = (app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x04757920));
        inline app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetWorkingStandingZeroPoseToRawTrackingPose");
        }
        inline app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose
} // namespace app::classes::types
