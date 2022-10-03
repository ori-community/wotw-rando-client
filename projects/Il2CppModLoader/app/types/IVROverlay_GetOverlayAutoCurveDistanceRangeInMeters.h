#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters__Class** type_info;
        inline app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayAutoCurveDistanceRangeInMeters");
        }
        inline app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters>(get_class());
        }
    } // namespace IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters
} // namespace app::classes::types
