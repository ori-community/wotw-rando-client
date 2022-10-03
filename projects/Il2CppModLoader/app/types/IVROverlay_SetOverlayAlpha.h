#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayAlpha {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetOverlayAlpha__Class** type_info;
        inline app::IVROverlay_SetOverlayAlpha__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayAlpha__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayAlpha");
        }
        inline app::IVROverlay_SetOverlayAlpha* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayAlpha>(get_class());
        }
    } // namespace IVROverlay_SetOverlayAlpha
} // namespace app::classes::types
