#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TentacleEnemy_MeleeAttackState {
    IL2CPP_REGISTER_METHOD(0x00CF8280, bool, get_CanInitiateAttack, (app::TentacleEnemy_MeleeAttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF88D0, app::String*, get_Name, (app::TentacleEnemy_MeleeAttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF8950, void, OnBegin, (app::TentacleEnemy_MeleeAttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF8960, void, OnInterrupt, (app::TentacleEnemy_MeleeAttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF8980, app::BehaviourTreeStatus__Enum, OnTentacleStateUpdate, (app::TentacleEnemy_MeleeAttackState * this_ptr, app::TickData tick))
    IL2CPP_REGISTER_METHOD(0x00CF9AE0, void, OnCollision, (app::TentacleEnemy_MeleeAttackState * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanEvadeSlash, (app::TentacleEnemy_MeleeAttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CFA460, void, ctor, (app::TentacleEnemy_MeleeAttackState * this_ptr))
} // namespace app::classes::TentacleEnemy_MeleeAttackState
