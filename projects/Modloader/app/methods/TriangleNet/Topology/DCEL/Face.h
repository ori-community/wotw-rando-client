#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::Topology::DCEL::Face {
    IL2CPP_REGISTER_METHOD(0x02AA1600, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_ID, (app::Face * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_ID, (app::Face * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::HalfEdge*, get_Edge, (app::Face * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Edge, (app::Face * this_ptr, app::HalfEdge* value))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_Bounded, (app::Face * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_Bounded, (app::Face * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02AA1780, void, ctor_1, (app::Face * this_ptr, app::Point* generator))
    IL2CPP_REGISTER_METHOD(0x02AA17A0, void, ctor_2, (app::Face * this_ptr, app::Point* generator, app::HalfEdge* edge))
    IL2CPP_REGISTER_METHOD(0x02AA17C0, app::IEnumerable_1_TriangleNet_Topology_DCEL_HalfEdge_*, EnumerateEdges, (app::Face * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA1950, app::String*, ToString, (app::Face * this_ptr))
} // namespace app::classes::TriangleNet::Topology::DCEL::Face
