#pragma once
#include <Modloader/app/structs/CameraController.h>
#include <Modloader/app/structs/CameraController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraController {
        inline app::CameraController__Class** type_info() {
            static app::CameraController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraController__Class* get_class() {
            return il2cpp::get_class<app::CameraController__Class>(type_info(), "RootMotion", "CameraController");
        }
        inline app::CameraController* create() {
            return il2cpp::create_object<app::CameraController>(get_class());
        }
    } // namespace CameraController
} // namespace app::classes::types
