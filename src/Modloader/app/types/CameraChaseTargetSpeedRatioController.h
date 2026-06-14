#pragma once
#include <Modloader/app/structs/CameraChaseTargetSpeedRatioController.h>
#include <Modloader/app/structs/CameraChaseTargetSpeedRatioController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraChaseTargetSpeedRatioController {
        inline app::CameraChaseTargetSpeedRatioController__Class** type_info() {
            static app::CameraChaseTargetSpeedRatioController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraChaseTargetSpeedRatioController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraChaseTargetSpeedRatioController__Class* get_class() {
            return il2cpp::get_class<app::CameraChaseTargetSpeedRatioController__Class>(type_info(), "", "CameraChaseTargetSpeedRatioController");
        }
        inline app::CameraChaseTargetSpeedRatioController* create() {
            return il2cpp::create_object<app::CameraChaseTargetSpeedRatioController>(get_class());
        }
    } // namespace CameraChaseTargetSpeedRatioController
} // namespace app::classes::types
