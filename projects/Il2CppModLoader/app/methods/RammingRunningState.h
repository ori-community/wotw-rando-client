#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RammingRunningState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RammingRunningState * this_ptr, app::RammingEnemy* ramming_enemy))
    IL2CPP_REGISTER_METHOD(0x0072E490, void, OnEnter, (app::RammingRunningState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072E620, void, OnExit, (app::RammingRunningState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072E670, void, UpdateState, (app::RammingRunningState * this_ptr))
} // namespace app::classes::RammingRunningState
