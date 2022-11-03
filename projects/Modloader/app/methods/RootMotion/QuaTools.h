#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::QuaTools {
    IL2CPP_REGISTER_METHOD(0x02A2C380, app::Quaternion, LinearBlend, (app::Quaternion q, float weight))
    IL2CPP_REGISTER_METHOD(0x02A2C590, app::Quaternion, SphericalBlend, (app::Quaternion q, float weight))
    IL2CPP_REGISTER_METHOD(0x02A2C7A0, app::Quaternion, FromToAroundAxis, (app::Vector3 from_direction, app::Vector3 to_direction, app::Vector3 axis))
    IL2CPP_REGISTER_METHOD(0x02A2CA60, app::Quaternion, RotationToLocalSpace, (app::Quaternion space, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x02A2CCB0, app::Quaternion, FromToRotation, (app::Quaternion from, app::Quaternion to))
    IL2CPP_REGISTER_METHOD(0x02A2CF50, app::Vector3, GetAxis, (app::Vector3 v))
    IL2CPP_REGISTER_METHOD(0x02A2D320, app::Quaternion, ClampRotation, (app::Quaternion rotation, float clamp_weight, int32_t clamp_smoothing))
    IL2CPP_REGISTER_METHOD(0x02A2D5D0, float, ClampAngle, (float angle, float clamp_weight, int32_t clamp_smoothing))
} // namespace app::classes::RootMotion::QuaTools
