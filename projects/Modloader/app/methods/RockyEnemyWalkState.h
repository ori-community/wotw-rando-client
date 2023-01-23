#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RockyEnemyWalkState.h>
#include <Modloader/app/structs/RockyEnemy.h>

namespace app::classes::RockyEnemyWalkState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RockyEnemyWalkState * this_ptr, app::RockyEnemy* enemy))
    IL2CPP_REGISTER_METHOD(0x01364E60, void, UpdateState, (app::RockyEnemyWalkState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01364F50, void, OnEnter, (app::RockyEnemyWalkState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099F810, void, OnExit, (app::RockyEnemyWalkState * this_ptr))
} // namespace app::classes::RockyEnemyWalkState
