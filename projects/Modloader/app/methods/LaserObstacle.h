#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LaserObstacle.h>

namespace app::classes::LaserObstacle {
    IL2CPP_REGISTER_METHOD(0x00F06D80, void, Start, (app::LaserObstacle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F077E0, void, FixedUpdate, (app::LaserObstacle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LaserObstacle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D01540, void, _FixedUpdate_b__22_0, (app::LaserObstacle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DF410, void, _FixedUpdate_b__22_1, (app::LaserObstacle * this_ptr))
} // namespace app::classes::LaserObstacle
