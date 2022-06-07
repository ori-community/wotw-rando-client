#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::BombableWallVisuals {
    IL2CPP_REGISTER_METHOD(0x00D39CE0, void, DestroyWallEvent, (app::BombableWallVisuals * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04736C40, BombableWallVisuals_DestroyWallEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00D39CF0, void, DestroyWall, (app::BombableWallVisuals * this_ptr, bool destroy))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BombableWallVisuals * this_ptr))
}
