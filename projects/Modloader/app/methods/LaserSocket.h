#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LaserSocket.h>

namespace app::classes::LaserSocket {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LaserSocket * this_ptr))
}
