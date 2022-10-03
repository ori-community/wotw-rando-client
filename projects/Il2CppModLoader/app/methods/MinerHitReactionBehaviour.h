#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MinerHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::EntityDamageEvent*, get_DamageEvent, (app::MinerHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A6390, void, set_DamageEvent, (app::MinerHitReactionBehaviour * this_ptr, app::EntityDamageEvent* value))
    IL2CPP_REGISTER_METHOD(0x01449F60, void, ResetTimeline, (app::MinerHitReactionBehaviour * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x0144A180, void, StartTimeline, (app::MinerHitReactionBehaviour * this_ptr, app::MoonTimeline* timeline, app::EventTriggerAnimator* stop_event_override))
    IL2CPP_REGISTER_METHOD(0x0144A440, void, StartSecondaryTimeline, (app::MinerHitReactionBehaviour * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x0144A490, void, PlayAdditiveHit, (app::MinerHitReactionBehaviour * this_ptr, bool hit_from_front, float damage_amount))
    IL2CPP_REGISTER_METHOD(0x00876500, void, TimelineFinished, (app::MinerHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473FF58, MinerHitReactionBehaviour_TimelineFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0144A610, bool, PlayedAdditiveAnim, (app::MinerHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144A720, void, Awake, (app::MinerHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144A900, void, OnDestroy, (app::MinerHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144AAE0, bool, CanInterrupt, (app::MinerHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHOD(0x0144AB90, void, OnHit, (app::MinerHitReactionBehaviour * this_ptr, app::EntityDamageEvent* damage_event))
    IL2CPP_REGISTER_METHOD(0x0144AFD0, void, ProcessKickback, (app::MinerHitReactionBehaviour * this_ptr, app::Damage* damage, float force_multiplier))
    IL2CPP_REGISTER_METHOD(0x0144B250, float, ApplyModifier, (app::MinerHitReactionBehaviour * this_ptr, float value, float multiplier, float min, float max))
    IL2CPP_REGISTER_METHOD(0x0144B440, void, HandleReasonToNotInterrupt, (app::MinerHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, app::EntityEvent* reaction_event))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::MinerHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144B520, void, OnInitializeTask, (app::MinerHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0144B660, void, OnEnterTask, (app::MinerHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, (app::MinerHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0144B770, void, OnExitTask, (app::MinerHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0144B7B0, void, OnShieldDestroyed, (app::MinerHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04725648, MinerHitReactionBehaviour_OnShieldDestroyed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0144B870, void, ctor, (app::MinerHitReactionBehaviour * this_ptr))
} // namespace app::classes::MinerHitReactionBehaviour
