#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpikeSlugHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00A64240, app::EntityDamageEvent*, get_DamageEvent, (app::SpikeSlugHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D72E70, void, set_DamageEvent, (app::SpikeSlugHitReactionBehaviour * this_ptr, app::EntityDamageEvent* value))
    IL2CPP_REGISTER_METHOD(0x011CD4F0, bool, get_HasShell, (app::SpikeSlugHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011CD5D0, bool, get_CanInterruptSelf, (app::SpikeSlugHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011CD5E0, bool, CanInterrupt, (app::SpikeSlugHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHOD(0x011CD790, void, OnCacheSerializedComponents, (app::SpikeSlugHitReactionBehaviour * this_ptr, app::Entity* owner))
    IL2CPP_REGISTER_METHOD(0x011CD930, void, OnInitializeTask, (app::SpikeSlugHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011CDB20, void, OnEnterTask, (app::SpikeSlugHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, (app::SpikeSlugHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011CDC40, void, OnExitTask, (app::SpikeSlugHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011CDC50, void, OnHit, (app::SpikeSlugHitReactionBehaviour * this_ptr, app::EntityDamageEvent* damage_event, bool can_interrupt))
    IL2CPP_REGISTER_METHOD(0x011CEBD0, void, StartRotating, (app::SpikeSlugHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011CECE0, app::MoonTimeline*, GetShelledHitTimeline, (app::SpikeSlugHitReactionBehaviour * this_ptr, app::Vector3 normalized_damage_force))
    IL2CPP_REGISTER_METHOD(0x011CFCB0, void, StartTimeline, (app::SpikeSlugHitReactionBehaviour * this_ptr, app::MoonTimeline* timeline, app::EventTriggerAnimator* stop_event_override))
    IL2CPP_REGISTER_METHOD(0x011CFF80, void, StartSecondaryTimeline, (app::SpikeSlugHitReactionBehaviour * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x011CFFD0, void, PlayAdditiveHit, (app::SpikeSlugHitReactionBehaviour * this_ptr, bool hit_from_front, float damage_amount))
    IL2CPP_REGISTER_METHOD(0x011D0150, void, ResetTimeline, (app::SpikeSlugHitReactionBehaviour * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x011D0370, void, HandleReasonToNotInterrupt, (app::SpikeSlugHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, app::EntityEvent* reaction_event))
    IL2CPP_REGISTER_METHOD(0x011D04D0, void, ProcessKickback, (app::SpikeSlugHitReactionBehaviour * this_ptr, app::Vector2 force))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::SpikeSlugHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011D05B0, void, TimelineFinished, (app::SpikeSlugHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047181D8, SpikeSlugHitReactionBehaviour_TimelineFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011D07E0, void, PlayShake, (app::SpikeSlugHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011D08E0, void, ctor, (app::SpikeSlugHitReactionBehaviour * this_ptr))
} // namespace app::classes::SpikeSlugHitReactionBehaviour
