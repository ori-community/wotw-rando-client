#pragma once
#include <Modloader/app/structs/IVROverlay_SetDashboardOverlaySceneProcess.h>
#include <Modloader/app/structs/IVROverlay_SetDashboardOverlaySceneProcess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetDashboardOverlaySceneProcess {
        inline app::IVROverlay_SetDashboardOverlaySceneProcess__Class** type_info() {
            static app::IVROverlay_SetDashboardOverlaySceneProcess__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_SetDashboardOverlaySceneProcess__Class**)(modloader::win::memory::resolve_rva(0x0476C360));
            }
            return cache;
        }
        inline app::IVROverlay_SetDashboardOverlaySceneProcess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetDashboardOverlaySceneProcess__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetDashboardOverlaySceneProcess");
        }
        inline app::IVROverlay_SetDashboardOverlaySceneProcess* create() {
            return il2cpp::create_object<app::IVROverlay_SetDashboardOverlaySceneProcess>(get_class());
        }
    } // namespace IVROverlay_SetDashboardOverlaySceneProcess
} // namespace app::classes::types
