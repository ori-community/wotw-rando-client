#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ITriangle.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SubSegment.h>
#include <Modloader/app/structs/Vertex.h>

namespace app::classes::TriangleNet::Topology::SubSegment {
    IL2CPP_REGISTER_METHOD(0x02AA4B40, void, ctor, app::SubSegment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AA4C00, int32_t, get_P0, app::SubSegment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AA4C50, int32_t, get_P1, app::SubSegment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_Label, app::SubSegment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AA4CA0, app::Vertex*, GetVertex, app::SubSegment* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02AA4CE0, app::ITriangle*, GetTriangle, app::SubSegment* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetHashCode, app::SubSegment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AA4D40, app::String*, ToString, app::SubSegment* this_ptr)
} // namespace app::classes::TriangleNet::Topology::SubSegment
