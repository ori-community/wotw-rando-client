#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VROverlayIntersectionResults_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VROverlayIntersectionResults_t__Class** type_info;
        inline app::VROverlayIntersectionResults_t__Class* get_class() {
            return il2cpp::get_class<app::VROverlayIntersectionResults_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VROverlayIntersectionResults_t");
        }
        inline app::VROverlayIntersectionResults_t* create() {
            return il2cpp::create_object<app::VROverlayIntersectionResults_t>(get_class());
        }
        inline app::VROverlayIntersectionResults_t__Boxed* box(app::VROverlayIntersectionResults_t value) {
            return il2cpp::box_value<app::VROverlayIntersectionResults_t__Boxed>(get_class(), value);
        }
    } // namespace VROverlayIntersectionResults_t
} // namespace app::classes::types
