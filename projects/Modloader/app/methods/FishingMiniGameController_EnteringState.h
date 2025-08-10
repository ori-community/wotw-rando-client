#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FishingMiniGameController.h>
#include <Modloader/app/structs/FishingMiniGameController_EnteringState.h>

namespace app::classes::FishingMiniGameController_EnteringState {
    IL2CPP_REGISTER_METHOD(0x0126E300, void, ctor, app::FishingMiniGameController_EnteringState* this_ptr, app::FishingMiniGameController* fishing_game)
    IL2CPP_REGISTER_METHOD(0x0126E330, void, OnEnter, app::FishingMiniGameController_EnteringState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0073DA40, void, UpdateState, app::FishingMiniGameController_EnteringState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0126E530, void, OnExit, app::FishingMiniGameController_EnteringState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0126E710, void, OnStartTimelineEnded, app::FishingMiniGameController_EnteringState* this_ptr)
} // namespace app::classes::FishingMiniGameController_EnteringState
