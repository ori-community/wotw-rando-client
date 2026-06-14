#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController.h>
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_StalkBExitState.h>

namespace app::classes::PetrifiedOwlSilentWoodsController_StalkBExitState {
    IL2CPP_REGISTER_METHOD(
        0x014E7B90,
        void,
        ctor,
        app::PetrifiedOwlSilentWoodsController_StalkBExitState* this_ptr,
        app::PetrifiedOwlSilentWoodsController* controller
    )
    IL2CPP_REGISTER_METHOD(0x014E82E0, void, OnEnter, app::PetrifiedOwlSilentWoodsController_StalkBExitState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014E84D0, void, UpdateState, app::PetrifiedOwlSilentWoodsController_StalkBExitState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014E8530, void, OnExit, app::PetrifiedOwlSilentWoodsController_StalkBExitState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014E8710, void, OnTimelineStopEvent, app::PetrifiedOwlSilentWoodsController_StalkBExitState* this_ptr)
} // namespace app::classes::PetrifiedOwlSilentWoodsController_StalkBExitState
