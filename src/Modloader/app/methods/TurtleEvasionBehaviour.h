#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TurtleEvasionBehaviour.h>

namespace app::classes::TurtleEvasionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, app::TurtleEvasionBehaviour* this_ptr)
}
