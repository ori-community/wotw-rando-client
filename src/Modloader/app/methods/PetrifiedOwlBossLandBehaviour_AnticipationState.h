#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossLandBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossLandBehaviour_AnticipationState.h>

namespace app::classes::PetrifiedOwlBossLandBehaviour_AnticipationState {
    IL2CPP_REGISTER_METHOD(
        0x01775FB0,
        void,
        ctor,
        app::PetrifiedOwlBossLandBehaviour_AnticipationState* this_ptr,
        app::PetrifiedOwlBossLandBehaviour* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x01776040, void, OnEnter, app::PetrifiedOwlBossLandBehaviour_AnticipationState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01776260, void, UpdateState, app::PetrifiedOwlBossLandBehaviour_AnticipationState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01776330, void, OnExit, app::PetrifiedOwlBossLandBehaviour_AnticipationState* this_ptr)
} // namespace app::classes::PetrifiedOwlBossLandBehaviour_AnticipationState
