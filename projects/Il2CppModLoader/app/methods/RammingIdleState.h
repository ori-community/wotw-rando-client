#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RammingIdleState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RammingIdleState * this_ptr, app::RammingEnemy* ground_enemy))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::RammingIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072DE70, void, OnEnter, (app::RammingIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072DF60, void, OnExit, (app::RammingIdleState * this_ptr))
} // namespace app::classes::RammingIdleState
