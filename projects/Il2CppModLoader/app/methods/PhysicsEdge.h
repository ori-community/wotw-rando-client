#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PhysicsEdge {
    IL2CPP_REGISTER_METHOD(0x014FE040, void, Set, (app::PhysicsEdge * this_ptr, app::PhysicsEdge * physics_edge, bool set_skinning))
    IL2CPP_REGISTER_METHOD(0x014FE470, void, LerpTo, (app::PhysicsEdge * this_ptr, app::PhysicsEdge * physics_edge, float k))
    IL2CPP_REGISTER_METHOD(0x014FEAD0, void, ctor, (app::PhysicsEdge * this_ptr))
}
