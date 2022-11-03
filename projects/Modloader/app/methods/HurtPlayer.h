#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::HurtPlayer {
    IL2CPP_REGISTER_METHOD(0x00B6FEA0, void, Start, (app::HurtPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HurtPlayer * this_ptr))
} // namespace app::classes::HurtPlayer
