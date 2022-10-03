#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayMouseScale {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetOverlayMouseScale__Class** type_info;
        inline app::IVROverlay_SetOverlayMouseScale__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayMouseScale__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayMouseScale");
        }
        inline app::IVROverlay_SetOverlayMouseScale* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayMouseScale>(get_class());
        }
    } // namespace IVROverlay_SetOverlayMouseScale
} // namespace app::classes::types
