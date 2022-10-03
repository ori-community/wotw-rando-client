#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VROverlayIntersectionParams_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VROverlayIntersectionParams_t__Class** type_info;
        inline app::VROverlayIntersectionParams_t__Class* get_class() {
            return il2cpp::get_class<app::VROverlayIntersectionParams_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VROverlayIntersectionParams_t");
        }
        inline app::VROverlayIntersectionParams_t* create() {
            return il2cpp::create_object<app::VROverlayIntersectionParams_t>(get_class());
        }
        inline app::VROverlayIntersectionParams_t__Boxed* box(app::VROverlayIntersectionParams_t value) {
            return il2cpp::box_value<app::VROverlayIntersectionParams_t__Boxed>(get_class(), value);
        }
    } // namespace VROverlayIntersectionParams_t
} // namespace app::classes::types
