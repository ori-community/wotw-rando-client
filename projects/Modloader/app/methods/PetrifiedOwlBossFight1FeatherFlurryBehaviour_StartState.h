#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossFight1FeatherFlurryBehaviour_StartState.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1FeatherFlurryBehaviour.h>

namespace app::classes::PetrifiedOwlBossFight1FeatherFlurryBehaviour_StartState {
    IL2CPP_REGISTER_METHOD(0x01768C00, void, ctor, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_StartState * this_ptr, app::PetrifiedOwlBossFight1FeatherFlurryBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01768C90, void, OnEnter, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_StartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01768EC0, void, UpdateState, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_StartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01768F90, void, OnExit, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_StartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01769180, void, OnTimelineEnded, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_StartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01769180, void, GoToNextState, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_StartState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossFight1FeatherFlurryBehaviour_StartState
