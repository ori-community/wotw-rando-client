#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayTexture {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetOverlayTexture__Class** type_info;
        inline app::IVROverlay_GetOverlayTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayTexture__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayTexture");
        }
        inline app::IVROverlay_GetOverlayTexture* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayTexture>(get_class());
        }
    } // namespace IVROverlay_GetOverlayTexture
} // namespace app::classes::types
