#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PetrifiedOwlBossFight1FeatherFlurryBehaviour {
    IL2CPP_REGISTER_METHOD(0x01766FA0, bool, get_TookTooMuchDamage, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065FBA0, app::StateMachine_2*, get_StateMachine, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065FBC0, app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet*, get_States, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01766FC0, void, CopyData, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour* other))
    IL2CPP_REGISTER_METHOD(0x01767130, void, OnEntityInitialized, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01767580, void, OnEnter, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01767920, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01767A20, void, OnExit, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01767D90, void, OnDamageReceived, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour * this_ptr, app::DamageResult damage))
    IL2CPP_REGISTER_METHODINFO(0x0475D408, PetrifiedOwlBossFight1FeatherFlurryBehaviour_OnDamageReceived__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01767DD0, void, OnShootEvent, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04716110, PetrifiedOwlBossFight1FeatherFlurryBehaviour_OnShootEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01768080, void, ctor, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossFight1FeatherFlurryBehaviour
