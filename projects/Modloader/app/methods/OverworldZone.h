#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OverworldZone.h>

namespace app::classes::OverworldZone {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::OverworldZone * this_ptr))
}
