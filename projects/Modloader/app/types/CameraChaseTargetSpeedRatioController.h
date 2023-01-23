#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraChaseTargetSpeedRatioController__Class.h>
#include <Modloader/app/structs/CameraChaseTargetSpeedRatioController.h>

namespace app::classes::types {
    namespace CameraChaseTargetSpeedRatioController {
        namespace {
            inline app::CameraChaseTargetSpeedRatioController__Class* type_info_ref = nullptr;
        }
        inline app::CameraChaseTargetSpeedRatioController__Class** type_info = &type_info_ref;
        inline app::CameraChaseTargetSpeedRatioController__Class* get_class() {
            return il2cpp::get_class<app::CameraChaseTargetSpeedRatioController__Class>(type_info, "", "CameraChaseTargetSpeedRatioController");
        }
        inline app::CameraChaseTargetSpeedRatioController* create() {
            return il2cpp::create_object<app::CameraChaseTargetSpeedRatioController>(get_class());
        }
    } // namespace CameraChaseTargetSpeedRatioController
} // namespace app::classes::types
