#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MoonMath_Polygon {
    IL2CPP_REGISTER_METHOD(0x02579280, bool, PointInside2dConvexPoly_1, (app::Vector2 point, app::Vector2__Array* poly))
    IL2CPP_REGISTER_METHOD(0x025794C0, bool, PointInside2dConvexPoly_2, (app::Vector2 point, app::List_1_UnityEngine_Vector2_* poly))
} // namespace app::classes::MoonMath_Polygon
