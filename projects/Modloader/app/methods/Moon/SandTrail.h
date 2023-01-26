#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SandTrail.h>

namespace app::classes::Moon::SandTrail {
    IL2CPP_REGISTER_METHOD(0x00EC1160, bool, get_UseMainTrail, (app::SandTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SandTrail * this_ptr))
} // namespace app::classes::Moon::SandTrail
