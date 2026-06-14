#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState.h>

namespace app::classes::PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState {
    IL2CPP_REGISTER_METHOD(
        0x0176EF00,
        void,
        ctor,
        app::PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState* this_ptr,
        app::PetrifiedOwlBossFinalComboBehaviour* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x0176EF90, void, OnEnter, app::PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0176F2E0, void, UpdateState, app::PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0176F440, void, OnExit, app::PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState* this_ptr)
} // namespace app::classes::PetrifiedOwlBossFinalComboBehaviour_DiveHorizontalState
