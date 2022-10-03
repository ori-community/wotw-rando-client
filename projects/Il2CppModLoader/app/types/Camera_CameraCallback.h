#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Camera_CameraCallback {
        namespace {
            app::Camera_CameraCallback__Class* type_info_ref = nullptr;
        }
        app::Camera_CameraCallback__Class** type_info = &type_info_ref;
        inline app::Camera_CameraCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Camera_CameraCallback__Class>(type_info, "UnityEngine", "Camera", "CameraCallback");
        }
        inline app::Camera_CameraCallback* create() {
            return il2cpp::create_object<app::Camera_CameraCallback>(get_class());
        }
    } // namespace Camera_CameraCallback
} // namespace app::classes::types
