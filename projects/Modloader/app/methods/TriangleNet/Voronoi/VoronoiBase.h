#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VoronoiBase.h>
#include <Modloader/app/structs/Mesh_1.h>
#include <Modloader/app/structs/IVoronoiFactory.h>
#include <Modloader/app/structs/IPredicates.h>
#include <Modloader/app/structs/List_1_TriangleNet_Topology_DCEL_HalfEdge___Array.h>
#include <Modloader/app/structs/Vertex_1__Array.h>
#include <Modloader/app/structs/Face__Array.h>
#include <Modloader/app/structs/IEnumerable_1_TriangleNet_Geometry_IEdge_.h>

namespace app::classes::TriangleNet::Voronoi::VoronoiBase {
    IL2CPP_REGISTER_METHOD(0x02AAEFA0, void, ctor, (app::VoronoiBase * this_ptr, app::Mesh_1* mesh, app::IVoronoiFactory* factory, app::IPredicates* predicates, bool generate))
    IL2CPP_REGISTER_METHOD(0x02AAF050, void, Generate, (app::VoronoiBase * this_ptr, app::Mesh_1* mesh))
    IL2CPP_REGISTER_METHOD(0x02AAF8B0, app::List_1_TriangleNet_Topology_DCEL_HalfEdge___Array*, ComputeVertices, (app::VoronoiBase * this_ptr, app::Mesh_1* mesh, app::Vertex_1__Array* vertices))
    IL2CPP_REGISTER_METHOD(0x02AAFEB0, void, ComputeEdges, (app::VoronoiBase * this_ptr, app::Mesh_1* mesh, app::Vertex_1__Array* vertices, app::Face__Array* faces, app::List_1_TriangleNet_Topology_DCEL_HalfEdge___Array* map))
    IL2CPP_REGISTER_METHOD(0x02AB0540, void, ConnectEdges, (app::VoronoiBase * this_ptr, app::List_1_TriangleNet_Topology_DCEL_HalfEdge___Array* map))
    IL2CPP_REGISTER_METHOD(0x02AB0870, app::IEnumerable_1_TriangleNet_Geometry_IEdge_*, EnumerateEdges, (app::VoronoiBase * this_ptr))
} // namespace app::classes::TriangleNet::Voronoi::VoronoiBase
