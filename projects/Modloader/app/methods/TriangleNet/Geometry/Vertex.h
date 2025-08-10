#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vertex.h>
#include <Modloader/app/structs/VertexType__Enum.h>

namespace app::classes::TriangleNet::Geometry::Vertex {
    IL2CPP_REGISTER_METHOD(0x0261E6E0, void, ctor_1, app::Vertex* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0261E700, void, ctor_2, app::Vertex* this_ptr, double x, double y)
    IL2CPP_REGISTER_METHOD(0x0261E720, void, ctor_3, app::Vertex* this_ptr, double x, double y, int32_t mark)
    IL2CPP_REGISTER_METHOD(0x005C3FF0, app::VertexType__Enum, get_Type, app::Vertex* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0261E740, double, get_Item, app::Vertex* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, GetHashCode, app::Vertex* this_ptr)
} // namespace app::classes::TriangleNet::Geometry::Vertex
