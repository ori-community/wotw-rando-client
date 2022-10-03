#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::SimpleGroundNavigation {
    IL2CPP_REGISTER_METHOD(0x00E27620, void, Awake, (app::SimpleGroundNavigation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E27820, void, FixedUpdate, (app::SimpleGroundNavigation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E278A0, app::Vector3, Navigate, (app::SimpleGroundNavigation * this_ptr, app::Vector3 target, app::Vector3* next_move_point))
    IL2CPP_REGISTER_METHOD(0x00E29C40, bool, CanJumpTo, (app::SimpleGroundNavigation * this_ptr, app::Vector3 jump_position))
    IL2CPP_REGISTER_METHOD(0x00E2A5C0, void, ctor, (app::SimpleGroundNavigation * this_ptr))
} // namespace app::classes::Moon::SimpleGroundNavigation
