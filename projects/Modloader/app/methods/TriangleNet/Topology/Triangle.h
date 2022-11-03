#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::Topology::Triangle {
    IL2CPP_REGISTER_METHOD(0x02AA4E20, void, ctor, (app::Triangle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_ID, (app::Triangle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_ID, (app::Triangle * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_Label, (app::Triangle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654960, void, set_Label, (app::Triangle * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01BC1650, double, get_Area, (app::Triangle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BC1660, void, set_Area, (app::Triangle * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x02AA4CA0, app::Vertex*, GetVertex, (app::Triangle * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02AA4ED0, int32_t, GetVertexID, (app::Triangle * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02AA4F20, app::ITriangle*, GetNeighbor, (app::Triangle * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02AA4F80, int32_t, GetNeighborID, (app::Triangle * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02AA4CE0, app::ISegment*, GetSegment, (app::Triangle * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetHashCode, (app::Triangle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA5000, app::String*, ToString, (app::Triangle * this_ptr))
} // namespace app::classes::TriangleNet::Topology::Triangle
