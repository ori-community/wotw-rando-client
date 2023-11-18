#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RammingBrakingState.h>
#include <Modloader/app/structs/RammingEnemy.h>

namespace app::classes::RammingBrakingState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RammingBrakingState * this_ptr, app::RammingEnemy* ramming_enemy))
    IL2CPP_REGISTER_METHOD(0x00728830, void, OnEnter, (app::RammingBrakingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::RammingBrakingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00728A40, void, UpdateState, (app::RammingBrakingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00728BF0, bool, HitWallIsAppropriate, (app::RammingBrakingState * this_ptr))
} // namespace app::classes::RammingBrakingState
