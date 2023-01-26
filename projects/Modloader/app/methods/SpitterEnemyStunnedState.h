#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpitterEnemyStunnedState.h>
#include <Modloader/app/structs/SpitterEnemy.h>

namespace app::classes::SpitterEnemyStunnedState {
    IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_StunnedTimeLeft, (app::SpitterEnemyStunnedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::SpitterEnemyStunnedState * this_ptr, app::SpitterEnemy* enemy2_d))
    IL2CPP_REGISTER_METHOD(0x009A1400, void, UpdateState, (app::SpitterEnemyStunnedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A1500, void, OnEnter, (app::SpitterEnemyStunnedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::SpitterEnemyStunnedState * this_ptr))
} // namespace app::classes::SpitterEnemyStunnedState
