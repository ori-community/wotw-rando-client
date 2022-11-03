#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::Topology::DCEL::Vertex__EnumerateEdges_d__6 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, (app::Vertex_EnumerateEdges_d_6 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::Vertex_EnumerateEdges_d_6 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA20F0, bool, MoveNext, (app::Vertex_EnumerateEdges_d_6 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::HalfEdge*, IEnumerator_HalfEdge__get_Current, (app::Vertex_EnumerateEdges_d_6 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA21A0, void, IEnumerator_Reset, (app::Vertex_EnumerateEdges_d_6 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04766FA0, Vertex_EnumerateEdges_d_6_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::Vertex_EnumerateEdges_d_6 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA21F0, app::IEnumerator_1_TriangleNet_Topology_DCEL_HalfEdge_*, IEnumerable_HalfEdge__GetEnumerator, (app::Vertex_EnumerateEdges_d_6 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA23E0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Vertex_EnumerateEdges_d_6 * this_ptr))
} // namespace app::classes::TriangleNet::Topology::DCEL::Vertex__EnumerateEdges_d__6
