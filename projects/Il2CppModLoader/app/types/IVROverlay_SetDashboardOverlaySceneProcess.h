#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetDashboardOverlaySceneProcess {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetDashboardOverlaySceneProcess__Class** type_info;
        inline app::IVROverlay_SetDashboardOverlaySceneProcess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetDashboardOverlaySceneProcess__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetDashboardOverlaySceneProcess");
        }
        inline app::IVROverlay_SetDashboardOverlaySceneProcess* create() {
            return il2cpp::create_object<app::IVROverlay_SetDashboardOverlaySceneProcess>(get_class());
        }
    } // namespace IVROverlay_SetDashboardOverlaySceneProcess
} // namespace app::classes::types
