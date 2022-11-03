#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::LizardKamikazeAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x01106E50, bool, IsBlockingInterruption, (app::LizardKamikazeAttackBehaviour * this_ptr, app::EntityDamageEvent* damage_event, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHOD(0x01106E60, void, OnEntityInitialized, (app::LizardKamikazeAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01106FA0, void, OnEnter, (app::LizardKamikazeAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01107290, app::BehaviourStatus__Enum, OnExecute, (app::LizardKamikazeAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011073C0, void, OnExit, (app::LizardKamikazeAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::LizardKamikazeAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011073D0, void, ChangeState, (app::LizardKamikazeAttackBehaviour * this_ptr, app::LizardKamikazeAttackBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x01107650, void, UpdateState, (app::LizardKamikazeAttackBehaviour * this_ptr, app::LizardKamikazeAttackBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x011078F0, void, UpdateOnGround, (app::LizardKamikazeAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01107B10, void, Jump, (app::LizardKamikazeAttackBehaviour * this_ptr, app::Vector2 velocity))
    IL2CPP_REGISTER_METHOD(0x01107C10, void, PlayTimeline, (app::LizardKamikazeAttackBehaviour * this_ptr, app::MoonTimeline* timeline, app::Action* on_stop))
    IL2CPP_REGISTER_METHOD(0x01107D30, void, ResetCurrentTimeline, (app::LizardKamikazeAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01107E20, void, Explode, (app::LizardKamikazeAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01107E70, void, UpdateVelocityRTPC, (app::LizardKamikazeAttackBehaviour * this_ptr, float velocity))
    IL2CPP_REGISTER_METHOD(0x01107F00, void, ctor, (app::LizardKamikazeAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01107F20, void, _ChangeState_b__23_0, (app::LizardKamikazeAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04757A50, LizardKamikazeAttackBehaviour__ChangeState_b__23_0__MethodInfo)
} // namespace app::classes::Moon::LizardKamikazeAttackBehaviour
