#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MoonMath_Vector {
    IL2CPP_REGISTER_METHOD(0x02579E50, app::Vector2, ApplyCircleDeadzone, (app::Vector2 axis, float deadzone_radius))
    IL2CPP_REGISTER_METHOD(0x02579FB0, app::Vector2, ApplyRectangleDeadzone, (app::Vector2 axis, float deadzone_x, float deadzone_y))
    IL2CPP_REGISTER_METHOD(0x0257A0F0, app::Vector3, Abs, (app::Vector3 v))
    IL2CPP_REGISTER_METHOD(0x01831B60, app::Vector3, Divide, (app::Vector3 a, app::Vector3 b))
    IL2CPP_REGISTER_METHOD(0x0257A1F0, app::Vector2, RotateTowards, (app::Vector2 angle_vector, app::Vector2 target_vector, float delta))
    IL2CPP_REGISTER_METHOD(0x00823C50, bool, PointInTriangle, (app::Vector2 pt, app::Vector2 v1, app::Vector2 v2, app::Vector2 v3))
    IL2CPP_REGISTER_METHOD(0x00823C00, float, sign, (app::Vector2 p1, app::Vector2 p2, app::Vector2 p3))
    IL2CPP_REGISTER_METHOD(0x0257A340, float, Distance_1, (app::Vector3 start, app::Vector3 target))
    IL2CPP_REGISTER_METHOD(0x0257A480, bool, PointInCircle, (app::Vector2 point, app::Vector2 circle_center, float radius))
    IL2CPP_REGISTER_METHOD(0x0257A4D0, float, Distance_2, (app::Vector3 start, app::Vector2 target))
    IL2CPP_REGISTER_METHOD(0x01B14200, app::Vector3, Perpendicular3, (app::Vector3 v))
    IL2CPP_REGISTER_METHOD(0x018307C0, app::Vector2, Perpendicular, (app::Vector2 v))
    IL2CPP_REGISTER_METHOD(0x0257A5C0, app::Vector3, Lerp2d, (app::Vector3 a, app::Vector3 b, float k))
    IL2CPP_REGISTER_METHOD(0x0257A7B0, bool, LineIntersection_1, (app::Vector2 p1, app::Vector2 p2, app::Vector2 p3, app::Vector2 p4))
    IL2CPP_REGISTER_METHOD(0x0257A7E0, bool, LineIntersection_2, (app::Vector2 p1, app::Vector2 p2, app::Vector2 p3, app::Vector2 p4, app::Vector2 * intersection))
}
