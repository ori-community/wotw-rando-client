#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TriangleNet::Voronoi::VoronoiBase {
    IL2CPP_REGISTER_METHOD(0x02AAEFA0, void, ctor, (app::VoronoiBase * this_ptr, app::Mesh_1 * mesh, app::IVoronoiFactory * factory, app::IPredicates * predicates, bool generate))
    IL2CPP_REGISTER_METHOD(0x02AAF050, void, Generate, (app::VoronoiBase * this_ptr, app::Mesh_1 * mesh))
    IL2CPP_REGISTER_METHOD(0x02AAF8B0, app::List_1_TriangleNet_Topology_DCEL_HalfEdge___Array *, ComputeVertices, (app::VoronoiBase * this_ptr, app::Mesh_1 * mesh, app::Vertex_1__Array * vertices))
    IL2CPP_REGISTER_METHOD(0x02AAFEB0, void, ComputeEdges, (app::VoronoiBase * this_ptr, app::Mesh_1 * mesh, app::Vertex_1__Array * vertices, app::Face__Array * faces, app::List_1_TriangleNet_Topology_DCEL_HalfEdge___Array * map))
    IL2CPP_REGISTER_METHOD(0x02AB0540, void, ConnectEdges, (app::VoronoiBase * this_ptr, app::List_1_TriangleNet_Topology_DCEL_HalfEdge___Array * map))
    IL2CPP_REGISTER_METHOD(0x02AB0870, app::IEnumerable_1_TriangleNet_Geometry_IEdge_ *, EnumerateEdges, (app::VoronoiBase * this_ptr))
}
