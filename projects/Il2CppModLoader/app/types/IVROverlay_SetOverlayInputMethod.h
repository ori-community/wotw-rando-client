#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayInputMethod {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetOverlayInputMethod__Class** type_info;
        inline app::IVROverlay_SetOverlayInputMethod__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayInputMethod__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayInputMethod");
        }
        inline app::IVROverlay_SetOverlayInputMethod* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayInputMethod>(get_class());
        }
    } // namespace IVROverlay_SetOverlayInputMethod
} // namespace app::classes::types
