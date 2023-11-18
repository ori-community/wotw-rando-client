#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BombableWallVisuals.h>

namespace app::classes::BombableWallVisuals {
    IL2CPP_REGISTER_METHOD(0x00D39CE0, void, DestroyWallEvent, (app::BombableWallVisuals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D39CF0, void, DestroyWall, (app::BombableWallVisuals * this_ptr, bool destroy))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BombableWallVisuals * this_ptr))
} // namespace app::classes::BombableWallVisuals
