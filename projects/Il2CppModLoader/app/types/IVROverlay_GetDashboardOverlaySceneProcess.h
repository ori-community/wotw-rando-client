#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetDashboardOverlaySceneProcess {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetDashboardOverlaySceneProcess__Class** type_info;
        inline app::IVROverlay_GetDashboardOverlaySceneProcess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetDashboardOverlaySceneProcess__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetDashboardOverlaySceneProcess");
        }
        inline app::IVROverlay_GetDashboardOverlaySceneProcess* create() {
            return il2cpp::create_object<app::IVROverlay_GetDashboardOverlaySceneProcess>(get_class());
        }
    } // namespace IVROverlay_GetDashboardOverlaySceneProcess
} // namespace app::classes::types
