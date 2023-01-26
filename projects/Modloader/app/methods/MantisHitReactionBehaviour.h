#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MantisHitReactionBehaviour.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::MantisHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x005FDE00, app::EntityDamageEvent*, get_DamageEvent, (app::MantisHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FDE10, void, set_DamageEvent, (app::MantisHitReactionBehaviour * this_ptr, app::EntityDamageEvent* value))
    IL2CPP_REGISTER_METHOD(0x009FD090, void, StartTimeline, (app::MantisHitReactionBehaviour * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x009FD2F0, void, StartSecondaryTimeline, (app::MantisHitReactionBehaviour * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x009FD420, void, ResetTimeline, (app::MantisHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00876500, void, TimelineFinished, (app::MantisHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009FD680, void, OnHit, (app::MantisHitReactionBehaviour * this_ptr, app::EntityDamageEvent* damage_event, bool can_interrupt))
    IL2CPP_REGISTER_METHOD(0x005FEB60, void, ProcessKickback, (app::MantisHitReactionBehaviour * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x009FD9D0, void, HandleReasonToNotInterrupt, (app::MantisHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, app::EntityEvent* reaction_event))
    IL2CPP_REGISTER_METHOD(0x009FDB50, bool, CanInterrupt, (app::MantisHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::MantisHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009FDDE0, void, OnInitializeTask, (app::MantisHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x009FE020, void, OnEnterTask, (app::MantisHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x009FE1C0, app::BehaviourStatus__Enum, OnExecuteTask, (app::MantisHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005FE660, void, OnExitTask, (app::MantisHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x009FE2F0, void, PlayAdditiveHit, (app::MantisHitReactionBehaviour * this_ptr, bool hit_from_front, float damage_amount))
    IL2CPP_REGISTER_METHOD(0x009FE4B0, void, ctor, (app::MantisHitReactionBehaviour * this_ptr))
} // namespace app::classes::MantisHitReactionBehaviour
