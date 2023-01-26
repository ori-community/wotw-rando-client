#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/NickHitReactionBehaviour.h>

namespace app::classes::NickHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x005FDE00, app::EntityDamageEvent*, get_DamageEvent, (app::NickHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FDE10, void, set_DamageEvent, (app::NickHitReactionBehaviour * this_ptr, app::EntityDamageEvent* value))
    IL2CPP_REGISTER_METHOD(0x005FDE20, void, OnInitializeTask, (app::NickHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005FE140, void, OnEnterTask, (app::NickHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005FE2F0, void, OnHit, (app::NickHitReactionBehaviour * this_ptr, app::EntityDamageEvent* damage_event, bool can_interrupt))
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, (app::NickHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005FE660, void, OnExitTask, (app::NickHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005FE670, void, StartTimeline, (app::NickHitReactionBehaviour * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x005FE800, void, ResetTimeline, (app::NickHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FEA60, void, HandleReasonToNotInterrupt, (app::NickHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, app::EntityEvent* reaction_event))
    IL2CPP_REGISTER_METHOD(0x005FEB60, void, ProcessKickback, (app::NickHitReactionBehaviour * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::NickHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FEBC0, bool, PlayedAdditiveAnim, (app::NickHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FEC80, void, TimelineFinished, (app::NickHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FECA0, bool, CanInterrupt, (app::NickHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHOD(0x005FEF40, void, FlipEventStart, (app::NickHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FEF90, void, ctor, (app::NickHitReactionBehaviour * this_ptr))
} // namespace app::classes::NickHitReactionBehaviour
