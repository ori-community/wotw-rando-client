#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet.h>
#include <Modloader/app/structs/PetrifiedOwlBossLandBehaviour.h>
#include <Modloader/app/structs/StateMachine_2.h>

namespace app::classes::PetrifiedOwlBossLandBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::StateMachine_2*, get_StateMachine, app::PetrifiedOwlBossLandBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00660430,
        app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet*,
        get_States,
        app::PetrifiedOwlBossLandBehaviour* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x017757E0, void, CopyData, app::PetrifiedOwlBossLandBehaviour* this_ptr, app::PetrifiedOwlBossBaseBehaviour* other)
    IL2CPP_REGISTER_METHOD(0x017758D0, void, OnEntityInitialized, app::PetrifiedOwlBossLandBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01775BE0, void, OnEnter, app::PetrifiedOwlBossLandBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01775C50, app::BehaviourStatus__Enum, OnExecute, app::PetrifiedOwlBossLandBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01775D50, void, OnExit, app::PetrifiedOwlBossLandBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01775D90, void, ctor, app::PetrifiedOwlBossLandBehaviour* this_ptr)
} // namespace app::classes::PetrifiedOwlBossLandBehaviour
