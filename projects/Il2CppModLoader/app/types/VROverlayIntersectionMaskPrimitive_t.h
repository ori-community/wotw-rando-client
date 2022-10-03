#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VROverlayIntersectionMaskPrimitive_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VROverlayIntersectionMaskPrimitive_t__Class** type_info;
        inline app::VROverlayIntersectionMaskPrimitive_t__Class* get_class() {
            return il2cpp::get_class<app::VROverlayIntersectionMaskPrimitive_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VROverlayIntersectionMaskPrimitive_t");
        }
        inline app::VROverlayIntersectionMaskPrimitive_t* create() {
            return il2cpp::create_object<app::VROverlayIntersectionMaskPrimitive_t>(get_class());
        }
        inline app::VROverlayIntersectionMaskPrimitive_t__Boxed* box(app::VROverlayIntersectionMaskPrimitive_t value) {
            return il2cpp::box_value<app::VROverlayIntersectionMaskPrimitive_t__Boxed>(get_class(), value);
        }
    } // namespace VROverlayIntersectionMaskPrimitive_t
} // namespace app::classes::types
