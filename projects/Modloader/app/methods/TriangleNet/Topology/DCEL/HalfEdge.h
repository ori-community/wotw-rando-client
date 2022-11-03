#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::Topology::DCEL::HalfEdge {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_ID, (app::HalfEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_ID, (app::HalfEdge * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Boundary, (app::HalfEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_Boundary, (app::HalfEdge * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Vertex_1*, get_Origin, (app::HalfEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Origin, (app::HalfEdge * this_ptr, app::Vertex_1* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Face*, get_Face, (app::HalfEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Face, (app::HalfEdge * this_ptr, app::Face* value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::HalfEdge*, get_Twin, (app::HalfEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Twin, (app::HalfEdge * this_ptr, app::HalfEdge* value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::HalfEdge*, get_Next, (app::HalfEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Next, (app::HalfEdge * this_ptr, app::HalfEdge* value))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor_1, (app::HalfEdge * this_ptr, app::Vertex_1* origin))
    IL2CPP_REGISTER_METHOD(0x02AA1D20, void, ctor_2, (app::HalfEdge * this_ptr, app::Vertex_1* origin, app::Face* face))
    IL2CPP_REGISTER_METHOD(0x02AA1D40, app::String*, ToString, (app::HalfEdge * this_ptr))
} // namespace app::classes::TriangleNet::Topology::DCEL::HalfEdge
