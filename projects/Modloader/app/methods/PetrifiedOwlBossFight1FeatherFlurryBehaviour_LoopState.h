#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState {
    IL2CPP_REGISTER_METHOD(0x01768570, void, ctor, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState * this_ptr, app::PetrifiedOwlBossFight1FeatherFlurryBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01768600, void, OnEnter, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01768800, void, UpdateState, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01768900, void, OnExit, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01768AF0, void, StartAttackProcess, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01768B40, void, OnTimelineEnded, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474A110, PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState_OnTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01768B50, void, GoToNextState, (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState
