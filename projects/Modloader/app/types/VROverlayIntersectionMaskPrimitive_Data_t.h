#pragma once
#include <Modloader/app/structs/VROverlayIntersectionMaskPrimitive_Data_t.h>
#include <Modloader/app/structs/VROverlayIntersectionMaskPrimitive_Data_t__Boxed.h>
#include <Modloader/app/structs/VROverlayIntersectionMaskPrimitive_Data_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VROverlayIntersectionMaskPrimitive_Data_t {
        inline app::VROverlayIntersectionMaskPrimitive_Data_t__Class** type_info() {
            static app::VROverlayIntersectionMaskPrimitive_Data_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VROverlayIntersectionMaskPrimitive_Data_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VROverlayIntersectionMaskPrimitive_Data_t__Class* get_class() {
            return il2cpp::get_class<app::VROverlayIntersectionMaskPrimitive_Data_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "VROverlayIntersectionMaskPrimitive_Data_t");
        }
        inline app::VROverlayIntersectionMaskPrimitive_Data_t* create() {
            return il2cpp::create_object<app::VROverlayIntersectionMaskPrimitive_Data_t>(get_class());
        }
        inline app::VROverlayIntersectionMaskPrimitive_Data_t__Boxed* box(app::VROverlayIntersectionMaskPrimitive_Data_t value) {
            return il2cpp::box_value<app::VROverlayIntersectionMaskPrimitive_Data_t__Boxed>(get_class(), value);
        }
    } // namespace VROverlayIntersectionMaskPrimitive_Data_t
} // namespace app::classes::types
