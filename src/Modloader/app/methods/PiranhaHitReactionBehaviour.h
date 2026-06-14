#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PiranhaHitReactionBehaviour.h>

namespace app::classes::PiranhaHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00418200, app::EntityDamageEvent*, get_DamageEvent, app::PiranhaHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008760C0, void, set_DamageEvent, app::PiranhaHitReactionBehaviour* this_ptr, app::EntityDamageEvent* value)
    IL2CPP_REGISTER_METHOD(
        0x0115EFC0,
        void,
        HandleReasonToNotInterrupt,
        app::PiranhaHitReactionBehaviour* this_ptr,
        app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason,
        app::EntityEvent* reaction_event
    )
    IL2CPP_REGISTER_METHOD(0x0115F260, void, OnInitializeTask, app::PiranhaHitReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0115F330, void, OnEnterTask, app::PiranhaHitReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, app::PiranhaHitReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0115F790, void, OnExitTask, app::PiranhaHitReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0115F7D0, void, PlayTimeline, app::PiranhaHitReactionBehaviour* this_ptr, app::MoonTimeline* timeline, app::Action* on_stop)
    IL2CPP_REGISTER_METHOD(0x0115F910, void, ResetTimeline, app::PiranhaHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::PiranhaHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0115FA00, void, ctor, app::PiranhaHitReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B38C0, void, _OnEnterTask_b__11_0, app::PiranhaHitReactionBehaviour* this_ptr)
} // namespace app::classes::PiranhaHitReactionBehaviour
