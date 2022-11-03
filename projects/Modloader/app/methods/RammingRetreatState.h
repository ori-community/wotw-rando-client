#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RammingRetreatState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RammingRetreatState * this_ptr, app::RammingEnemy* ramming_enemy))
    IL2CPP_REGISTER_METHOD(0x0072E190, void, OnEnter, (app::RammingRetreatState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::RammingRetreatState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072E2F0, void, UpdateState, (app::RammingRetreatState * this_ptr))
} // namespace app::classes::RammingRetreatState
