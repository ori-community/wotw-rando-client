#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LaserShooterMinibossPathMover {
    IL2CPP_REGISTER_METHOD(0x00F1B330, app::LaserShooterMinibossPath*, get_Paths, (app::LaserShooterMinibossPathMover * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::LaserShooterMinibossEntity*, get_Entity, (app::LaserShooterMinibossPathMover * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_Entity, (app::LaserShooterMinibossPathMover * this_ptr, app::LaserShooterMinibossEntity* value))
    IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_IsAtCenter, (app::LaserShooterMinibossPathMover * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_IsAtCenter, (app::LaserShooterMinibossPathMover * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F1B350, bool, get_IsMoving, (app::LaserShooterMinibossPathMover * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1B360, bool, get_IsAtWaypoint, (app::LaserShooterMinibossPathMover * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1B400, void, Initialize, (app::LaserShooterMinibossPathMover * this_ptr, app::LaserShooterMinibossEntity* entity))
    IL2CPP_REGISTER_METHOD(0x00F1B410, void, OnUpdate, (app::LaserShooterMinibossPathMover * this_ptr, float d_time))
    IL2CPP_REGISTER_METHOD(0x00F1B5D0, void, MoveToCenter, (app::LaserShooterMinibossPathMover * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1B6C0, void, MoveFromCenterToWaypoint, (app::LaserShooterMinibossPathMover * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00F1BA00, void, MoveToNextWaypoint, (app::LaserShooterMinibossPathMover * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1BCD0, void, OnReturnToCenterUpdate, (app::LaserShooterMinibossPathMover * this_ptr, float d_time))
    IL2CPP_REGISTER_METHOD(0x00F1C000, void, OnMoveBetweenWaypointsUpdate, (app::LaserShooterMinibossPathMover * this_ptr, float d_time))
    IL2CPP_REGISTER_METHOD(0x00F1C170, void, OnMoveFromCenterToWaypointUpdate, (app::LaserShooterMinibossPathMover * this_ptr, float d_time))
    IL2CPP_REGISTER_METHOD(0x00F1C550, float, GetSpeed, (app::LaserShooterMinibossPathMover * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1C830, void, ctor, (app::LaserShooterMinibossPathMover * this_ptr))
} // namespace app::classes::LaserShooterMinibossPathMover
