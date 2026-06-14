#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TurtleMovementBehaviour.h>

namespace app::classes::TurtleMovementBehaviour {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::TurtleMovementBehaviour* this_ptr)
}
