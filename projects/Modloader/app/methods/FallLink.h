#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FallLink.h>

namespace app::classes::FallLink {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FallLink * this_ptr))
}
