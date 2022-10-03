#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayTransformOverlayRelative {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetOverlayTransformOverlayRelative__Class** type_info;
        inline app::IVROverlay_GetOverlayTransformOverlayRelative__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayTransformOverlayRelative__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayTransformOverlayRelative");
        }
        inline app::IVROverlay_GetOverlayTransformOverlayRelative* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayTransformOverlayRelative>(get_class());
        }
    } // namespace IVROverlay_GetOverlayTransformOverlayRelative
} // namespace app::classes::types
