#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JumperEnemyIdleState.h>
#include <Modloader/app/structs/JumperEnemy.h>

namespace app::classes::JumperEnemyIdleState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::JumperEnemyIdleState * this_ptr, app::JumperEnemy* enemy))
    IL2CPP_REGISTER_METHOD(0x00E58EB0, void, UpdateState, (app::JumperEnemyIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E58F20, void, OnEnter, (app::JumperEnemyIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E58FC0, void, OnExit, (app::JumperEnemyIdleState * this_ptr))
} // namespace app::classes::JumperEnemyIdleState
