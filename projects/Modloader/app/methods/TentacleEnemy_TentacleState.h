#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TentacleEnemy_TentacleState {
    IL2CPP_REGISTER_METHOD(0x00CFCB30, app::BehaviourTreeStatus__Enum, OnUpdate, (app::TentacleEnemy_TentacleState * this_ptr, app::TickData tick))
    IL2CPP_REGISTER_METHOD(0x00CFCC00, float, ModifyDamage, (app::TentacleEnemy_TentacleState * this_ptr, float damage, int32_t joint_index))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanEvadeSlash, (app::TentacleEnemy_TentacleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyWiggleSettings, (app::TentacleEnemy_TentacleState * this_ptr, app::TentacleEnemy_WiggleData* wiggle_settings))
    IL2CPP_REGISTER_METHOD(0x00CFCCD0, void, ctor, (app::TentacleEnemy_TentacleState * this_ptr))
} // namespace app::classes::TentacleEnemy_TentacleState
