#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::JumperEnemyChargingState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::JumperEnemyChargingState * this_ptr, app::JumperEnemy* jumper_enemy))
    IL2CPP_REGISTER_METHOD(0x00E58D70, void, OnEnter, (app::JumperEnemyChargingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::JumperEnemyChargingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::JumperEnemyChargingState * this_ptr))
} // namespace app::classes::JumperEnemyChargingState
