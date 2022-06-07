#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LaserShooterMinibossWaypoint {
    IL2CPP_REGISTER_METHOD(0x005B96A0, app::LaserShooterMinibossWaypoint_Connection *, get_FromPreviousToThis, (app::LaserShooterMinibossWaypoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1E370, void, OnDrawGizmos, (app::LaserShooterMinibossWaypoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LaserShooterMinibossWaypoint * this_ptr))
}
