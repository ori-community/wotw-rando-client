#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters {
        inline app::IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters__Class** type_info = (app::IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters__Class**)(modloader::win::memory::resolve_rva(0x04784568));
        inline app::IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayAutoCurveDistanceRangeInMeters");
        }
        inline app::IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters>(get_class());
        }
    } // namespace IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters
} // namespace app::classes::types
