#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NewLocation.h>
#include <Modloader/app/structs/Double__Array.h>
#include <Modloader/app/structs/Double__Array__Array.h>
#include <Modloader/app/structs/IPredicates.h>
#include <Modloader/app/structs/Mesh_1.h>
#include <Modloader/app/structs/Otri.h>
#include <Modloader/app/structs/Point.h>
#include <Modloader/app/structs/Vertex.h>

namespace app::classes::TriangleNet::NewLocation {
    IL2CPP_REGISTER_METHOD(0x02B16840, void, ctor, (app::NewLocation * this_ptr, app::Mesh_1* mesh, app::IPredicates* predicates))
    IL2CPP_REGISTER_METHOD(0x02B169D0, app::Point*, FindLocation, (app::NewLocation * this_ptr, app::Vertex* org, app::Vertex* dest, app::Vertex* apex, double* xi, double* eta, bool offcenter, app::Otri badotri))
    IL2CPP_REGISTER_METHOD(0x02B16A90, app::Point*, FindNewLocationWithoutMaxAngle, (app::NewLocation * this_ptr, app::Vertex* torg, app::Vertex* tdest, app::Vertex* tapex, double* xi, double* eta, bool offcenter, app::Otri badotri))
    IL2CPP_REGISTER_METHOD(0x02B18EB0, app::Point*, FindNewLocation, (app::NewLocation * this_ptr, app::Vertex* torg, app::Vertex* tdest, app::Vertex* tapex, double* xi, double* eta, bool offcenter, app::Otri badotri))
    IL2CPP_REGISTER_METHOD(0x02B1DB90, int32_t, LongestShortestEdge, (app::NewLocation * this_ptr, double aodist, double dadist, double dodist))
    IL2CPP_REGISTER_METHOD(0x02B1DBE0, int32_t, DoSmoothing, (app::NewLocation * this_ptr, app::Otri badotri, app::Vertex* torg, app::Vertex* tdest, app::Vertex* tapex, app::Double__Array** newloc))
    IL2CPP_REGISTER_METHOD(0x02B1E3F0, int32_t, GetStarPoints, (app::NewLocation * this_ptr, app::Otri badotri, app::Vertex* p, app::Vertex* q, app::Vertex* r, int32_t which_point, app::Double__Array** points))
    IL2CPP_REGISTER_METHOD(0x02B1E970, bool, GetNeighborsVertex, (app::NewLocation * this_ptr, app::Otri badotri, double first_x, double first_y, double second_x, double second_y, app::Double__Array** thirdpoint, app::Otri* neighotri))
    IL2CPP_REGISTER_METHOD(0x02B1F2D0, bool, GetWedgeIntersectionWithoutMaxAngle, (app::NewLocation * this_ptr, int32_t numpoints, app::Double__Array* points, app::Double__Array** newloc))
    IL2CPP_REGISTER_METHOD(0x02B20A60, bool, GetWedgeIntersection, (app::NewLocation * this_ptr, int32_t numpoints, app::Double__Array* points, app::Double__Array** newloc))
    IL2CPP_REGISTER_METHOD(0x02B24290, bool, ValidPolygonAngles, (app::NewLocation * this_ptr, int32_t numpoints, app::Double__Array* points))
    IL2CPP_REGISTER_METHOD(0x02B245E0, bool, IsBadPolygonAngle, (app::NewLocation * this_ptr, double x1, double y1, double x2, double y2, double x3, double y3))
    IL2CPP_REGISTER_METHOD(0x02B247A0, void, LineLineIntersection, (app::NewLocation * this_ptr, double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, app::Double__Array** p))
    IL2CPP_REGISTER_METHOD(0x02B24B20, int32_t, HalfPlaneIntersection, (app::NewLocation * this_ptr, int32_t numvertices, app::Double__Array** convex_poly, double x1, double y1, double x2, double y2))
    IL2CPP_REGISTER_METHOD(0x02B24FB0, int32_t, SplitConvexPolygon, (app::NewLocation * this_ptr, int32_t numvertices, app::Double__Array* convex_poly, double x1, double y1, double x2, double y2, app::Double__Array__Array* polys))
    IL2CPP_REGISTER_METHOD(0x02B26140, int32_t, LinePointLocation, (app::NewLocation * this_ptr, double x1, double y1, double x2, double y2, double x, double y))
    IL2CPP_REGISTER_METHOD(0x02B26390, void, LineLineSegmentIntersection, (app::NewLocation * this_ptr, double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, app::Double__Array** p))
    IL2CPP_REGISTER_METHOD(0x02B26740, void, FindPolyCentroid, (app::NewLocation * this_ptr, int32_t numpoints, app::Double__Array* points, app::Double__Array** centroid))
    IL2CPP_REGISTER_METHOD(0x02B26950, void, CircleLineIntersection, (app::NewLocation * this_ptr, double x1, double y1, double x2, double y2, double x3, double y3, double r, app::Double__Array** p))
    IL2CPP_REGISTER_METHOD(0x02B26E60, bool, ChooseCorrectPoint, (app::NewLocation * this_ptr, double x1, double y1, double x2, double y2, double x3, double y3, bool is_obtuse))
    IL2CPP_REGISTER_METHOD(0x02B26EB0, void, PointBetweenPoints, (app::NewLocation * this_ptr, double x1, double y1, double x2, double y2, double x, double y, app::Double__Array** p))
    IL2CPP_REGISTER_METHOD(0x02B27100, bool, IsBadTriangleAngle, (app::NewLocation * this_ptr, double x1, double y1, double x2, double y2, double x3, double y3))
    IL2CPP_REGISTER_METHOD(0x02B273A0, double, MinDistanceToNeighbor, (app::NewLocation * this_ptr, double newloc_x, double newloc_y, app::Otri* searchtri))
} // namespace app::classes::TriangleNet::NewLocation
