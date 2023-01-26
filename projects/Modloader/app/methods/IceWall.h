#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IceWall.h>

namespace app::classes::IceWall {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IceWall * this_ptr))
}
