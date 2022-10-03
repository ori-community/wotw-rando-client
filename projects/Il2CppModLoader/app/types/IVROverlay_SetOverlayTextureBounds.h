#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayTextureBounds {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetOverlayTextureBounds__Class** type_info;
        inline app::IVROverlay_SetOverlayTextureBounds__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayTextureBounds__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayTextureBounds");
        }
        inline app::IVROverlay_SetOverlayTextureBounds* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayTextureBounds>(get_class());
        }
    } // namespace IVROverlay_SetOverlayTextureBounds
} // namespace app::classes::types
