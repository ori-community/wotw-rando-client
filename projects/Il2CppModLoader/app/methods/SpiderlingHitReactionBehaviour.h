#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpiderlingHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00A64220, app::EntityDamageEvent*, get_DamageEvent, (app::SpiderlingHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00510100, void, set_DamageEvent, (app::SpiderlingHitReactionBehaviour * this_ptr, app::EntityDamageEvent* value))
    IL2CPP_REGISTER_METHOD(0x011C47A0, void, OnCacheSerializedComponents, (app::SpiderlingHitReactionBehaviour * this_ptr, app::Entity* owner))
    IL2CPP_REGISTER_METHOD(0x011C4860, void, OnInitializeTask, (app::SpiderlingHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011C4980, void, OnEnterTask, (app::SpiderlingHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011C4AA0, app::BehaviourStatus__Enum, OnExecuteTask, (app::SpiderlingHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011C4B90, void, OnExitTask, (app::SpiderlingHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011C4BA0, void, OnHit, (app::SpiderlingHitReactionBehaviour * this_ptr, app::EntityDamageEvent* damage_event, bool can_interrupt))
    IL2CPP_REGISTER_METHOD(0x011C5180, void, StartTimeline, (app::SpiderlingHitReactionBehaviour * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x011C5310, void, ResetTimeline, (app::SpiderlingHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C5570, void, HandleReasonToNotInterrupt, (app::SpiderlingHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, app::EntityEvent* reaction_event))
    IL2CPP_REGISTER_METHOD(0x011C56F0, void, ProcessKickback, (app::SpiderlingHitReactionBehaviour * this_ptr, app::Vector2 force))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::SpiderlingHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061E5C0, bool, PlayedAdditiveAnim, (app::SpiderlingHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C5730, void, TimelineFinished, (app::SpiderlingHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04779720, SpiderlingHitReactionBehaviour_TimelineFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011C5750, void, ctor, (app::SpiderlingHitReactionBehaviour * this_ptr))
} // namespace app::classes::SpiderlingHitReactionBehaviour
