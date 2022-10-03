#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TentacleHitReaction {
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::EntityDamageEvent*, get_DamageEvent, (app::TentacleHitReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_DamageEvent, (app::TentacleHitReaction * this_ptr, app::EntityDamageEvent* value))
    IL2CPP_REGISTER_METHOD(0x00D008A0, void, OnEnterTask, (app::TentacleHitReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D009C0, void, OnHit, (app::TentacleHitReaction * this_ptr, app::EntityDamageEvent* damage_event))
    IL2CPP_REGISTER_METHOD(0x00D014B0, app::BehaviourStatus__Enum, OnExecuteTask, (app::TentacleHitReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D01540, void, OnExitTask, (app::TentacleHitReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D01550, app::Vector3, ProcessKickback, (app::TentacleHitReaction * this_ptr, app::Damage* damage, float multiplier, float knockup_multiplier))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_RunInParallel, (app::TentacleHitReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::TentacleHitReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D01AF0, void, ctor, (app::TentacleHitReaction * this_ptr))
} // namespace app::classes::TentacleHitReaction
