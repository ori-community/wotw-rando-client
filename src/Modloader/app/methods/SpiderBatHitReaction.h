#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SpiderBatHitReaction.h>

namespace app::classes::SpiderBatHitReaction {
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::EntityDamageEvent*, get_DamageEvent, app::SpiderBatHitReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A63B0, void, set_DamageEvent, app::SpiderBatHitReaction* this_ptr, app::EntityDamageEvent* value)
    IL2CPP_REGISTER_METHOD(0x0095BD00, void, OnEnterTask, app::SpiderBatHitReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0095BE20, void, OnHit, app::SpiderBatHitReaction* this_ptr, app::EntityDamageEvent* damage_event, bool can_interrupt)
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, app::SpiderBatHitReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x007F3820, void, OnExitTask, app::SpiderBatHitReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0095C130, void, StartTimeline, app::SpiderBatHitReaction* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x0095C2C0, void, ResetTimeline, app::SpiderBatHitReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0095C520,
        void,
        HandleReasonToNotInterrupt,
        app::SpiderBatHitReaction* this_ptr,
        app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason,
        app::EntityEvent* reaction_event
    )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::SpiderBatHitReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00875720, bool, PlayedAdditiveAnim, app::SpiderBatHitReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0095C600, void, TimelineFinished, app::SpiderBatHitReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0095C660, void, ctor, app::SpiderBatHitReaction* this_ptr)
} // namespace app::classes::SpiderBatHitReaction
