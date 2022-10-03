#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RockyEnemyClosingState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RockyEnemyClosingState * this_ptr, app::RockyEnemy* enemy2_d))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::RockyEnemyClosingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01360D90, void, OnEnter, (app::RockyEnemyClosingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01360EF0, void, OnExit, (app::RockyEnemyClosingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01360F40, void, TurnToRock, (app::RockyEnemyClosingState * this_ptr))
} // namespace app::classes::RockyEnemyClosingState
