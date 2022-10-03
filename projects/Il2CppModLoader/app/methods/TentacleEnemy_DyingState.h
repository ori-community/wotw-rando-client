#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TentacleEnemy_DyingState {
    IL2CPP_REGISTER_METHOD(0x00CF6C40, app::String*, get_Name, (app::TentacleEnemy_DyingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF6CC0, void, OnBegin, (app::TentacleEnemy_DyingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInterrupt, (app::TentacleEnemy_DyingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF6CD0, app::BehaviourTreeStatus__Enum, OnTentacleStateUpdate, (app::TentacleEnemy_DyingState * this_ptr, app::TickData tick))
    IL2CPP_REGISTER_METHOD(0x00CF6DF0, void, ctor, (app::TentacleEnemy_DyingState * this_ptr))
} // namespace app::classes::TentacleEnemy_DyingState
