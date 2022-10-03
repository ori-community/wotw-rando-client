#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayRenderingPid {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetOverlayRenderingPid__Class** type_info;
        inline app::IVROverlay_SetOverlayRenderingPid__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayRenderingPid__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayRenderingPid");
        }
        inline app::IVROverlay_SetOverlayRenderingPid* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayRenderingPid>(get_class());
        }
    } // namespace IVROverlay_SetOverlayRenderingPid
} // namespace app::classes::types
