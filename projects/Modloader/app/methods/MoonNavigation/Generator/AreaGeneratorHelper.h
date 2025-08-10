#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector2__Array.h>

namespace app::classes::MoonNavigation::Generator::AreaGeneratorHelper {
    IL2CPP_REGISTER_METHOD(0x0145B5C0, bool, LineIntersection, app::Vector2 p1, app::Vector2 p2, app::Vector2 p3, app::Vector2 p4, app::Vector2* intersection)
    IL2CPP_REGISTER_METHOD(0x0145B800, app::List_1_UnityEngine_Vector2_*, GetEnlargedPolygon, app::List_1_UnityEngine_Vector2_* old_points, float offset)
    IL2CPP_REGISTER_METHOD(
        0x0145BE00,
        void,
        FindIntersection,
        app::Vector2 p1,
        app::Vector2 p2,
        app::Vector2 p3,
        app::Vector2 p4,
        bool* lines_intersect,
        bool* segments_intersect,
        app::Vector2* intersection,
        app::Vector2* close_p1,
        app::Vector2* close_p2
    )
    IL2CPP_REGISTER_METHOD(0x0145C040, bool, PolygonIsOrientedClockwise, app::Vector2__Array** points)
    IL2CPP_REGISTER_METHOD(0x0145C060, float, SignedPolygonArea, app::Vector2__Array** points)
} // namespace app::classes::MoonNavigation::Generator::AreaGeneratorHelper
