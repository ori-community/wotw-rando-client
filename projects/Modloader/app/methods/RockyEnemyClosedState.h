#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RockyEnemyClosedState.h>
#include <Modloader/app/structs/RockyEnemy.h>

namespace app::classes::RockyEnemyClosedState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RockyEnemyClosedState * this_ptr, app::RockyEnemy* enemy))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::RockyEnemyClosedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01360C20, void, FixedUpdate, (app::RockyEnemyClosedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01360CD0, void, OnEnter, (app::RockyEnemyClosedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01360A50, void, OnExit, (app::RockyEnemyClosedState * this_ptr))
} // namespace app::classes::RockyEnemyClosedState
