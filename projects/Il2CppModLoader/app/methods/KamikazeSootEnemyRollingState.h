#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::KamikazeSootEnemyRollingState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::KamikazeSootEnemyRollingState * this_ptr, app::KamikazeSootEnemy * enemy))
    IL2CPP_REGISTER_METHOD(0x00E64690, void, UpdateState, (app::KamikazeSootEnemyRollingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E64DE0, void, OnEnter, (app::KamikazeSootEnemyRollingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E64EF0, void, OnExit, (app::KamikazeSootEnemyRollingState * this_ptr))
}
