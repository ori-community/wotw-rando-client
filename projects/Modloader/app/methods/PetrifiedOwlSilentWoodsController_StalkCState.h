#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_StalkCState.h>
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController.h>

namespace app::classes::PetrifiedOwlSilentWoodsController_StalkCState {
    IL2CPP_REGISTER_METHOD(0x014E7B90, void, ctor, (app::PetrifiedOwlSilentWoodsController_StalkCState * this_ptr, app::PetrifiedOwlSilentWoodsController* controller))
    IL2CPP_REGISTER_METHOD(0x014E88E0, void, OnEnter, (app::PetrifiedOwlSilentWoodsController_StalkCState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E8AD0, void, UpdateState, (app::PetrifiedOwlSilentWoodsController_StalkCState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E8B30, void, OnExit, (app::PetrifiedOwlSilentWoodsController_StalkCState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E8DF0, void, OnTimelineStopEvent, (app::PetrifiedOwlSilentWoodsController_StalkCState * this_ptr))
} // namespace app::classes::PetrifiedOwlSilentWoodsController_StalkCState
