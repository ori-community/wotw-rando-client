#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossDiveBombHorizontalBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState.h>

namespace app::classes::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState {
    IL2CPP_REGISTER_METHOD(
        0x004A0790,
        void,
        ctor,
        app::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState* this_ptr,
        app::PetrifiedOwlBossDiveBombHorizontalBehaviour* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x004A0820, void, OnEnter, app::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A09F0, void, UpdateState, app::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A0AC0, void, OnExit, app::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState* this_ptr)
} // namespace app::classes::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState
