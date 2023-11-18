#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiritFlame.h>

namespace app::classes::SpiritFlame {
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::SpiritFlame * this_ptr))
}
