#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/LizardHitReactionBehaviour.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LizardHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00FAE9A0, app::EntityDamageEvent*, get_DamageEvent, app::LizardHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FAE9B0, void, set_DamageEvent, app::LizardHitReactionBehaviour* this_ptr, app::EntityDamageEvent* value)
    IL2CPP_REGISTER_METHOD(0x00FAE9C0, void, OnCacheSerializedComponents, app::LizardHitReactionBehaviour* this_ptr, app::Entity* owner)
    IL2CPP_REGISTER_METHOD(0x00FAEB60, void, OnInitializeTask, app::LizardHitReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00FAEF30, void, OnEnterTask, app::LizardHitReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00FAF230, void, OnHit, app::LizardHitReactionBehaviour* this_ptr, app::EntityDamageEvent* damage_event, bool can_interrupt)
    IL2CPP_REGISTER_METHOD(0x00FAF760, bool, IsCounterAttackRunning, app::LizardHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FAF8D0, app::BehaviourStatus__Enum, OnExecuteTask, app::LizardHitReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00FAF950, void, OnExitTask, app::LizardHitReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00FAF990, void, PlayAdditiveHit, app::LizardHitReactionBehaviour* this_ptr, bool hit_from_front, float damage_amount)
    IL2CPP_REGISTER_METHOD(0x00FAFB70, void, StartSecondaryTimeline, app::LizardHitReactionBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00FAFBC0, void, StartTimeline, app::LizardHitReactionBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00FAFD60, void, ResetTimeline, app::LizardHitReactionBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(
        0x00FAFF80,
        void,
        HandleReasonToNotInterrupt,
        app::LizardHitReactionBehaviour* this_ptr,
        app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason,
        app::EntityEvent* reaction_event
    )
    IL2CPP_REGISTER_METHOD(0x00FB0080, void, ProcessKickback, app::LizardHitReactionBehaviour* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::LizardHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FB00D0, bool, PlayedAdditiveAnim, app::LizardHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FB00E0, void, TimelineFinished, app::LizardHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00FB0100,
        bool,
        CanInterrupt,
        app::LizardHitReactionBehaviour* this_ptr,
        app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason
    )
    IL2CPP_REGISTER_METHOD(0x00FB0310, void, FlipEventStart, app::LizardHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, RootMotionRollBackModifier, app::LizardHitReactionBehaviour* this_ptr, app::Vector3 motion)
    IL2CPP_REGISTER_METHOD(0x00FB0360, void, ctor, app::LizardHitReactionBehaviour* this_ptr)
} // namespace app::classes::LizardHitReactionBehaviour
