#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DontCrushPlayer.h>

namespace app::classes::DontCrushPlayer {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DontCrushPlayer * this_ptr))
}
