#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TurtleGroundPatrolBehaviour.h>

namespace app::classes::TurtleGroundPatrolBehaviour {
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::TurtleGroundPatrolBehaviour * this_ptr))
}
