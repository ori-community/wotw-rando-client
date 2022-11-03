#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::Topology::DCEL::Vertex {
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::HalfEdge*, get_Leaving, (app::Vertex_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Leaving, (app::Vertex_1 * this_ptr, app::HalfEdge* value))
    IL2CPP_REGISTER_METHOD(0x0261CB00, void, ctor_1, (app::Vertex_1 * this_ptr, double x, double y))
    IL2CPP_REGISTER_METHOD(0x02AA1E60, void, ctor_2, (app::Vertex_1 * this_ptr, double x, double y, app::HalfEdge* leaving))
    IL2CPP_REGISTER_METHOD(0x02AA1E80, app::IEnumerable_1_TriangleNet_Topology_DCEL_HalfEdge_*, EnumerateEdges, (app::Vertex_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA2010, app::String*, ToString, (app::Vertex_1 * this_ptr))
} // namespace app::classes::TriangleNet::Topology::DCEL::Vertex
