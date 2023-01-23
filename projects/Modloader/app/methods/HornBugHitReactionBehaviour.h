#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/HornBugHitReactionBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>

namespace app::classes::HornBugHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x0065FBE0, app::EntityDamageEvent*, get_DamageEvent, (app::HornBugHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065FBF0, void, set_DamageEvent, (app::HornBugHitReactionBehaviour * this_ptr, app::EntityDamageEvent* value))
    IL2CPP_REGISTER_METHOD(0x00B6B7A0, void, OnInitializeTask, (app::HornBugHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B6BAC0, void, OnEnterTask, (app::HornBugHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B6BBE0, void, OnHit, (app::HornBugHitReactionBehaviour * this_ptr, app::EntityDamageEvent* damage_event, bool can_interrupt))
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, (app::HornBugHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B6C1D0, void, OnExitTask, (app::HornBugHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B6C1E0, void, StartTimeline, (app::HornBugHitReactionBehaviour * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x00B6C370, void, ResetTimeline, (app::HornBugHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B6C5D0, void, HandleReasonToNotInterrupt, (app::HornBugHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, app::EntityEvent* reaction_event))
    IL2CPP_REGISTER_METHOD(0x00B6C6D0, void, ProcessKickback, (app::HornBugHitReactionBehaviour * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::HornBugHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A640A0, bool, PlayedAdditiveAnim, (app::HornBugHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B6C890, void, TimelineFinished, (app::HornBugHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474DFB0, HornBugHitReactionBehaviour_TimelineFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B6C8B0, bool, CanInterrupt, (app::HornBugHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHOD(0x00B6CB50, void, FlipEventStart, (app::HornBugHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047185A8, HornBugHitReactionBehaviour_FlipEventStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B6CBA0, bool, IsHeavyAttack, (app::HornBugHitReactionBehaviour * this_ptr, app::DamageWeight__Enum weight))
    IL2CPP_REGISTER_METHOD(0x00B6CBB0, void, PlayShake, (app::HornBugHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B6CCB0, void, ctor, (app::HornBugHitReactionBehaviour * this_ptr))
} // namespace app::classes::HornBugHitReactionBehaviour
