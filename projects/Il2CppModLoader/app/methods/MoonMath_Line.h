#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MoonMath_Line {
    IL2CPP_REGISTER_METHOD(0x02575B10, app::Vector3, ClosestPointOnLineSegmentToPoint2D, (app::Vector3 p1, app::Vector3 p2, app::Vector3 p))
    IL2CPP_REGISTER_METHOD(0x02575ED0, app::Vector3, ClosestPointOnLineSegmentToPoint3D, (app::Vector3 point1, app::Vector3 point2, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x02576200, float, DistancePointToLine2D, (app::Vector3 p1, app::Vector3 p2, app::Vector3 p))
    IL2CPP_REGISTER_METHOD(0x02576350, float, DistanceToSegment, (app::Vector3 point1, app::Vector3 point2, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x02576690, float, DistanceToSegment2D, (app::Vector3 point1, app::Vector3 point2, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x025769D0, bool, SegmentIntersectsCircle, (app::Vector2 point1, app::Vector2 point2, app::Vector2 circle_pos, float radius))
} // namespace app::classes::MoonMath_Line
