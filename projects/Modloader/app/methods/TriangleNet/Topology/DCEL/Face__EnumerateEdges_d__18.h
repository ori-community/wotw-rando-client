#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Face_EnumerateEdges_d_18.h>
#include <Modloader/app/structs/HalfEdge.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IEnumerator_1_TriangleNet_Topology_DCEL_HalfEdge_.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::TriangleNet::Topology::DCEL::Face__EnumerateEdges_d__18 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, (app::Face_EnumerateEdges_d_18 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::Face_EnumerateEdges_d_18 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA1A30, bool, MoveNext, (app::Face_EnumerateEdges_d_18 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::HalfEdge*, IEnumerator_HalfEdge__get_Current, (app::Face_EnumerateEdges_d_18 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA1AD0, void, IEnumerator_Reset, (app::Face_EnumerateEdges_d_18 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471FA50, Face_EnumerateEdges_d_18_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::Face_EnumerateEdges_d_18 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA1B20, app::IEnumerator_1_TriangleNet_Topology_DCEL_HalfEdge_*, IEnumerable_HalfEdge__GetEnumerator, (app::Face_EnumerateEdges_d_18 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA1D10, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Face_EnumerateEdges_d_18 * this_ptr))
} // namespace app::classes::TriangleNet::Topology::DCEL::Face__EnumerateEdges_d__18
