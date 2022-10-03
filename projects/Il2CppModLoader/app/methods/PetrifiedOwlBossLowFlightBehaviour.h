#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PetrifiedOwlBossLowFlightBehaviour {
    IL2CPP_REGISTER_METHOD(0x00660430, app::StateMachine_2*, get_StateMachine, (app::PetrifiedOwlBossLowFlightBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B0220, app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet*, get_States, (app::PetrifiedOwlBossLowFlightBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017744F0, void, InitializeCancellableController, (app::PetrifiedOwlBossLowFlightBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017792E0, void, OnEntityInitialized, (app::PetrifiedOwlBossLowFlightBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01779730, void, OnEnter, (app::PetrifiedOwlBossLowFlightBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01766290, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossLowFlightBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01766390, void, OnExit, (app::PetrifiedOwlBossLowFlightBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017798D0, void, ctor, (app::PetrifiedOwlBossLowFlightBehaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossLowFlightBehaviour
