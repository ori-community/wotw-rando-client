#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FishSwimState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FishSwimState * this_ptr, app::FishEnemy * fish))
    IL2CPP_REGISTER_METHOD(0x0126C9A0, void, UpdateState, (app::FishSwimState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126D110, void, OnEnter, (app::FishSwimState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::FishSwimState * this_ptr))
}
