#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose {
        inline app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose__Class** type_info = (app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x0476B120));
        inline app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_SetWorkingSeatedZeroPoseToRawTrackingPose");
        }
        inline app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose>(get_class());
        }
    } // namespace IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose
} // namespace app::classes::types
