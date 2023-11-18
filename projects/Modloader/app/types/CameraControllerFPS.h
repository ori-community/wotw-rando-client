#pragma once
#include <Modloader/app/structs/CameraControllerFPS.h>
#include <Modloader/app/structs/CameraControllerFPS__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraControllerFPS {
        inline app::CameraControllerFPS__Class** type_info() {
            static app::CameraControllerFPS__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraControllerFPS__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraControllerFPS__Class* get_class() {
            return il2cpp::get_class<app::CameraControllerFPS__Class>(type_info(), "RootMotion", "CameraControllerFPS");
        }
        inline app::CameraControllerFPS* create() {
            return il2cpp::create_object<app::CameraControllerFPS>(get_class());
        }
    } // namespace CameraControllerFPS
} // namespace app::classes::types
