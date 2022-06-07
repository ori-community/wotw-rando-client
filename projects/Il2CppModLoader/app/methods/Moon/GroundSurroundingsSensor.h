#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::GroundSurroundingsSensor {
    IL2CPP_REGISTER_METHOD(0x0012B830, bool, get_MoreSpaceInTheFront, (app::GroundSurroundingsSensor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012B840, void, UpdateWallData, (app::GroundSurroundingsSensor__Boxed * this_ptr, app::GroundEntityLocomotion * locomotion, app::Vector3 center))
    IL2CPP_REGISTER_METHOD(0x0012B870, bool, EnoughDistanceFromWallsAndLedgeFront, (app::GroundSurroundingsSensor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012B890, bool, EnoughDistanceFromWallsAndLedgeBack, (app::GroundSurroundingsSensor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012B8B0, bool, EnoughDistanceFromWallsAndLedge, (app::GroundSurroundingsSensor__Boxed * this_ptr))
}
