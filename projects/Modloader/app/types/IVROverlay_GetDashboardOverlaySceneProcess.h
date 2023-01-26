#pragma once
#include <Modloader/app/structs/IVROverlay_GetDashboardOverlaySceneProcess.h>
#include <Modloader/app/structs/IVROverlay_GetDashboardOverlaySceneProcess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetDashboardOverlaySceneProcess {
        inline app::IVROverlay_GetDashboardOverlaySceneProcess__Class** type_info() {
            static app::IVROverlay_GetDashboardOverlaySceneProcess__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_GetDashboardOverlaySceneProcess__Class**)(modloader::win::memory::resolve_rva(0x0474A050));
            }
            return cache;
        }
        inline app::IVROverlay_GetDashboardOverlaySceneProcess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetDashboardOverlaySceneProcess__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetDashboardOverlaySceneProcess");
        }
        inline app::IVROverlay_GetDashboardOverlaySceneProcess* create() {
            return il2cpp::create_object<app::IVROverlay_GetDashboardOverlaySceneProcess>(get_class());
        }
    } // namespace IVROverlay_GetDashboardOverlaySceneProcess
} // namespace app::classes::types
