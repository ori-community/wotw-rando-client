#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossFight1FeatherFlurryBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState.h>

namespace app::classes::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState {
    IL2CPP_REGISTER_METHOD(
        0x017682E0,
        void,
        ctor,
        app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState* this_ptr,
        app::PetrifiedOwlBossFight1FeatherFlurryBehaviour* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x01768370, void, OnEnter, app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01768410, void, UpdateState, app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017684D0, void, OnExit, app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState* this_ptr)
} // namespace app::classes::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState
