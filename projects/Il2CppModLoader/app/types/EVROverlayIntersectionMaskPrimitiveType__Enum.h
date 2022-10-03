#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVROverlayIntersectionMaskPrimitiveType__Enum {
        namespace {
            app::EVROverlayIntersectionMaskPrimitiveType__Enum__Class* type_info_ref = nullptr;
        }
        app::EVROverlayIntersectionMaskPrimitiveType__Enum__Class** type_info = &type_info_ref;
        inline app::EVROverlayIntersectionMaskPrimitiveType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVROverlayIntersectionMaskPrimitiveType__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVROverlayIntersectionMaskPrimitiveType");
        }
        inline app::EVROverlayIntersectionMaskPrimitiveType__Enum* create() {
            return il2cpp::create_object<app::EVROverlayIntersectionMaskPrimitiveType__Enum>(get_class());
        }
    } // namespace EVROverlayIntersectionMaskPrimitiveType__Enum
} // namespace app::classes::types
