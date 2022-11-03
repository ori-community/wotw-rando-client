#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::Voronoi::Legacy::VoronoiRegion {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_ID, (app::VoronoiRegion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Point*, get_Generator, (app::VoronoiRegion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::ICollection_1_TriangleNet_Geometry_Point_*, get_Vertices, (app::VoronoiRegion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_Bounded, (app::VoronoiRegion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_Bounded, (app::VoronoiRegion * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02AAE280, void, ctor, (app::VoronoiRegion * this_ptr, app::Vertex* generator))
    IL2CPP_REGISTER_METHOD(0x02AAE4E0, void, Add_1, (app::VoronoiRegion * this_ptr, app::Point* point))
    IL2CPP_REGISTER_METHOD(0x02AAE580, void, Add_2, (app::VoronoiRegion * this_ptr, app::List_1_TriangleNet_Geometry_Point_* points))
    IL2CPP_REGISTER_METHOD(0x02AAE630, app::VoronoiRegion*, GetNeighbor, (app::VoronoiRegion * this_ptr, app::Point* p))
    IL2CPP_REGISTER_METHOD(0x02AAE730, void, AddNeighbor, (app::VoronoiRegion * this_ptr, int32_t id, app::VoronoiRegion* neighbor))
    IL2CPP_REGISTER_METHOD(0x02AAE7F0, app::String*, ToString, (app::VoronoiRegion * this_ptr))
} // namespace app::classes::TriangleNet::Voronoi::Legacy::VoronoiRegion
