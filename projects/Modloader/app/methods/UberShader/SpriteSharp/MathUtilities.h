#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/UInt16__Array.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UberShader::SpriteSharp::MathUtilities {
    IL2CPP_REGISTER_METHOD(0x018FB210, float, LookUpSine, (float value))
    IL2CPP_REGISTER_METHOD(0x018FB390, void, CreateSineLookupTable, ())
    IL2CPP_REGISTER_METHOD(0x018FB550, bool, AreLineSegmentsIntersecting, (app::Vector2 line1_start, app::Vector2 line1_end, app::Vector2 line2_start, app::Vector2 line2_end))
    IL2CPP_REGISTER_METHOD(0x018FB660, float, CalculateTriangleArea, (app::Vector2 point1, app::Vector2 point2, app::Vector2 point3))
    IL2CPP_REGISTER_METHOD(0x018FB750, float, CalculatePolygonArea, (app::Vector2__Array * polygon))
    IL2CPP_REGISTER_METHOD(0x018FB8B0, bool, IsPointInsidePolygon_1, (app::Vector2 point, app::Vector2__Array* polygon))
    IL2CPP_REGISTER_METHOD(0x018FBA00, bool, IsPointInsidePolygon_2, (app::Vector2 point, app::List_1_UnityEngine_Vector2_* polygon))
    IL2CPP_REGISTER_METHOD(0x018FBC00, bool, IsPolygonInsidePolygon_1, (app::Vector2__Array * inner_polygon, app::Rect inner_polygon_rect, app::Vector2__Array* outer_polygon, app::Rect outer_polygon_rect))
    IL2CPP_REGISTER_METHOD(0x018FBFC0, bool, IsPolygonInsidePolygon_2, (app::Vector2__Array * inner_polygon, app::Vector2__Array* outer_polygon))
    IL2CPP_REGISTER_METHOD(0x018FC2D0, bool, AreRectsIntersecting, (app::Rect a, app::Rect b))
    IL2CPP_REGISTER_METHOD(0x018FC320, float, CalculateMeshArea, (app::UInt16__Array * triangles, app::Vector2__Array* vertices))
    IL2CPP_REGISTER_METHOD(0x018FC540, float, CalculateMeshAreaAndBoundingBox, (app::UInt16__Array * triangles, app::Vector2__Array* vertices, app::Vector2* min, app::Vector2* max))
    IL2CPP_REGISTER_METHOD(0x018FC890, app::Vector2, CenterOfMass_1, (app::List_1_UnityEngine_Vector2_ * points))
    IL2CPP_REGISTER_METHOD(0x018FCA20, app::Vector2, CenterOfMass_2, (app::Vector2__Array * points))
    IL2CPP_REGISTER_METHOD(0x018FCBA0, app::Vector2, PointCloudSize, (app::List_1_UnityEngine_Vector2_ * points))
    IL2CPP_REGISTER_METHOD(0x018FCDC0, bool, HaveEqualSigns, (float a, float b))
    IL2CPP_REGISTER_METHOD(0x018FCDE0, float, ManhattanDistance, (app::Vector3 a, app::Vector3 b))
    IL2CPP_REGISTER_METHOD(0x018FCED0, void, cctor, ())
} // namespace app::classes::UberShader::SpriteSharp::MathUtilities
