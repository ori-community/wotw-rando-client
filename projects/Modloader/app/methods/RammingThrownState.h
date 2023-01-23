#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RammingThrownState.h>
#include <Modloader/app/structs/RammingEnemy.h>

namespace app::classes::RammingThrownState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RammingThrownState * this_ptr, app::RammingEnemy* ramming_enemy))
    IL2CPP_REGISTER_METHOD(0x0072E8D0, void, OnEnter, (app::RammingThrownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::RammingThrownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072E920, void, UpdateState, (app::RammingThrownState * this_ptr))
} // namespace app::classes::RammingThrownState
