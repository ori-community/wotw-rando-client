#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KwolokBossCleanWaterPhaseStartBehaviour.h>
#include <Modloader/app/structs/KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState.h>

namespace app::classes::KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState {
    IL2CPP_REGISTER_METHOD(
        0x01251B60,
        void,
        ctor,
        app::KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState* this_ptr,
        app::KwolokBossCleanWaterPhaseStartBehaviour* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x01252010, void, OnEnter, app::KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012521B0, void, UpdateState, app::KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01252240, void, OnExit, app::KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01252310, void, OnJumpTimelineFinished, app::KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState* this_ptr)
} // namespace app::classes::KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState
