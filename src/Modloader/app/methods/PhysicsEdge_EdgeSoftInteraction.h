#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PhysicsEdge_EdgeSoftInteraction.h>

namespace app::classes::PhysicsEdge_EdgeSoftInteraction {
    IL2CPP_REGISTER_METHOD(0x014FED70, void, Set, app::PhysicsEdge_EdgeSoftInteraction* this_ptr, app::PhysicsEdge_EdgeSoftInteraction* inter)
    IL2CPP_REGISTER_METHOD(0x014FEDA0, void, ctor, app::PhysicsEdge_EdgeSoftInteraction* this_ptr)
} // namespace app::classes::PhysicsEdge_EdgeSoftInteraction
