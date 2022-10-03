#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraProperties_shadowCullPlanes_FixedBuffer1 {
        namespace {
            app::CameraProperties_shadowCullPlanes_FixedBuffer1__Class* type_info_ref = nullptr;
        }
        app::CameraProperties_shadowCullPlanes_FixedBuffer1__Class** type_info = &type_info_ref;
        inline app::CameraProperties_shadowCullPlanes_FixedBuffer1__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraProperties_shadowCullPlanes_FixedBuffer1__Class>(type_info, "UnityEngine.Experimental.Rendering", "CameraProperties", "<_shadowCullPlanes>__FixedBuffer1");
        }
        inline app::CameraProperties_shadowCullPlanes_FixedBuffer1* create() {
            return il2cpp::create_object<app::CameraProperties_shadowCullPlanes_FixedBuffer1>(get_class());
        }
        inline app::CameraProperties_shadowCullPlanes_FixedBuffer1__Boxed* box(app::CameraProperties_shadowCullPlanes_FixedBuffer1 value) {
            return il2cpp::box_value<app::CameraProperties_shadowCullPlanes_FixedBuffer1__Boxed>(get_class(), value);
        }
    } // namespace CameraProperties_shadowCullPlanes_FixedBuffer1
} // namespace app::classes::types
