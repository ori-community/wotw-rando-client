#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TriangleNet::IO::TriangleWriter {
    IL2CPP_REGISTER_METHOD(0x02625800, void, Write, (app::TriangleWriter * this_ptr, app::Mesh_1 * mesh, app::String * filename))
    IL2CPP_REGISTER_METHOD(0x02625900, void, WriteNodes_1, (app::TriangleWriter * this_ptr, app::Mesh_1 * mesh, app::String * filename))
    IL2CPP_REGISTER_METHOD(0x02625AF0, void, WriteNodes_2, (app::TriangleWriter * this_ptr, app::StreamWriter * writer, app::Mesh_1 * mesh))
    IL2CPP_REGISTER_METHOD(0x02626010, void, WriteNodes_3, (app::TriangleWriter * this_ptr, app::StreamWriter * writer, app::IEnumerable_1_TriangleNet_Geometry_Vertex_ * nodes, bool markers, int32_t attribs, bool jettison))
    IL2CPP_REGISTER_METHOD(0x026262E0, void, WriteElements, (app::TriangleWriter * this_ptr, app::Mesh_1 * mesh, app::String * filename))
    IL2CPP_REGISTER_METHOD(0x02626990, void, WritePoly_1, (app::TriangleWriter * this_ptr, app::IPolygon * polygon, app::String * filename))
    IL2CPP_REGISTER_METHOD(0x026276F0, void, WritePoly_2, (app::TriangleWriter * this_ptr, app::Mesh_1 * mesh, app::String * filename))
    IL2CPP_REGISTER_METHOD(0x02627710, void, WritePoly_3, (app::TriangleWriter * this_ptr, app::Mesh_1 * mesh, app::String * filename, bool write_nodes))
    IL2CPP_REGISTER_METHOD(0x026283E0, void, WriteEdges, (app::TriangleWriter * this_ptr, app::Mesh_1 * mesh, app::String * filename))
    IL2CPP_REGISTER_METHOD(0x02628DD0, void, WriteNeighbors, (app::TriangleWriter * this_ptr, app::Mesh_1 * mesh, app::String * filename))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TriangleWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02629420, void, cctor, ())
}
