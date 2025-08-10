#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SneezeSlugHitReactionBehaviour.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::SneezeSlugHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00756A30, app::EntityDamageEvent*, get_DamageEvent, app::SneezeSlugHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00756A40, void, set_DamageEvent, app::SneezeSlugHitReactionBehaviour* this_ptr, app::EntityDamageEvent* value)
    IL2CPP_REGISTER_METHOD(0x00EDD210, void, OnCacheSerializedComponents, app::SneezeSlugHitReactionBehaviour* this_ptr, app::Entity* owner)
    IL2CPP_REGISTER_METHOD(0x00EDD430, void, OnInitializeTask, app::SneezeSlugHitReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00EDDD60, void, OnEnterTask, app::SneezeSlugHitReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00EDDE80, void, OnHit, app::SneezeSlugHitReactionBehaviour* this_ptr, app::EntityDamageEvent* damage_event, bool can_interrupt)
    IL2CPP_REGISTER_METHOD(0x00EDE3C0, app::BehaviourStatus__Enum, OnExecuteTask, app::SneezeSlugHitReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00EDE450, void, OnExitTask, app::SneezeSlugHitReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00EDE460, void, StartTimeline, app::SneezeSlugHitReactionBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(
        0x00EDE600,
        void,
        StartAdditiveTimeline,
        app::SneezeSlugHitReactionBehaviour* this_ptr,
        app::MoonTimeline* timeline,
        float damage_amount
    )
    IL2CPP_REGISTER_METHOD(0x00EDE7A0, void, ResetTimeline, app::SneezeSlugHitReactionBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(
        0x00EDE9C0,
        void,
        HandleReasonToNotInterrupt,
        app::SneezeSlugHitReactionBehaviour* this_ptr,
        app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason,
        app::EntityEvent* reaction_event
    )
    IL2CPP_REGISTER_METHOD(0x00EDEAD0, void, ProcessKickback, app::SneezeSlugHitReactionBehaviour* this_ptr, app::Vector2 force)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::SneezeSlugHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDEBD0, bool, PlayedAdditiveAnim, app::SneezeSlugHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDEBE0, void, TimelineFinished, app::SneezeSlugHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00EDEC00,
        bool,
        CanInterrupt,
        app::SneezeSlugHitReactionBehaviour* this_ptr,
        app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason
    )
    IL2CPP_REGISTER_METHOD(0x00B667A0, void, FlipEventStart, app::SneezeSlugHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDEF40, void, SetBlastinflateStart, app::SneezeSlugHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDEF50, void, SetBlastinflateStop, app::SneezeSlugHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDEF60, void, ctor, app::SneezeSlugHitReactionBehaviour* this_ptr)
} // namespace app::classes::SneezeSlugHitReactionBehaviour
