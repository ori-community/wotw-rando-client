#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrushPlayer.h>

namespace app::classes::CrushPlayer {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::CrushPlayer* this_ptr)
}
