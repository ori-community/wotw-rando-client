#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PositionOnWorldMap.h>

namespace app::classes::PositionOnWorldMap {
    IL2CPP_REGISTER_METHOD(0x00C68B30, void, FixedUpdate, (app::PositionOnWorldMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PositionOnWorldMap * this_ptr))
} // namespace app::classes::PositionOnWorldMap
