#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CrabHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00A64230, app::EntityDamageEvent *, get_DamageEvent, (app::CrabHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB4A50, void, set_DamageEvent, (app::CrabHitReactionBehaviour * this_ptr, app::EntityDamageEvent * value))
    IL2CPP_REGISTER_METHOD(0x00DB4A60, void, OnInitializeTask, (app::CrabHitReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00DB4DA0, void, OnEnterTask, (app::CrabHitReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00DB4EC0, void, OnHit, (app::CrabHitReactionBehaviour * this_ptr, app::EntityDamageEvent * damage_event, bool can_interrupt))
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, (app::CrabHitReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00DB5480, void, OnExitTask, (app::CrabHitReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00DB5490, void, StartTimeline, (app::CrabHitReactionBehaviour * this_ptr, app::MoonTimeline * timeline))
    IL2CPP_REGISTER_METHOD(0x00DB5620, void, ResetTimeline, (app::CrabHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB5880, void, HandleReasonToNotInterrupt, (app::CrabHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, app::EntityEvent * reaction_event))
    IL2CPP_REGISTER_METHOD(0x00DB5980, void, ProcessKickback, (app::CrabHitReactionBehaviour * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::CrabHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB59E0, bool, PlayedAdditiveAnim, (app::CrabHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB59F0, void, TimelineFinished, (app::CrabHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04750BB8, CrabHitReactionBehaviour_TimelineFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DB5A10, bool, CanInterrupt, (app::CrabHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason))
    IL2CPP_REGISTER_METHOD(0x00DB5BB0, void, FlipEventStart, (app::CrabHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04768A98, CrabHitReactionBehaviour_FlipEventStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DB5C00, void, PlayShake, (app::CrabHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB5CF0, void, ctor, (app::CrabHitReactionBehaviour * this_ptr))
}
