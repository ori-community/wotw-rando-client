#pragma once
#include <Modloader/app/structs/FallCutsceneCameraOffsetController.h>
#include <Modloader/app/structs/FallCutsceneCameraOffsetController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FallCutsceneCameraOffsetController {
        inline app::FallCutsceneCameraOffsetController__Class** type_info() {
            static app::FallCutsceneCameraOffsetController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FallCutsceneCameraOffsetController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FallCutsceneCameraOffsetController__Class* get_class() {
            return il2cpp::get_class<app::FallCutsceneCameraOffsetController__Class>(type_info(), "", "FallCutsceneCameraOffsetController");
        }
        inline app::FallCutsceneCameraOffsetController* create() {
            return il2cpp::create_object<app::FallCutsceneCameraOffsetController>(get_class());
        }
    } // namespace FallCutsceneCameraOffsetController
} // namespace app::classes::types
