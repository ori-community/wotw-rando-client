#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraChaseTarget {
    IL2CPP_REGISTER_METHOD(0x01683250, app::CameraChaseTargetSpeedRatioController*, get_SpeedRatioController, (app::CameraChaseTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01683320, void, OnEnable, (app::CameraChaseTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01683410, void, Start, (app::CameraChaseTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01683420, void, UpdateCameraLastPosition, (app::CameraChaseTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016835E0, app::Vector3, UpdateChase, (app::CameraChaseTarget * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01683F90, void, GoToTarget, (app::CameraChaseTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01684230, void, DoSmoothing, (app::CameraChaseTarget * this_ptr, float smoothing_time))
    IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_IgnoreSmoothingForAFrame, (app::CameraChaseTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_IgnoreSmoothingForAFrame, (app::CameraChaseTarget * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01684240, void, ctor, (app::CameraChaseTarget * this_ptr))
} // namespace app::classes::CameraChaseTarget
