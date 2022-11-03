#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::CameraControllerFPS {
    IL2CPP_REGISTER_METHOD(0x02207C00, void, Awake, (app::CameraControllerFPS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02207D00, void, LateUpdate, (app::CameraControllerFPS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022081F0, float, ClampAngle, (app::CameraControllerFPS * this_ptr, float angle, float min, float max))
    IL2CPP_REGISTER_METHOD(0x022082E0, void, ctor, (app::CameraControllerFPS * this_ptr))
} // namespace app::classes::RootMotion::CameraControllerFPS
