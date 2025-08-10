#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RockyEnemy.h>
#include <Modloader/app/structs/RockyEnemyIdleState.h>

namespace app::classes::RockyEnemyIdleState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, app::RockyEnemyIdleState* this_ptr, app::RockyEnemy* enemy)
    IL2CPP_REGISTER_METHOD(0x01360950, void, UpdateState, app::RockyEnemyIdleState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01361190, void, OnEnter, app::RockyEnemyIdleState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01360A50, void, OnExit, app::RockyEnemyIdleState* this_ptr)
} // namespace app::classes::RockyEnemyIdleState
