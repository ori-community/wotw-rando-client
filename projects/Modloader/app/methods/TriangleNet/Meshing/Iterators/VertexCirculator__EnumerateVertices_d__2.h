#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::Meshing::Iterators::VertexCirculator__EnumerateVertices_d__2 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, (app::VertexCirculator_EnumerateVertices_d_2 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x02B12C80, void, IDisposable_Dispose, (app::VertexCirculator_EnumerateVertices_d_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B12CC0, bool, MoveNext, (app::VertexCirculator_EnumerateVertices_d_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B12F10, void, __m__Finally1, (app::VertexCirculator_EnumerateVertices_d_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Vertex*, IEnumerator_Vertex__get_Current, (app::VertexCirculator_EnumerateVertices_d_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B12FA0, void, IEnumerator_Reset, (app::VertexCirculator_EnumerateVertices_d_2 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470BB30, VertexCirculator_EnumerateVertices_d_2_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::VertexCirculator_EnumerateVertices_d_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B12FF0, app::IEnumerator_1_TriangleNet_Geometry_Vertex_*, IEnumerable_Vertex__GetEnumerator, (app::VertexCirculator_EnumerateVertices_d_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B131F0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::VertexCirculator_EnumerateVertices_d_2 * this_ptr))
} // namespace app::classes::TriangleNet::Meshing::Iterators::VertexCirculator__EnumerateVertices_d__2
