#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_TriangleNet_Geometry_ITriangle_.h>
#include <Modloader/app/structs/ITriangle.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/VertexCirculator_EnumerateTriangles_d_3.h>

namespace app::classes::TriangleNet::Meshing::Iterators::VertexCirculator__EnumerateTriangles_d__3 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, app::VertexCirculator_EnumerateTriangles_d_3* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x02B12710, void, IDisposable_Dispose, app::VertexCirculator_EnumerateTriangles_d_3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B12750, bool, MoveNext, app::VertexCirculator_EnumerateTriangles_d_3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B12990, void, __m__Finally1, app::VertexCirculator_EnumerateTriangles_d_3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ITriangle*, IEnumerator_ITriangle__get_Current, app::VertexCirculator_EnumerateTriangles_d_3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B12A20, void, IEnumerator_Reset, app::VertexCirculator_EnumerateTriangles_d_3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::VertexCirculator_EnumerateTriangles_d_3* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B12A70,
        app::IEnumerator_1_TriangleNet_Geometry_ITriangle_*,
        IEnumerable_ITriangle__GetEnumerator,
        app::VertexCirculator_EnumerateTriangles_d_3* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02B12C70, app::IEnumerator*, IEnumerable_GetEnumerator, app::VertexCirculator_EnumerateTriangles_d_3* this_ptr)
} // namespace app::classes::TriangleNet::Meshing::Iterators::VertexCirculator__EnumerateTriangles_d__3
