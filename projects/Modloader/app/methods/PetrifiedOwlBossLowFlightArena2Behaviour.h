#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightArena2Behaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>

namespace app::classes::PetrifiedOwlBossLowFlightArena2Behaviour {
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::StateMachine_2*, get_StateMachine, (app::PetrifiedOwlBossLowFlightArena2Behaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet*, get_States, (app::PetrifiedOwlBossLowFlightArena2Behaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017787D0, void, CopyData, (app::PetrifiedOwlBossLowFlightArena2Behaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour* other))
    IL2CPP_REGISTER_METHOD(0x017788B0, void, OnEntityInitialized, (app::PetrifiedOwlBossLowFlightArena2Behaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01778A80, void, OnEnter, (app::PetrifiedOwlBossLowFlightArena2Behaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01778C20, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossLowFlightArena2Behaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01778D20, void, OnExit, (app::PetrifiedOwlBossLowFlightArena2Behaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01778D60, void, ctor, (app::PetrifiedOwlBossLowFlightArena2Behaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossLowFlightArena2Behaviour
