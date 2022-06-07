#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PetrifiedOwlBossHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x017731C0, app::MoonTimeline *, get_HitReactionTimeline, (app::PetrifiedOwlBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::PetrifiedOwlBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E0EC0, void, OnInitializeTask, (app::PetrifiedOwlBossHitReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01773310, void, OnEnterTask, (app::PetrifiedOwlBossHitReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptSelf, (app::PetrifiedOwlBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01773630, bool, CanInterrupt, (app::PetrifiedOwlBossHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason))
    IL2CPP_REGISTER_METHOD(0x01773790, void, HandleReasonToNotInterrupt, (app::PetrifiedOwlBossHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, app::EntityEvent * reaction_event))
    IL2CPP_REGISTER_METHOD(0x01773900, void, PlayHitAdditive, (app::PetrifiedOwlBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01773D30, app::BehaviourStatus__Enum, OnExecuteTask, (app::PetrifiedOwlBossHitReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01773DA0, void, OnExitTask, (app::PetrifiedOwlBossHitReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01773DD0, app::Enum__Array *, GetEntries, (app::PetrifiedOwlBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01773E70, app::Enum, Evaluate, (app::PetrifiedOwlBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::PetrifiedOwlBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01773F10, void, Awake, (app::PetrifiedOwlBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01774020, void, ctor, (app::PetrifiedOwlBossHitReactionBehaviour * this_ptr))
}
