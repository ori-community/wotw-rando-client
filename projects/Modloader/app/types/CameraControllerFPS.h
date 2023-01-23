#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraControllerFPS__Class.h>
#include <Modloader/app/structs/CameraControllerFPS.h>

namespace app::classes::types {
    namespace CameraControllerFPS {
        namespace {
            inline app::CameraControllerFPS__Class* type_info_ref = nullptr;
        }
        inline app::CameraControllerFPS__Class** type_info = &type_info_ref;
        inline app::CameraControllerFPS__Class* get_class() {
            return il2cpp::get_class<app::CameraControllerFPS__Class>(type_info, "RootMotion", "CameraControllerFPS");
        }
        inline app::CameraControllerFPS* create() {
            return il2cpp::create_object<app::CameraControllerFPS>(get_class());
        }
    } // namespace CameraControllerFPS
} // namespace app::classes::types
