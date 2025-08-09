#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_TriangleNet_Geometry_ITriangle_.h>
#include <Modloader/app/structs/IEnumerable_1_TriangleNet_Geometry_Vertex_.h>
#include <Modloader/app/structs/Mesh_1.h>
#include <Modloader/app/structs/Vertex.h>
#include <Modloader/app/structs/VertexCirculator.h>

namespace app::classes::TriangleNet::Meshing::Iterators::VertexCirculator {
    IL2CPP_REGISTER_METHOD(0x02B11EF0, void, ctor, app::VertexCirculator* this_ptr, app::Mesh_1* mesh)
    IL2CPP_REGISTER_METHOD(
        0x02B12110,
        app::IEnumerable_1_TriangleNet_Geometry_Vertex_*,
        EnumerateVertices,
        app::VertexCirculator* this_ptr,
        app::Vertex* vertex
    )
    IL2CPP_REGISTER_METHOD(
        0x02B122B0,
        app::IEnumerable_1_TriangleNet_Geometry_ITriangle_*,
        EnumerateTriangles,
        app::VertexCirculator* this_ptr,
        app::Vertex* vertex
    )
    IL2CPP_REGISTER_METHOD(0x02B12450, void, BuildCache, app::VertexCirculator* this_ptr, app::Vertex* vertex, bool vertices)
} // namespace app::classes::TriangleNet::Meshing::Iterators::VertexCirculator
