#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RammingKnockBackState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RammingKnockBackState * this_ptr, app::RammingEnemy* ramming_enemy))
    IL2CPP_REGISTER_METHOD(0x0072DFB0, void, OnEnter, (app::RammingKnockBackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::RammingKnockBackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072E000, void, UpdateState, (app::RammingKnockBackState * this_ptr))
} // namespace app::classes::RammingKnockBackState
