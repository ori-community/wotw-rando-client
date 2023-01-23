#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraController_UpdateMode__Enum__Class.h>
#include <Modloader/app/structs/CameraController_UpdateMode__Enum.h>

namespace app::classes::types {
    namespace CameraController_UpdateMode__Enum {
        namespace {
            inline app::CameraController_UpdateMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CameraController_UpdateMode__Enum__Class** type_info = &type_info_ref;
        inline app::CameraController_UpdateMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraController_UpdateMode__Enum__Class>(type_info, "RootMotion", "CameraController", "UpdateMode");
        }
        inline app::CameraController_UpdateMode__Enum* create() {
            return il2cpp::create_object<app::CameraController_UpdateMode__Enum>(get_class());
        }
    } // namespace CameraController_UpdateMode__Enum
} // namespace app::classes::types
