#pragma once
#include <Modloader/app/structs/IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose.h>
#include <Modloader/app/structs/IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose {
        inline app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose__Class** type_info() {
            static app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x04757920));
            }
            return cache;
        }
        inline app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetWorkingStandingZeroPoseToRawTrackingPose");
        }
        inline app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose
} // namespace app::classes::types
