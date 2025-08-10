#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController.h>
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState.h>

namespace app::classes::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState {
    IL2CPP_REGISTER_METHOD(
        0x014E7B90,
        void,
        ctor,
        app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState* this_ptr,
        app::PetrifiedOwlSilentWoodsController* controller
    )
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState* this_ptr)
} // namespace app::classes::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerState
