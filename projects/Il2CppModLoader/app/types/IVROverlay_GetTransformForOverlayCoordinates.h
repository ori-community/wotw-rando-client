#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetTransformForOverlayCoordinates {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetTransformForOverlayCoordinates__Class** type_info;
        inline app::IVROverlay_GetTransformForOverlayCoordinates__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetTransformForOverlayCoordinates__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetTransformForOverlayCoordinates");
        }
        inline app::IVROverlay_GetTransformForOverlayCoordinates* create() {
            return il2cpp::create_object<app::IVROverlay_GetTransformForOverlayCoordinates>(get_class());
        }
    } // namespace IVROverlay_GetTransformForOverlayCoordinates
} // namespace app::classes::types
