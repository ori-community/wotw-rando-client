#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CageMath_Line {
    IL2CPP_REGISTER_METHOD(0x008237D0, app::Vector3, ClosestPointOnLineSegmentToPoint2D, (app::Vector3 p1, app::Vector3 p2, app::Vector3 p))
}
