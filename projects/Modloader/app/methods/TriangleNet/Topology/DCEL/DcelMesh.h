#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::Topology::DCEL::DcelMesh {
    IL2CPP_REGISTER_METHOD(0x02AA0220, void, ctor_1, (app::DcelMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA0230, void, ctor_2, (app::DcelMesh * this_ptr, bool initialize))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::List_1_TriangleNet_Topology_DCEL_Vertex_*, get_Vertices, (app::DcelMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::List_1_TriangleNet_Topology_DCEL_HalfEdge_*, get_HalfEdges, (app::DcelMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::List_1_TriangleNet_Topology_DCEL_Face_*, get_Faces, (app::DcelMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC2AF0, app::IEnumerable_1_TriangleNet_Geometry_IEdge_*, get_Edges, (app::DcelMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA0530, bool, IsConsistent, (app::DcelMesh * this_ptr, bool closed, int32_t depth))
    IL2CPP_REGISTER_METHOD(0x02AA0CF0, void, ResolveBoundaryEdges, (app::DcelMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA1270, app::IEnumerable_1_TriangleNet_Geometry_IEdge_*, EnumerateEdges, (app::DcelMesh * this_ptr))
} // namespace app::classes::TriangleNet::Topology::DCEL::DcelMesh
