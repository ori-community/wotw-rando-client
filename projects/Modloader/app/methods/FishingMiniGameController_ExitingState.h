#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FishingMiniGameController.h>
#include <Modloader/app/structs/FishingMiniGameController_ExitingState.h>

namespace app::classes::FishingMiniGameController_ExitingState {
    IL2CPP_REGISTER_METHOD(0x0126E300, void, ctor, app::FishingMiniGameController_ExitingState* this_ptr, app::FishingMiniGameController* fishing_game)
    IL2CPP_REGISTER_METHOD(0x0126E750, void, OnEnter, app::FishingMiniGameController_ExitingState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0073DA40, void, UpdateState, app::FishingMiniGameController_ExitingState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0126E940, void, OnExit, app::FishingMiniGameController_ExitingState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0126EB30, void, OnExitTimelineEnded, app::FishingMiniGameController_ExitingState* this_ptr)
} // namespace app::classes::FishingMiniGameController_ExitingState
