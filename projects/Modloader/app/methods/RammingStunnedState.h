#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RammingStunnedState.h>
#include <Modloader/app/structs/RammingEnemy.h>

namespace app::classes::RammingStunnedState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RammingStunnedState * this_ptr, app::RammingEnemy* ramming_enemy))
    IL2CPP_REGISTER_METHOD(0x0072E820, void, OnEnter, (app::RammingStunnedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::RammingStunnedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072E870, void, UpdateState, (app::RammingStunnedState * this_ptr))
} // namespace app::classes::RammingStunnedState
