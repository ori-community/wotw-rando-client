#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FoxBehaviour.h>

namespace app::classes::FoxBehaviour {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::FoxBehaviour* this_ptr)
}
