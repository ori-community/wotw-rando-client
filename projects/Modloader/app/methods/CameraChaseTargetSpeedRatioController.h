#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CameraChaseTargetSpeedRatioController.h>

namespace app::classes::CameraChaseTargetSpeedRatioController {
    IL2CPP_REGISTER_METHOD(0x01684330, void, Start, (app::CameraChaseTargetSpeedRatioController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01684360, void, FixedUpdate, (app::CameraChaseTargetSpeedRatioController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsSuspended, (app::CameraChaseTargetSpeedRatioController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DC040, void, set_IsSuspended, (app::CameraChaseTargetSpeedRatioController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01684860, void, ctor, (app::CameraChaseTargetSpeedRatioController * this_ptr))
} // namespace app::classes::CameraChaseTargetSpeedRatioController
