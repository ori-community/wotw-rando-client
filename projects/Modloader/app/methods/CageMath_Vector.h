#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CageMath_Vector {
    IL2CPP_REGISTER_METHOD(0x00823C00, float, Sign, (app::Vector2 p1, app::Vector2 p2, app::Vector2 p3))
    IL2CPP_REGISTER_METHOD(0x00823C50, bool, PointInTriangle, (app::Vector2 pt, app::Vector2 v1, app::Vector2 v2, app::Vector2 v3))
    IL2CPP_REGISTER_METHOD(0x00823D60, app::Vector3, ClosestPointOnTriangle, (app::Vector2 pt, app::Vector2 v1, app::Vector2 v2, app::Vector2 v3))
} // namespace app::classes::CageMath_Vector
