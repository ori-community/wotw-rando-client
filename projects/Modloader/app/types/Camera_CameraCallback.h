#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Camera_CameraCallback {
        namespace {
            inline app::Camera_CameraCallback__Class* type_info_ref = nullptr;
        }
        inline app::Camera_CameraCallback__Class** type_info = &type_info_ref;
        inline app::Camera_CameraCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Camera_CameraCallback__Class>(type_info, "UnityEngine", "Camera", "CameraCallback");
        }
        inline app::Camera_CameraCallback* create() {
            return il2cpp::create_object<app::Camera_CameraCallback>(get_class());
        }
    } // namespace Camera_CameraCallback
} // namespace app::classes::types
