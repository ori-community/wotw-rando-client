#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerCameraAnimationController {
        namespace {
            app::PlayerCameraAnimationController__Class* type_info_ref = nullptr;
        }
        app::PlayerCameraAnimationController__Class** type_info = &type_info_ref;
        inline app::PlayerCameraAnimationController__Class* get_class() {
            return il2cpp::get_class<app::PlayerCameraAnimationController__Class>(type_info, "", "PlayerCameraAnimationController");
        }
        inline app::PlayerCameraAnimationController* create() {
            return il2cpp::create_object<app::PlayerCameraAnimationController>(get_class());
        }
    } // namespace PlayerCameraAnimationController
} // namespace app::classes::types
