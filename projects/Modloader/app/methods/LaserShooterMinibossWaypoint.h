#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LaserShooterMinibossWaypoint_Connection.h>
#include <Modloader/app/structs/LaserShooterMinibossWaypoint.h>

namespace app::classes::LaserShooterMinibossWaypoint {
    IL2CPP_REGISTER_METHOD(0x005B96A0, app::LaserShooterMinibossWaypoint_Connection*, get_FromPreviousToThis, (app::LaserShooterMinibossWaypoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1E370, void, OnDrawGizmos, (app::LaserShooterMinibossWaypoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LaserShooterMinibossWaypoint * this_ptr))
} // namespace app::classes::LaserShooterMinibossWaypoint
