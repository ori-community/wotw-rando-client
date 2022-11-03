#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FishingMiniGameController_FishingLoopState {
    IL2CPP_REGISTER_METHOD(0x0126E300, void, ctor, (app::FishingMiniGameController_FishingLoopState * this_ptr, app::FishingMiniGameController* fishing_game))
    IL2CPP_REGISTER_METHOD(0x0126EB70, void, OnEnter, (app::FishingMiniGameController_FishingLoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126EBC0, void, UpdateState, (app::FishingMiniGameController_FishingLoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126F270, void, OnExit, (app::FishingMiniGameController_FishingLoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126F2A0, void, UpdateCancelFishing, (app::FishingMiniGameController_FishingLoopState * this_ptr))
} // namespace app::classes::FishingMiniGameController_FishingLoopState
