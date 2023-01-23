#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KamikazeSootEnemyRunState.h>
#include <Modloader/app/structs/KamikazeSootEnemy.h>

namespace app::classes::KamikazeSootEnemyRunState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::KamikazeSootEnemyRunState * this_ptr, app::KamikazeSootEnemy* kamikaze_soot_enemy2_d))
    IL2CPP_REGISTER_METHOD(0x00E65000, void, UpdateState, (app::KamikazeSootEnemyRunState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E65180, void, OnEnter, (app::KamikazeSootEnemyRunState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::KamikazeSootEnemyRunState * this_ptr))
} // namespace app::classes::KamikazeSootEnemyRunState
