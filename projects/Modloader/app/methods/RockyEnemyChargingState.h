#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RockyEnemyChargingState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RockyEnemyChargingState * this_ptr, app::RockyEnemy* enemy))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::RockyEnemyChargingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01360A90, void, OnEnter, (app::RockyEnemyChargingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::RockyEnemyChargingState * this_ptr))
} // namespace app::classes::RockyEnemyChargingState
