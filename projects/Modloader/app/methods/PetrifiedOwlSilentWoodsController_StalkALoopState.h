#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_StalkALoopState.h>
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController.h>

namespace app::classes::PetrifiedOwlSilentWoodsController_StalkALoopState {
    IL2CPP_REGISTER_METHOD(0x014E7B90, void, ctor, (app::PetrifiedOwlSilentWoodsController_StalkALoopState * this_ptr, app::PetrifiedOwlSilentWoodsController* controller))
    IL2CPP_REGISTER_METHOD(0x014E7BC0, void, OnEnter, (app::PetrifiedOwlSilentWoodsController_StalkALoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E7D10, void, UpdateState, (app::PetrifiedOwlSilentWoodsController_StalkALoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E7D90, void, OnExit, (app::PetrifiedOwlSilentWoodsController_StalkALoopState * this_ptr))
} // namespace app::classes::PetrifiedOwlSilentWoodsController_StalkALoopState
