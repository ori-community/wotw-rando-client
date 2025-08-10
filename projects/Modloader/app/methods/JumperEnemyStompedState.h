#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JumperEnemy.h>
#include <Modloader/app/structs/JumperEnemyStompedState.h>

namespace app::classes::JumperEnemyStompedState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, app::JumperEnemyStompedState* this_ptr, app::JumperEnemy* jumper_enemy)
    IL2CPP_REGISTER_METHOD(0x00E59870, void, UpdateState, app::JumperEnemyStompedState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E59910, void, OnEnter, app::JumperEnemyStompedState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, app::JumperEnemyStompedState* this_ptr)
} // namespace app::classes::JumperEnemyStompedState
