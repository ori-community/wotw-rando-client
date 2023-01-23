#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraLookAheadController__Class.h>
#include <Modloader/app/structs/CameraLookAheadController.h>

namespace app::classes::types {
    namespace CameraLookAheadController {
        namespace {
            inline app::CameraLookAheadController__Class* type_info_ref = nullptr;
        }
        inline app::CameraLookAheadController__Class** type_info = &type_info_ref;
        inline app::CameraLookAheadController__Class* get_class() {
            return il2cpp::get_class<app::CameraLookAheadController__Class>(type_info, "", "CameraLookAheadController");
        }
        inline app::CameraLookAheadController* create() {
            return il2cpp::create_object<app::CameraLookAheadController>(get_class());
        }
    } // namespace CameraLookAheadController
} // namespace app::classes::types
