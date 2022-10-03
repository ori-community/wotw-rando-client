#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayInputMethod {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetOverlayInputMethod__Class** type_info;
        inline app::IVROverlay_GetOverlayInputMethod__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayInputMethod__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayInputMethod");
        }
        inline app::IVROverlay_GetOverlayInputMethod* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayInputMethod>(get_class());
        }
    } // namespace IVROverlay_GetOverlayInputMethod
} // namespace app::classes::types
