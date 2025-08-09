#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/GiantSlugHitReactionBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::GiantSlugHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::EntityDamageEvent*, get_DamageEvent, app::GiantSlugHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A63B0, void, set_DamageEvent, app::GiantSlugHitReactionBehaviour* this_ptr, app::EntityDamageEvent* value)
    IL2CPP_REGISTER_METHOD(0x007F3550, void, OnInitializeTask, app::GiantSlugHitReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x007F3670, void, OnEnterTask, app::GiantSlugHitReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnHit, app::GiantSlugHitReactionBehaviour* this_ptr, app::EntityDamageEvent* damage_event)
    IL2CPP_REGISTER_METHOD(0x007F3770, void, StartRotating, app::GiantSlugHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, app::GiantSlugHitReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x007F3820, void, OnExitTask, app::GiantSlugHitReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x007F3830, void, StartTimeline, app::GiantSlugHitReactionBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x007F39C0, void, ResetTimeline, app::GiantSlugHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x007F3C20,
        void,
        HandleReasonToNotInterrupt,
        app::GiantSlugHitReactionBehaviour* this_ptr,
        app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason,
        app::EntityEvent* reaction_event
    )
    IL2CPP_REGISTER_METHOD(0x007F3CF0, void, ProcessKickback, app::GiantSlugHitReactionBehaviour* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::GiantSlugHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007F3D50, bool, PlayedAdditiveAnim, app::GiantSlugHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00757DD0, void, TimelineFinished, app::GiantSlugHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007F3E60, void, ctor, app::GiantSlugHitReactionBehaviour* this_ptr)
} // namespace app::classes::GiantSlugHitReactionBehaviour
