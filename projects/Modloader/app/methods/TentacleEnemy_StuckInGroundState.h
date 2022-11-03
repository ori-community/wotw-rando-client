#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TentacleEnemy_StuckInGroundState {
    IL2CPP_REGISTER_METHOD(0x00CFBCF0, bool, get_IsStuck, (app::TentacleEnemy_StuckInGroundState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CFBD00, app::String*, get_Name, (app::TentacleEnemy_StuckInGroundState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CFBD80, void, OnBegin, (app::TentacleEnemy_StuckInGroundState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CFBEF0, void, OnInterrupt, (app::TentacleEnemy_StuckInGroundState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CFBEF0, void, OnExit, (app::TentacleEnemy_StuckInGroundState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CFBF50, app::BehaviourTreeStatus__Enum, OnTentacleStateUpdate, (app::TentacleEnemy_StuckInGroundState * this_ptr, app::TickData tick))
    IL2CPP_REGISTER_METHOD(0x00CFC560, float, ModifyDamage, (app::TentacleEnemy_StuckInGroundState * this_ptr, float damage, int32_t joint_index))
    IL2CPP_REGISTER_METHOD(0x00CFC570, void, ctor, (app::TentacleEnemy_StuckInGroundState * this_ptr))
} // namespace app::classes::TentacleEnemy_StuckInGroundState
