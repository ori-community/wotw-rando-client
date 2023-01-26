#pragma once
#include <Modloader/app/structs/IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose.h>
#include <Modloader/app/structs/IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose {
        inline app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose__Class** type_info() {
            static app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x0473DAE8));
            }
            return cache;
        }
        inline app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetWorkingSeatedZeroPoseToRawTrackingPose");
        }
        inline app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose
} // namespace app::classes::types
