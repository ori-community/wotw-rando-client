#pragma once
#include <Modloader/app/structs/IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose.h>
#include <Modloader/app/structs/IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose {
        inline app::IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Class** type_info() {
            static app::IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x04700DD0));
            }
            return cache;
        }
        inline app::IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetRawZeroPoseToStandingAbsoluteTrackingPose");
        }
        inline app::IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose* create() {
            return il2cpp::create_object<app::IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose>(get_class());
        }
    } // namespace IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose
} // namespace app::classes::types
