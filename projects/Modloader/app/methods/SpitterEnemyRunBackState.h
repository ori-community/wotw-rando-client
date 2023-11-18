#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpitterEnemyRunBackState.h>
#include <Modloader/app/structs/SpitterEnemy.h>

namespace app::classes::SpitterEnemyRunBackState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::SpitterEnemyRunBackState * this_ptr, app::SpitterEnemy* enemy))
    IL2CPP_REGISTER_METHOD(0x009A0130, void, UpdateState, (app::SpitterEnemyRunBackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A0260, void, OnEnter, (app::SpitterEnemyRunBackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A0320, void, OnExit, (app::SpitterEnemyRunBackState * this_ptr))
} // namespace app::classes::SpitterEnemyRunBackState
