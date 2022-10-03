#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayColor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetOverlayColor__Class** type_info;
        inline app::IVROverlay_GetOverlayColor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayColor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayColor");
        }
        inline app::IVROverlay_GetOverlayColor* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayColor>(get_class());
        }
    } // namespace IVROverlay_GetOverlayColor
} // namespace app::classes::types
