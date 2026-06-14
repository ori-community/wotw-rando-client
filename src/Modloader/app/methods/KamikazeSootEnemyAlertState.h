#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KamikazeSootEnemy.h>
#include <Modloader/app/structs/KamikazeSootEnemyAlertState.h>

namespace app::classes::KamikazeSootEnemyAlertState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, app::KamikazeSootEnemyAlertState* this_ptr, app::KamikazeSootEnemy* enemy)
    IL2CPP_REGISTER_METHOD(0x00E63930, void, UpdateState, app::KamikazeSootEnemyAlertState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E63A70, void, OnEnter, app::KamikazeSootEnemyAlertState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, app::KamikazeSootEnemyAlertState* this_ptr)
} // namespace app::classes::KamikazeSootEnemyAlertState
