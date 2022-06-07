#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpitterEnemyWalkState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::SpitterEnemyWalkState * this_ptr, app::SpitterEnemy * enemy))
    IL2CPP_REGISTER_METHOD(0x009A1FD0, void, UpdateState, (app::SpitterEnemyWalkState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A20F0, void, OnEnter, (app::SpitterEnemyWalkState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A2190, void, OnExit, (app::SpitterEnemyWalkState * this_ptr))
}
