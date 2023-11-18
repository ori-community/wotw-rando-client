#pragma once
#include <Modloader/app/structs/Camera_CameraCallback.h>
#include <Modloader/app/structs/Camera_CameraCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Camera_CameraCallback {
        inline app::Camera_CameraCallback__Class** type_info() {
            static app::Camera_CameraCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Camera_CameraCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Camera_CameraCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Camera_CameraCallback__Class>(type_info(), "UnityEngine", "Camera", "CameraCallback");
        }
        inline app::Camera_CameraCallback* create() {
            return il2cpp::create_object<app::Camera_CameraCallback>(get_class());
        }
    } // namespace Camera_CameraCallback
} // namespace app::classes::types
