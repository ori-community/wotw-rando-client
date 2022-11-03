#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::Geometry::Segment {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Label, (app::Segment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_Label, (app::Segment * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x020D03A0, int32_t, get_P0, (app::Segment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244B620, int32_t, get_P1, (app::Segment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017002B0, void, ctor_1, (app::Segment * this_ptr, app::Vertex* v0, app::Vertex* v1))
    IL2CPP_REGISTER_METHOD(0x00E332C0, void, ctor_2, (app::Segment * this_ptr, app::Vertex* v0, app::Vertex* v1, int32_t label))
    IL2CPP_REGISTER_METHOD(0x0261E5C0, app::Vertex*, GetVertex, (app::Segment * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04723B30, Segment_GetVertex__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0261E690, app::ITriangle*, GetTriangle, (app::Segment * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0472AC18, Segment_GetTriangle__MethodInfo)
} // namespace app::classes::TriangleNet::Geometry::Segment
