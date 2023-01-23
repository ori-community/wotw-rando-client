#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraController__Class.h>
#include <Modloader/app/structs/CameraController.h>

namespace app::classes::types {
    namespace CameraController {
        namespace {
            inline app::CameraController__Class* type_info_ref = nullptr;
        }
        inline app::CameraController__Class** type_info = &type_info_ref;
        inline app::CameraController__Class* get_class() {
            return il2cpp::get_class<app::CameraController__Class>(type_info, "RootMotion", "CameraController");
        }
        inline app::CameraController* create() {
            return il2cpp::create_object<app::CameraController>(get_class());
        }
    } // namespace CameraController
} // namespace app::classes::types
