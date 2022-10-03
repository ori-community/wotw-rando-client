#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayAlpha {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetOverlayAlpha__Class** type_info;
        inline app::IVROverlay_GetOverlayAlpha__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayAlpha__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayAlpha");
        }
        inline app::IVROverlay_GetOverlayAlpha* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayAlpha>(get_class());
        }
    } // namespace IVROverlay_GetOverlayAlpha
} // namespace app::classes::types
