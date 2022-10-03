#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayTransformType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetOverlayTransformType__Class** type_info;
        inline app::IVROverlay_GetOverlayTransformType__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayTransformType__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayTransformType");
        }
        inline app::IVROverlay_GetOverlayTransformType* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayTransformType>(get_class());
        }
    } // namespace IVROverlay_GetOverlayTransformType
} // namespace app::classes::types
