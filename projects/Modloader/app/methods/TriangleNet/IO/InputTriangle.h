#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::IO::InputTriangle {
    IL2CPP_REGISTER_METHOD(0x026213E0, void, ctor, (app::InputTriangle * this_ptr, int32_t p0, int32_t p1, int32_t p2))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ID, (app::InputTriangle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_ID, (app::InputTriangle * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Label, (app::InputTriangle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_Label, (app::InputTriangle * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0261CB50, double, get_Area, (app::InputTriangle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0261CB60, void, set_Area, (app::InputTriangle * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Vertex*, GetVertex, (app::InputTriangle * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x026214E0, int32_t, GetVertexID, (app::InputTriangle * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ITriangle*, GetNeighbor, (app::InputTriangle * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, GetNeighborID, (app::InputTriangle * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ISegment*, GetSegment, (app::InputTriangle * this_ptr, int32_t index))
} // namespace app::classes::TriangleNet::IO::InputTriangle
