#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FishingMiniGameController_IdleState.h>
#include <Modloader/app/structs/FishingMiniGameController.h>

namespace app::classes::FishingMiniGameController_IdleState {
    IL2CPP_REGISTER_METHOD(0x0126E300, void, ctor, (app::FishingMiniGameController_IdleState * this_ptr, app::FishingMiniGameController* fishing_game))
    IL2CPP_REGISTER_METHOD(0x0073DA30, void, OnEnter, (app::FishingMiniGameController_IdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126F310, void, UpdateState, (app::FishingMiniGameController_IdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::FishingMiniGameController_IdleState * this_ptr))
} // namespace app::classes::FishingMiniGameController_IdleState
