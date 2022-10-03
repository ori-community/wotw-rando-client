#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayIntersectionMask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetOverlayIntersectionMask__Class** type_info;
        inline app::IVROverlay_SetOverlayIntersectionMask__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayIntersectionMask__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayIntersectionMask");
        }
        inline app::IVROverlay_SetOverlayIntersectionMask* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayIntersectionMask>(get_class());
        }
    } // namespace IVROverlay_SetOverlayIntersectionMask
} // namespace app::classes::types
