#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RockyEnemyOpeningState.h>
#include <Modloader/app/structs/RockyEnemy.h>

namespace app::classes::RockyEnemyOpeningState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RockyEnemyOpeningState * this_ptr, app::RockyEnemy* enemy2_d))
    IL2CPP_REGISTER_METHOD(0x01361320, void, UpdateState, (app::RockyEnemyOpeningState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013614C0, void, OnEnter, (app::RockyEnemyOpeningState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01360A50, void, OnExit, (app::RockyEnemyOpeningState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01361620, void, TurnToEnemy, (app::RockyEnemyOpeningState * this_ptr))
} // namespace app::classes::RockyEnemyOpeningState
