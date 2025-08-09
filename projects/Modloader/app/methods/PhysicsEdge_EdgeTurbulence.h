#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PhysicsEdge_EdgeTurbulence.h>

namespace app::classes::PhysicsEdge_EdgeTurbulence {
    IL2CPP_REGISTER_METHOD(0x014FEDC0, void, Set, app::PhysicsEdge_EdgeTurbulence* this_ptr, app::PhysicsEdge_EdgeTurbulence* turbo)
    IL2CPP_REGISTER_METHOD(0x014FEE10, void, ctor, app::PhysicsEdge_EdgeTurbulence* this_ptr)
} // namespace app::classes::PhysicsEdge_EdgeTurbulence
