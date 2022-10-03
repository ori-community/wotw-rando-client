#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayMouseScale {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetOverlayMouseScale__Class** type_info;
        inline app::IVROverlay_GetOverlayMouseScale__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayMouseScale__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayMouseScale");
        }
        inline app::IVROverlay_GetOverlayMouseScale* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayMouseScale>(get_class());
        }
    } // namespace IVROverlay_GetOverlayMouseScale
} // namespace app::classes::types
