#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraChaseTargetSpeedRatioController {
        namespace {
            app::CameraChaseTargetSpeedRatioController__Class* type_info_ref = nullptr;
        }
        app::CameraChaseTargetSpeedRatioController__Class** type_info = &type_info_ref;
        inline app::CameraChaseTargetSpeedRatioController__Class* get_class() {
            return il2cpp::get_class<app::CameraChaseTargetSpeedRatioController__Class>(type_info, "", "CameraChaseTargetSpeedRatioController");
        }
        inline app::CameraChaseTargetSpeedRatioController* create() {
            return il2cpp::create_object<app::CameraChaseTargetSpeedRatioController>(get_class());
        }
    } // namespace CameraChaseTargetSpeedRatioController
} // namespace app::classes::types
