#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::IntersectionHelper {
    IL2CPP_REGISTER_METHOD(0x0063E090, bool, LinesIntersect, (app::Vector3 start0, app::Vector3 end0, app::Vector3 start1, app::Vector3 end1))
    IL2CPP_REGISTER_METHOD(0x0063E370, bool, LineIntersectRect, (app::Rect rect, app::Vector3 line_from, app::Vector3 line_to))
    IL2CPP_REGISTER_METHOD(0x0063E4A0, bool, RayIntersectRect, (app::Rect rect, app::Vector3 ray_origin, app::Vector3 ray_delta))
} // namespace app::classes::IntersectionHelper
