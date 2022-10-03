#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MudkisserHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00418200, app::EntityDamageEvent*, get_DamageEvent, (app::MudkisserHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008760C0, void, set_DamageEvent, (app::MudkisserHitReactionBehaviour * this_ptr, app::EntityDamageEvent* value))
    IL2CPP_REGISTER_METHOD(0x008760D0, void, StartTimeline, (app::MudkisserHitReactionBehaviour * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x008762A0, void, ResetTimeline, (app::MudkisserHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00876500, void, TimelineFinished, (app::MudkisserHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476BE68, MudkisserHitReactionBehaviour_TimelineFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00876520, bool, PlayedAdditiveAnim, (app::MudkisserHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00876630, void, OnHit, (app::MudkisserHitReactionBehaviour * this_ptr, app::EntityDamageEvent* damage_event))
    IL2CPP_REGISTER_METHOD(0x00876960, app::Vector2, ProcessSpecialMultipliers, (app::MudkisserHitReactionBehaviour * this_ptr, app::Damage* damage, app::Vector2 final_force))
    IL2CPP_REGISTER_METHOD(0x00876A70, void, OnHitProtected, (app::MudkisserHitReactionBehaviour * this_ptr, app::EntityDamageEvent* damage_event))
    IL2CPP_REGISTER_METHOD(0x00876D90, void, ProcessKickback, (app::MudkisserHitReactionBehaviour * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00876EA0, void, HandleReasonToNotInterrupt, (app::MudkisserHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, app::EntityEvent* reaction_event))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::MudkisserHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008770F0, void, OnInitializeTask, (app::MudkisserHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00877220, void, OnEnterTask, (app::MudkisserHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, (app::MudkisserHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008775B0, void, OnExitTask, (app::MudkisserHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008775C0, void, ctor, (app::MudkisserHitReactionBehaviour * this_ptr))
} // namespace app::classes::MudkisserHitReactionBehaviour
