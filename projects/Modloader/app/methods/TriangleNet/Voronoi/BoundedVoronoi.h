#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::Voronoi::BoundedVoronoi {
    IL2CPP_REGISTER_METHOD(0x02AA7800, void, ctor_1, (app::BoundedVoronoi * this_ptr, app::Mesh_1* mesh))
    IL2CPP_REGISTER_METHOD(0x02AA7990, void, ctor_2, (app::BoundedVoronoi * this_ptr, app::Mesh_1* mesh, app::IVoronoiFactory* factory, app::IPredicates* predicates))
    IL2CPP_REGISTER_METHOD(0x02AA7AA0, void, PostProcess, (app::BoundedVoronoi * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA7DC0, void, HandleCase1, (app::BoundedVoronoi * this_ptr, app::HalfEdge* edge, app::Vertex* v1, app::Vertex* v2))
    IL2CPP_REGISTER_METHOD(0x02AA8060, void, HandleCase2, (app::BoundedVoronoi * this_ptr, app::HalfEdge* edge, app::Vertex* v1, app::Vertex* v2))
} // namespace app::classes::TriangleNet::Voronoi::BoundedVoronoi
