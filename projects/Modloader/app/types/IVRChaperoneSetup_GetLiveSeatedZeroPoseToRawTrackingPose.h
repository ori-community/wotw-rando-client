#pragma once
#include <Modloader/app/structs/IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose.h>
#include <Modloader/app/structs/IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose {
        inline app::IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose__Class** type_info() {
            static app::IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x0476B110));
            }
            return cache;
        }
        inline app::IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetLiveSeatedZeroPoseToRawTrackingPose");
        }
        inline app::IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose
} // namespace app::classes::types
