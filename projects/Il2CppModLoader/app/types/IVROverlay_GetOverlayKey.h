#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayKey {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetOverlayKey__Class** type_info;
        inline app::IVROverlay_GetOverlayKey__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayKey__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayKey");
        }
        inline app::IVROverlay_GetOverlayKey* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayKey>(get_class());
        }
    } // namespace IVROverlay_GetOverlayKey
} // namespace app::classes::types
