#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpitterEnemyChargingState.h>
#include <Modloader/app/structs/SpitterEnemy.h>

namespace app::classes::SpitterEnemyChargingState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::SpitterEnemyChargingState * this_ptr, app::SpitterEnemy* enemy))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::SpitterEnemyChargingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099F5B0, void, OnEnter, (app::SpitterEnemyChargingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::SpitterEnemyChargingState * this_ptr))
} // namespace app::classes::SpitterEnemyChargingState
