#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController.h>
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_StalkAToBState.h>

namespace app::classes::PetrifiedOwlSilentWoodsController_StalkAToBState {
    IL2CPP_REGISTER_METHOD(
        0x014E7B90,
        void,
        ctor,
        app::PetrifiedOwlSilentWoodsController_StalkAToBState* this_ptr,
        app::PetrifiedOwlSilentWoodsController* controller
    )
    IL2CPP_REGISTER_METHOD(0x014E7EB0, void, OnEnter, app::PetrifiedOwlSilentWoodsController_StalkAToBState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014E80A0, void, UpdateState, app::PetrifiedOwlSilentWoodsController_StalkAToBState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014E8100, void, OnExit, app::PetrifiedOwlSilentWoodsController_StalkAToBState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0126E710, void, OnTimelineStopEvent, app::PetrifiedOwlSilentWoodsController_StalkAToBState* this_ptr)
} // namespace app::classes::PetrifiedOwlSilentWoodsController_StalkAToBState
