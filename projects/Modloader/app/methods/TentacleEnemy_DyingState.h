#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BehaviourTreeStatus__Enum.h>
#include <Modloader/app/structs/TentacleEnemy_DyingState.h>
#include <Modloader/app/structs/TickData.h>

namespace app::classes::TentacleEnemy_DyingState {
    IL2CPP_REGISTER_METHOD(0x00CF6C40, app::String*, get_Name, (app::TentacleEnemy_DyingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF6CC0, void, OnBegin, (app::TentacleEnemy_DyingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInterrupt, (app::TentacleEnemy_DyingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF6CD0, app::BehaviourTreeStatus__Enum, OnTentacleStateUpdate, (app::TentacleEnemy_DyingState * this_ptr, app::TickData tick))
    IL2CPP_REGISTER_METHOD(0x00CF6DF0, void, ctor, (app::TentacleEnemy_DyingState * this_ptr))
} // namespace app::classes::TentacleEnemy_DyingState
