#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GroundSurroundingsSensor__Boxed.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::GroundSurroundingsSensor {
    IL2CPP_REGISTER_METHOD(0x0012B830, bool, get_MoreSpaceInTheFront, (app::GroundSurroundingsSensor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012B840, void, UpdateWallData, (app::GroundSurroundingsSensor__Boxed * this_ptr, app::GroundEntityLocomotion* locomotion, app::Vector3 center))
    IL2CPP_REGISTER_METHOD(0x0012B870, bool, EnoughDistanceFromWallsAndLedgeFront, (app::GroundSurroundingsSensor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012B890, bool, EnoughDistanceFromWallsAndLedgeBack, (app::GroundSurroundingsSensor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012B8B0, bool, EnoughDistanceFromWallsAndLedge, (app::GroundSurroundingsSensor__Boxed * this_ptr))
} // namespace app::classes::Moon::GroundSurroundingsSensor
