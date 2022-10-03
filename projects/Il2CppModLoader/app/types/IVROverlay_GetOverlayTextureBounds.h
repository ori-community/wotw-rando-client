#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayTextureBounds {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetOverlayTextureBounds__Class** type_info;
        inline app::IVROverlay_GetOverlayTextureBounds__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayTextureBounds__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayTextureBounds");
        }
        inline app::IVROverlay_GetOverlayTextureBounds* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayTextureBounds>(get_class());
        }
    } // namespace IVROverlay_GetOverlayTextureBounds
} // namespace app::classes::types
