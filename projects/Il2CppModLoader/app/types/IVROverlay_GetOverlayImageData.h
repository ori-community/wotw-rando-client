#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayImageData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetOverlayImageData__Class** type_info;
        inline app::IVROverlay_GetOverlayImageData__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayImageData__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayImageData");
        }
        inline app::IVROverlay_GetOverlayImageData* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayImageData>(get_class());
        }
    } // namespace IVROverlay_GetOverlayImageData
} // namespace app::classes::types
