#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Polygon_1.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Polygon {
    IL2CPP_REGISTER_METHOD(0x00C58D80, bool, ContainsPoint, (app::Polygon_1 * this_ptr, app::Vector2 p, app::Matrix4x4 m))
    IL2CPP_REGISTER_METHOD(0x00C590C0, void, add_OnPolygonUpdateComponents, (app::Polygon_1 * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x00C591B0, void, remove_OnPolygonUpdateComponents, (app::Polygon_1 * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x00C592A0, void, UpdateComponents, (app::Polygon_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C59EE0, void, GenerateMesh, (app::Polygon_1 * this_ptr, bool front, bool back, bool sides, float extrude, float elevate, bool use_normals, bool use_u_v_s, app::Vector2 front_u_v_scale, app::Vector2 back_u_v_scale, app::Vector2 side_u_v_scale, bool closed, app::Mesh* mesh))
    IL2CPP_REGISTER_METHOD(0x00C5BCA0, bool, IsPointInside, (app::Polygon_1 * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00C5BFF0, float, GetAngle, (app::Vector2 A, app::Vector2 B, app::Vector2 C))
    IL2CPP_REGISTER_METHOD(0x00823730, float, DotProduct, (app::Vector2 A, app::Vector2 B, app::Vector2 C))
    IL2CPP_REGISTER_METHOD(0x00823780, float, CrossProductLength, (app::Vector2 A, app::Vector2 B, app::Vector2 C))
    IL2CPP_REGISTER_METHOD(0x00C5C100, app::Vector3, CalculateCenterOfMass, (app::Polygon_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C5C3E0, bool, IsOrderInverted, (app::Polygon_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C5C4F0, void, FixReverseOrder, (app::Polygon_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C5C5C0, app::Vector3, ClosestPoint, (app::Polygon_1 * this_ptr, app::Vector3 reference_point))
    IL2CPP_REGISTER_METHOD(0x00C5C9F0, void, ctor, (app::Polygon_1 * this_ptr))
} // namespace app::classes::Polygon
