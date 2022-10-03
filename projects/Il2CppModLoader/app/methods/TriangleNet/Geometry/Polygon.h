#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TriangleNet::Geometry::Polygon {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::List_1_TriangleNet_Geometry_Vertex_*, get_Points, (app::Polygon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::List_1_TriangleNet_Geometry_Point_*, get_Holes, (app::Polygon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::List_1_TriangleNet_Geometry_RegionPointer_*, get_Regions, (app::Polygon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::List_1_TriangleNet_Geometry_ISegment_*, get_Segments, (app::Polygon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_HasPointMarkers, (app::Polygon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_HasPointMarkers, (app::Polygon * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0052A070, bool, get_HasSegmentMarkers, (app::Polygon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A080, void, set_HasSegmentMarkers, (app::Polygon * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0261CDC0, int32_t, get_Count, (app::Polygon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0261CE50, void, ctor_1, (app::Polygon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0261CE50, void, ctor_2, (app::Polygon * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0261CE60, void, ctor_3, (app::Polygon * this_ptr, int32_t capacity, bool markers))
    IL2CPP_REGISTER_METHOD(0x0261D240, void, AddContour_1, (app::Polygon * this_ptr, app::IEnumerable_1_TriangleNet_Geometry_Vertex_* points, int32_t marker, bool hole, bool convex))
    IL2CPP_REGISTER_METHOD(0x0261D4B0, void, AddContour_2, (app::Polygon * this_ptr, app::IEnumerable_1_TriangleNet_Geometry_Vertex_* points, int32_t marker, app::Point* hole))
    IL2CPP_REGISTER_METHOD(0x0261D630, app::Rectangle*, Bounds, (app::Polygon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0261D7B0, void, Add_1, (app::Polygon * this_ptr, app::Vertex* vertex))
    IL2CPP_REGISTER_METHOD(0x0261D850, void, Add_2, (app::Polygon * this_ptr, app::ISegment* segment, bool insert))
    IL2CPP_REGISTER_METHOD(0x0261D980, void, Add_3, (app::Polygon * this_ptr, app::ISegment* segment, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0261DA70, void, Add_4, (app::Polygon * this_ptr, app::Contour* contour, bool hole))
    IL2CPP_REGISTER_METHOD(0x0261DBD0, void, Add_5, (app::Polygon * this_ptr, app::Contour* contour, app::Point* hole))
} // namespace app::classes::TriangleNet::Geometry::Polygon
