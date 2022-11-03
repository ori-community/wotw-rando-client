#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::VerletEdge {
    IL2CPP_REGISTER_METHOD(0x013C3E30, void, Set, (app::VerletEdge * this_ptr, app::VerletEdge* verlet_edge, bool set_skinning))
    IL2CPP_REGISTER_METHOD(0x013C40D0, void, LerpTo, (app::VerletEdge * this_ptr, app::VerletEdge* verlet_edge, float k))
    IL2CPP_REGISTER_METHOD(0x013C43E0, void, ctor, (app::VerletEdge * this_ptr))
} // namespace app::classes::VerletEdge
