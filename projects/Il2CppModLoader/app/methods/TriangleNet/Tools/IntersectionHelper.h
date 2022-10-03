#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TriangleNet::Tools::IntersectionHelper {
    IL2CPP_REGISTER_METHOD(0x02A96E40, void, IntersectSegments, (app::Point * p0, app::Point* p1, app::Point* q0, app::Point* q1, app::Point** c0))
    IL2CPP_REGISTER_METHOD(0x02A96F30, bool, LiangBarsky, (app::Rectangle * rect, app::Point* p0, app::Point* p1, app::Point** c0, app::Point** c1))
    IL2CPP_REGISTER_METHOD(0x02A97160, bool, BoxRayIntersection_1, (app::Rectangle * rect, app::Point* p0, app::Point* p1, app::Point** c1))
    IL2CPP_REGISTER_METHOD(0x02A971B0, app::Point*, BoxRayIntersection_2, (app::Rectangle * rect, app::Point* p, double dx, double dy))
    IL2CPP_REGISTER_METHOD(0x02A97360, bool, BoxRayIntersection_3, (app::Rectangle * rect, app::Point* p, double dx, double dy, app::Point** c))
    IL2CPP_REGISTER_METHOD(0x02A974C0, bool, LinePlaneIntersection, (app::Vector3 * intersection, app::Vector3 line_point, app::Vector3 line_vec, app::Vector3 plane_normal, app::Vector3 plane_point))
} // namespace app::classes::TriangleNet::Tools::IntersectionHelper
