#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MoonMath_Angle {
    IL2CPP_REGISTER_METHOD(0x013B3770, float, Wrap, float angle)
    IL2CPP_REGISTER_METHOD(0x025740C0, float, Wrap180, float angle)
    IL2CPP_REGISTER_METHOD(0x02574100, float, Clamp180, float angle, float from, float to)
    IL2CPP_REGISTER_METHOD(0x02574210, float, Difference_1, float value1, float value2)
    IL2CPP_REGISTER_METHOD(0x025742E0, float, Difference_2, app::Vector2 direction1, app::Vector2 direction2)
    IL2CPP_REGISTER_METHOD(0x025743B0, float, AngleSubtract, float start, float target)
    IL2CPP_REGISTER_METHOD(0x025745C0, float, RotateTowards, float start_degrees, float target_degrees, float degrees)
    IL2CPP_REGISTER_METHOD(0x025747D0, app::Vector2, Rotate, app::Vector2 v, float angle)
    IL2CPP_REGISTER_METHOD(0x025748F0, app::Vector3, Rotate3, app::Vector3 v, float angle)
    IL2CPP_REGISTER_METHOD(0x02574A50, app::Vector2, Unrotate, app::Vector2 v, float angle)
    IL2CPP_REGISTER_METHOD(0x02574A70, float, AngleFromVector, app::Vector2 delta)
    IL2CPP_REGISTER_METHOD(0x02574B20, float, AngleFromDirection, app::Vector2 delta)
    IL2CPP_REGISTER_METHOD(0x02574BD0, app::Quaternion, QuaternionFromDirection, app::Vector2 delta)
    IL2CPP_REGISTER_METHOD(0x02574CD0, app::Vector2, VectorFromAngle, float angle)
} // namespace app::classes::MoonMath_Angle
