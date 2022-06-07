#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FishFlopState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FishFlopState * this_ptr, app::FishEnemy * fish))
    IL2CPP_REGISTER_METHOD(0x0126BD70, void, UpdateState, (app::FishFlopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126BE00, void, OnEnter, (app::FishFlopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126BEA0, void, OnExit, (app::FishFlopState * this_ptr))
}
