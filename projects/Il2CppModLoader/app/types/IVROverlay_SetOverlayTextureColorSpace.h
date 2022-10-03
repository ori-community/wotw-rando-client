#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayTextureColorSpace {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetOverlayTextureColorSpace__Class** type_info;
        inline app::IVROverlay_SetOverlayTextureColorSpace__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayTextureColorSpace__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayTextureColorSpace");
        }
        inline app::IVROverlay_SetOverlayTextureColorSpace* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayTextureColorSpace>(get_class());
        }
    } // namespace IVROverlay_SetOverlayTextureColorSpace
} // namespace app::classes::types
