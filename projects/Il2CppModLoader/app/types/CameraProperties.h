#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraProperties {
        namespace {
            inline app::CameraProperties__Class* type_info_ref = nullptr;
        }
        inline app::CameraProperties__Class** type_info = &type_info_ref;
        inline app::CameraProperties__Class* get_class() {
            return il2cpp::get_class<app::CameraProperties__Class>(type_info, "UnityEngine.Experimental.Rendering", "CameraProperties");
        }
        inline app::CameraProperties* create() {
            return il2cpp::create_object<app::CameraProperties>(get_class());
        }
        inline app::CameraProperties__Boxed* box(app::CameraProperties value) {
            return il2cpp::box_value<app::CameraProperties__Boxed>(get_class(), value);
        }
    } // namespace CameraProperties
} // namespace app::classes::types
