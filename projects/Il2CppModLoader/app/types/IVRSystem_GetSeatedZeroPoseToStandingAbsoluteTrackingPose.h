#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose {
        inline app::IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Class** type_info = (app::IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x04761190));
        inline app::IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetSeatedZeroPoseToStandingAbsoluteTrackingPose");
        }
        inline app::IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose* create() {
            return il2cpp::create_object<app::IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose>(get_class());
        }
    } // namespace IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
} // namespace app::classes::types
