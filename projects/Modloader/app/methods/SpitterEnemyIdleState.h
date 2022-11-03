#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpitterEnemyIdleState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::SpitterEnemyIdleState * this_ptr, app::SpitterEnemy* enemy))
    IL2CPP_REGISTER_METHOD(0x0099F6B0, void, UpdateState, (app::SpitterEnemyIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099F770, void, OnEnter, (app::SpitterEnemyIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099F810, void, OnExit, (app::SpitterEnemyIdleState * this_ptr))
} // namespace app::classes::SpitterEnemyIdleState
