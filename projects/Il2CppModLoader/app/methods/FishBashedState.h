#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FishBashedState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FishBashedState * this_ptr, app::FishEnemy * fish))
    IL2CPP_REGISTER_METHOD(0x01267060, void, UpdateState, (app::FishBashedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01267270, void, OnEnter, (app::FishBashedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::FishBashedState * this_ptr))
}
