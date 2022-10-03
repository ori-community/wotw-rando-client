#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayColor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetOverlayColor__Class** type_info;
        inline app::IVROverlay_SetOverlayColor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayColor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayColor");
        }
        inline app::IVROverlay_SetOverlayColor* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayColor>(get_class());
        }
    } // namespace IVROverlay_SetOverlayColor
} // namespace app::classes::types
