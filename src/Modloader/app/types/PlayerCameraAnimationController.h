#pragma once
#include <Modloader/app/structs/PlayerCameraAnimationController.h>
#include <Modloader/app/structs/PlayerCameraAnimationController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerCameraAnimationController {
        inline app::PlayerCameraAnimationController__Class** type_info() {
            static app::PlayerCameraAnimationController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerCameraAnimationController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerCameraAnimationController__Class* get_class() {
            return il2cpp::get_class<app::PlayerCameraAnimationController__Class>(type_info(), "", "PlayerCameraAnimationController");
        }
        inline app::PlayerCameraAnimationController* create() {
            return il2cpp::create_object<app::PlayerCameraAnimationController>(get_class());
        }
    } // namespace PlayerCameraAnimationController
} // namespace app::classes::types
