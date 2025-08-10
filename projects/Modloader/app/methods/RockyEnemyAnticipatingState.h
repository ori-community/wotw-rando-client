#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RockyEnemy.h>
#include <Modloader/app/structs/RockyEnemyAnticipatingState.h>

namespace app::classes::RockyEnemyAnticipatingState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, app::RockyEnemyAnticipatingState* this_ptr, app::RockyEnemy* enemy)
    IL2CPP_REGISTER_METHOD(0x01360950, void, UpdateState, app::RockyEnemyAnticipatingState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01360A10, void, OnEnter, app::RockyEnemyAnticipatingState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01360A50, void, OnExit, app::RockyEnemyAnticipatingState* this_ptr)
} // namespace app::classes::RockyEnemyAnticipatingState
