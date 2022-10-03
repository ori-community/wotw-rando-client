#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MoonMath_Rectangle {
    IL2CPP_REGISTER_METHOD(0x025796D0, bool, GetIntersection, (app::Rect rect, app::Vector2 p1, app::Vector2 p2, app::Vector2* intersection))
    IL2CPP_REGISTER_METHOD(0x02579840, app::Rect, Absolute, (app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x02579960, app::Rect, IncapsulatePoint, (app::Rect rect, app::Vector2 point, float r))
    IL2CPP_REGISTER_METHOD(0x02579A20, app::Vector2, ShortestPathFromPointToRectangle, (app::Vector2 point, app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x02579BF0, float, DistanceFromPointToRectangle, (app::Vector2 point, app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x02579D90, float, DistanceSquaredFromPointToRectangle, (app::Vector2 point, app::Rect rect, bool* should_sqrt))
} // namespace app::classes::MoonMath_Rectangle
