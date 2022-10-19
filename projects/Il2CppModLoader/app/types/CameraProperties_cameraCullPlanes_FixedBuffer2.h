#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraProperties_cameraCullPlanes_FixedBuffer2 {
        namespace {
            inline app::CameraProperties_cameraCullPlanes_FixedBuffer2__Class* type_info_ref = nullptr;
        }
        inline app::CameraProperties_cameraCullPlanes_FixedBuffer2__Class** type_info = &type_info_ref;
        inline app::CameraProperties_cameraCullPlanes_FixedBuffer2__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraProperties_cameraCullPlanes_FixedBuffer2__Class>(type_info, "UnityEngine.Experimental.Rendering", "CameraProperties", "<_cameraCullPlanes>__FixedBuffer2");
        }
        inline app::CameraProperties_cameraCullPlanes_FixedBuffer2* create() {
            return il2cpp::create_object<app::CameraProperties_cameraCullPlanes_FixedBuffer2>(get_class());
        }
        inline app::CameraProperties_cameraCullPlanes_FixedBuffer2__Boxed* box(app::CameraProperties_cameraCullPlanes_FixedBuffer2 value) {
            return il2cpp::box_value<app::CameraProperties_cameraCullPlanes_FixedBuffer2__Boxed>(get_class(), value);
        }
    } // namespace CameraProperties_cameraCullPlanes_FixedBuffer2
} // namespace app::classes::types
