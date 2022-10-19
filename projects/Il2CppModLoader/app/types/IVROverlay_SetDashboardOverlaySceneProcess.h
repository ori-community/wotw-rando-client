#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_SetDashboardOverlaySceneProcess {
        inline app::IVROverlay_SetDashboardOverlaySceneProcess__Class** type_info = (app::IVROverlay_SetDashboardOverlaySceneProcess__Class**)(modloader::win::memory::resolve_rva(0x0476C360));
        inline app::IVROverlay_SetDashboardOverlaySceneProcess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetDashboardOverlaySceneProcess__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetDashboardOverlaySceneProcess");
        }
        inline app::IVROverlay_SetDashboardOverlaySceneProcess* create() {
            return il2cpp::create_object<app::IVROverlay_SetDashboardOverlaySceneProcess>(get_class());
        }
    } // namespace IVROverlay_SetDashboardOverlaySceneProcess
} // namespace app::classes::types
