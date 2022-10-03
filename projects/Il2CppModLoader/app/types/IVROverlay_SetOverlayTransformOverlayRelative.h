#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayTransformOverlayRelative {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetOverlayTransformOverlayRelative__Class** type_info;
        inline app::IVROverlay_SetOverlayTransformOverlayRelative__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayTransformOverlayRelative__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayTransformOverlayRelative");
        }
        inline app::IVROverlay_SetOverlayTransformOverlayRelative* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayTransformOverlayRelative>(get_class());
        }
    } // namespace IVROverlay_SetOverlayTransformOverlayRelative
} // namespace app::classes::types
