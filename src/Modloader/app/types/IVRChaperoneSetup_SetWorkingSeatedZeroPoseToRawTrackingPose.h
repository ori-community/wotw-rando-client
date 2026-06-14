#pragma once
#include <Modloader/app/structs/IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose.h>
#include <Modloader/app/structs/IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose {
        inline app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose__Class** type_info() {
            static app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x0476B120));
            }
            return cache;
        }
        inline app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_SetWorkingSeatedZeroPoseToRawTrackingPose");
        }
        inline app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose>(get_class());
        }
    } // namespace IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose
} // namespace app::classes::types
