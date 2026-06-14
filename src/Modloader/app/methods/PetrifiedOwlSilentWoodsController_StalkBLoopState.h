#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController.h>
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_StalkBLoopState.h>

namespace app::classes::PetrifiedOwlSilentWoodsController_StalkBLoopState {
    IL2CPP_REGISTER_METHOD(
        0x014E7B90,
        void,
        ctor,
        app::PetrifiedOwlSilentWoodsController_StalkBLoopState* this_ptr,
        app::PetrifiedOwlSilentWoodsController* controller
    )
    IL2CPP_REGISTER_METHOD(0x014E8750, void, OnEnter, app::PetrifiedOwlSilentWoodsController_StalkBLoopState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014E87B0, void, UpdateState, app::PetrifiedOwlSilentWoodsController_StalkBLoopState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014E8830, void, OnExit, app::PetrifiedOwlSilentWoodsController_StalkBLoopState* this_ptr)
} // namespace app::classes::PetrifiedOwlSilentWoodsController_StalkBLoopState
