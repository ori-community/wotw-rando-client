#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayTextureSize {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetOverlayTextureSize__Class** type_info;
        inline app::IVROverlay_GetOverlayTextureSize__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayTextureSize__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayTextureSize");
        }
        inline app::IVROverlay_GetOverlayTextureSize* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayTextureSize>(get_class());
        }
    } // namespace IVROverlay_GetOverlayTextureSize
} // namespace app::classes::types
