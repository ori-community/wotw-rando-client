#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MovementBehaviour.h>

namespace app::classes::MovementBehaviour {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::MovementBehaviour* this_ptr)
}
