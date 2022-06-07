#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PetrifiedOwlBossDiveBombVerticalBehaviour {
    IL2CPP_REGISTER_METHOD(0x00418200, app::StateMachine_2 *, get_StateMachine, (app::PetrifiedOwlBossDiveBombVerticalBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet *, get_States, (app::PetrifiedOwlBossDiveBombVerticalBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004A0B60, void, CopyData, (app::PetrifiedOwlBossDiveBombVerticalBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour * other))
    IL2CPP_REGISTER_METHOD(0x004A0C70, void, OnEntityInitialized, (app::PetrifiedOwlBossDiveBombVerticalBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049F3D0, void, InitializeCancellableController, (app::PetrifiedOwlBossDiveBombVerticalBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049F9B0, void, OnEnter, (app::PetrifiedOwlBossDiveBombVerticalBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0049FA60, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossDiveBombVerticalBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0049FB60, void, OnExit, (app::PetrifiedOwlBossDiveBombVerticalBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0049FBA0, void, ModifyDesiredDamageDirectionMode, (app::PetrifiedOwlBossDiveBombVerticalBehaviour * this_ptr, app::DamageDealer_DamageDirectionMode__Enum * mode))
    IL2CPP_REGISTER_METHOD(0x004A11E0, app::Enum__Array *, GetEntries, (app::PetrifiedOwlBossDiveBombVerticalBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004A1280, app::Enum, Evaluate, (app::PetrifiedOwlBossDiveBombVerticalBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::PetrifiedOwlBossDiveBombVerticalBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004A1320, void, ctor, (app::PetrifiedOwlBossDiveBombVerticalBehaviour * this_ptr))
}
