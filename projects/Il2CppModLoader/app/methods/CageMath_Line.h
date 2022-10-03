#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CageMath_Line {
    IL2CPP_REGISTER_METHOD(0x008237D0, app::Vector3, ClosestPointOnLineSegmentToPoint2D, (app::Vector3 p1, app::Vector3 p2, app::Vector3 p))
}
