#pragma once
#include <Modloader/app/structs/IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters {
        inline app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters__Class** type_info() {
            static app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters__Class**)(modloader::win::memory::resolve_rva(0x0475A160));
            }
            return cache;
        }
        inline app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayAutoCurveDistanceRangeInMeters");
        }
        inline app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters>(get_class());
        }
    } // namespace IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters
} // namespace app::classes::types
