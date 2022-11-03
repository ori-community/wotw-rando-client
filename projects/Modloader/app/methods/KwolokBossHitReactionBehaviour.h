#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::KwolokBossHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::KwolokBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E0EC0, void, OnInitializeTask, (app::KwolokBossHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012E0ED0, void, OnEnterTask, (app::KwolokBossHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptSelf, (app::KwolokBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E10A0, bool, CanInterrupt, (app::KwolokBossHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHOD(0x012E13D0, void, HandleReasonToNotInterrupt, (app::KwolokBossHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, app::EntityEvent* reaction_event))
    IL2CPP_REGISTER_METHOD(0x012E1540, void, PlayHitAdditive, (app::KwolokBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E1970, app::BehaviourStatus__Enum, OnExecuteTask, (app::KwolokBossHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012E19E0, void, OnExitTask, (app::KwolokBossHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012E1A30, bool, IsExecutingCannonAttack, (app::KwolokBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E1BA0, void, Awake, (app::KwolokBossHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E1CB0, void, ctor, (app::KwolokBossHitReactionBehaviour * this_ptr))
} // namespace app::classes::KwolokBossHitReactionBehaviour
