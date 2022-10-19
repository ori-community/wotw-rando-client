#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VROverlayIntersectionMaskPrimitive_Data_t {
        namespace {
            inline app::VROverlayIntersectionMaskPrimitive_Data_t__Class* type_info_ref = nullptr;
        }
        inline app::VROverlayIntersectionMaskPrimitive_Data_t__Class** type_info = &type_info_ref;
        inline app::VROverlayIntersectionMaskPrimitive_Data_t__Class* get_class() {
            return il2cpp::get_class<app::VROverlayIntersectionMaskPrimitive_Data_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VROverlayIntersectionMaskPrimitive_Data_t");
        }
        inline app::VROverlayIntersectionMaskPrimitive_Data_t* create() {
            return il2cpp::create_object<app::VROverlayIntersectionMaskPrimitive_Data_t>(get_class());
        }
        inline app::VROverlayIntersectionMaskPrimitive_Data_t__Boxed* box(app::VROverlayIntersectionMaskPrimitive_Data_t value) {
            return il2cpp::box_value<app::VROverlayIntersectionMaskPrimitive_Data_t__Boxed>(get_class(), value);
        }
    } // namespace VROverlayIntersectionMaskPrimitive_Data_t
} // namespace app::classes::types
