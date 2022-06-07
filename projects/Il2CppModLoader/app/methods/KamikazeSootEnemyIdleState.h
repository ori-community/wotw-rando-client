#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::KamikazeSootEnemyIdleState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::KamikazeSootEnemyIdleState * this_ptr, app::KamikazeSootEnemy * enemy))
    IL2CPP_REGISTER_METHOD(0x00E63CE0, void, UpdateState, (app::KamikazeSootEnemyIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E63E00, void, OnEnter, (app::KamikazeSootEnemyIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E63F30, void, OnExit, (app::KamikazeSootEnemyIdleState * this_ptr))
}
