#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpitterEnemyTrappedState {
    IL2CPP_REGISTER_METHOD(0x009A1A40, void, ctor, (app::SpitterEnemyTrappedState * this_ptr, app::SpitterEnemy * enemy))
    IL2CPP_REGISTER_METHOD(0x009A1A50, void, UpdateState, (app::SpitterEnemyTrappedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A1B60, void, OnEnter, (app::SpitterEnemyTrappedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::SpitterEnemyTrappedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A1D10, void, DealDamage, (app::SpitterEnemyTrappedState * this_ptr))
}
