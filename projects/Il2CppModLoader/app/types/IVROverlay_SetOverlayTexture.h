#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayTexture {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetOverlayTexture__Class** type_info;
        inline app::IVROverlay_SetOverlayTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayTexture__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayTexture");
        }
        inline app::IVROverlay_SetOverlayTexture* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayTexture>(get_class());
        }
    } // namespace IVROverlay_SetOverlayTexture
} // namespace app::classes::types
