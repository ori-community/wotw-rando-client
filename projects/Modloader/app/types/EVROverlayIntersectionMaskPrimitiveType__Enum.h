#pragma once
#include <Modloader/app/structs/EVROverlayIntersectionMaskPrimitiveType__Enum.h>
#include <Modloader/app/structs/EVROverlayIntersectionMaskPrimitiveType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVROverlayIntersectionMaskPrimitiveType__Enum {
        inline app::EVROverlayIntersectionMaskPrimitiveType__Enum__Class** type_info() {
            static app::EVROverlayIntersectionMaskPrimitiveType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EVROverlayIntersectionMaskPrimitiveType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EVROverlayIntersectionMaskPrimitiveType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVROverlayIntersectionMaskPrimitiveType__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVROverlayIntersectionMaskPrimitiveType");
        }
        inline app::EVROverlayIntersectionMaskPrimitiveType__Enum* create() {
            return il2cpp::create_object<app::EVROverlayIntersectionMaskPrimitiveType__Enum>(get_class());
        }
    } // namespace EVROverlayIntersectionMaskPrimitiveType__Enum
} // namespace app::classes::types
