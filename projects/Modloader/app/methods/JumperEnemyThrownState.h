#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JumperEnemyThrownState.h>
#include <Modloader/app/structs/JumperEnemy.h>

namespace app::classes::JumperEnemyThrownState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::JumperEnemyThrownState * this_ptr, app::JumperEnemy* jumper_enemy))
    IL2CPP_REGISTER_METHOD(0x00E59870, void, UpdateState, (app::JumperEnemyThrownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E599B0, void, OnEnter, (app::JumperEnemyThrownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E59A00, void, OnExit, (app::JumperEnemyThrownState * this_ptr))
} // namespace app::classes::JumperEnemyThrownState
