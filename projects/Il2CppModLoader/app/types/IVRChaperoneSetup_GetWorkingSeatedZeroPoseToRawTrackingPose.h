#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose {
        inline app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose__Class** type_info = (app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x0473DAE8));
        inline app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetWorkingSeatedZeroPoseToRawTrackingPose");
        }
        inline app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose
} // namespace app::classes::types
