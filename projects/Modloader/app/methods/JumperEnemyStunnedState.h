#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::JumperEnemyStunnedState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::JumperEnemyStunnedState * this_ptr, app::JumperEnemy* jumper_enemy))
    IL2CPP_REGISTER_METHOD(0x0072E870, void, UpdateState, (app::JumperEnemyStunnedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E59960, void, OnEnter, (app::JumperEnemyStunnedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::JumperEnemyStunnedState * this_ptr))
} // namespace app::classes::JumperEnemyStunnedState
