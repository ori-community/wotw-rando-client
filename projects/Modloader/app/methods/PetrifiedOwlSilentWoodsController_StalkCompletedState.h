#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_StalkCompletedState.h>
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController.h>

namespace app::classes::PetrifiedOwlSilentWoodsController_StalkCompletedState {
    IL2CPP_REGISTER_METHOD(0x014E7B90, void, ctor, (app::PetrifiedOwlSilentWoodsController_StalkCompletedState * this_ptr, app::PetrifiedOwlSilentWoodsController* controller))
    IL2CPP_REGISTER_METHOD(0x014E8E30, void, OnEnter, (app::PetrifiedOwlSilentWoodsController_StalkCompletedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::PetrifiedOwlSilentWoodsController_StalkCompletedState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::PetrifiedOwlSilentWoodsController_StalkCompletedState * this_ptr))
} // namespace app::classes::PetrifiedOwlSilentWoodsController_StalkCompletedState
