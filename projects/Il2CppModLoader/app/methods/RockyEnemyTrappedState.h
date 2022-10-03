#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RockyEnemyTrappedState {
    IL2CPP_REGISTER_METHOD(0x009A1A40, void, ctor, (app::RockyEnemyTrappedState * this_ptr, app::RockyEnemy* enemy))
    IL2CPP_REGISTER_METHOD(0x01364930, void, UpdateState, (app::RockyEnemyTrappedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01364A40, void, OnEnter, (app::RockyEnemyTrappedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::RockyEnemyTrappedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01364BA0, void, DealDamage, (app::RockyEnemyTrappedState * this_ptr))
} // namespace app::classes::RockyEnemyTrappedState
