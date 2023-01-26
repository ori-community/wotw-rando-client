#pragma once
#include <Modloader/app/structs/CameraLookAheadController.h>
#include <Modloader/app/structs/CameraLookAheadController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraLookAheadController {
        inline app::CameraLookAheadController__Class** type_info() {
            static app::CameraLookAheadController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraLookAheadController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraLookAheadController__Class* get_class() {
            return il2cpp::get_class<app::CameraLookAheadController__Class>(type_info(), "", "CameraLookAheadController");
        }
        inline app::CameraLookAheadController* create() {
            return il2cpp::create_object<app::CameraLookAheadController>(get_class());
        }
    } // namespace CameraLookAheadController
} // namespace app::classes::types
