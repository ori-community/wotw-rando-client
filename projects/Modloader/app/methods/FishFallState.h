#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FishFallState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FishFallState * this_ptr, app::FishEnemy* fish))
    IL2CPP_REGISTER_METHOD(0x0126BC30, void, UpdateState, (app::FishFallState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126BD10, void, OnEnter, (app::FishFallState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::FishFallState * this_ptr))
} // namespace app::classes::FishFallState
