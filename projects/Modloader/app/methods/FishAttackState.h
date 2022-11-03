#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FishAttackState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FishAttackState * this_ptr, app::FishEnemy* fish))
    IL2CPP_REGISTER_METHOD(0x01266950, void, UpdateState, (app::FishAttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01266D90, void, OnEnter, (app::FishAttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01266F50, void, OnExit, (app::FishAttackState * this_ptr))
} // namespace app::classes::FishAttackState
