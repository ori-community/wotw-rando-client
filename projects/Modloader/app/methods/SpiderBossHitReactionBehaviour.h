#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpiderBossHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::SpiderBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011ADF30, void, StartRandomHitTimeline, (app::SpiderBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011ADFC0, bool, IsHitTimelineFinished, (app::SpiderBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011AE0A0, void, StopHitTimeline, (app::SpiderBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011AE180, void, OnEnterTask, (app::SpiderBossHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptSelf, (app::SpiderBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011AE4C0, bool, CanInterrupt, (app::SpiderBossHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHOD(0x011AE620, void, HandleReasonToNotInterrupt, (app::SpiderBossHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, app::EntityEvent* reaction_event))
    IL2CPP_REGISTER_METHOD(0x011AE790, void, PlayHitAdditive, (app::SpiderBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011AEBC0, app::BehaviourStatus__Enum, OnExecuteTask, (app::SpiderBossHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011AECE0, void, OnExitTask, (app::SpiderBossHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01042E70, void, OnDamageReceived, (app::SpiderBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047128E0, SpiderBossHitReactionBehaviour_OnDamageReceived__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011AEEB0, void, Awake, (app::SpiderBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011AEFC0, void, ctor, (app::SpiderBossHitReactionBehaviour * this_ptr))
} // namespace app::classes::SpiderBossHitReactionBehaviour
