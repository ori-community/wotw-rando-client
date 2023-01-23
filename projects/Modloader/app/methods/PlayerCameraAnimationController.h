#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerCameraAnimationController.h>

namespace app::classes::PlayerCameraAnimationController {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStompLand, (app::PlayerCameraAnimationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PlayerCameraAnimationController * this_ptr))
} // namespace app::classes::PlayerCameraAnimationController
