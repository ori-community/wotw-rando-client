#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RammingHitWallState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RammingHitWallState * this_ptr, app::RammingEnemy * ramming_enemy))
    IL2CPP_REGISTER_METHOD(0x0072D9C0, void, OnEnter, (app::RammingHitWallState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::RammingHitWallState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072DCE0, void, UpdateState, (app::RammingHitWallState * this_ptr))
}
