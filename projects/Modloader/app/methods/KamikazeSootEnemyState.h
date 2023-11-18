#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KamikazeSootEnemyState.h>
#include <Modloader/app/structs/KamikazeSootEnemy.h>

namespace app::classes::KamikazeSootEnemyState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::KamikazeSootEnemyState * this_ptr, app::KamikazeSootEnemy* enemy))
}
