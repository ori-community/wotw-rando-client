#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters {
        inline app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters__Class** type_info = (app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters__Class**)(modloader::win::memory::resolve_rva(0x0475A160));
        inline app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayAutoCurveDistanceRangeInMeters");
        }
        inline app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters>(get_class());
        }
    } // namespace IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters
} // namespace app::classes::types
