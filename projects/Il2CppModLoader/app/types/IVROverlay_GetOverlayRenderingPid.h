#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayRenderingPid {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetOverlayRenderingPid__Class** type_info;
        inline app::IVROverlay_GetOverlayRenderingPid__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayRenderingPid__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayRenderingPid");
        }
        inline app::IVROverlay_GetOverlayRenderingPid* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayRenderingPid>(get_class());
        }
    } // namespace IVROverlay_GetOverlayRenderingPid
} // namespace app::classes::types
