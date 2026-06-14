#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FishingMiniGameController.h>
#include <Modloader/app/structs/FishingMiniGameController_FishingState.h>

namespace app::classes::FishingMiniGameController_FishingState {
    IL2CPP_REGISTER_METHOD(0x0126E300, void, ctor, app::FishingMiniGameController_FishingState* this_ptr, app::FishingMiniGameController* fishing_game)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, app::FishingMiniGameController_FishingState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0073DA30, void, OnEnter, app::FishingMiniGameController_FishingState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0073DA40, void, UpdateState, app::FishingMiniGameController_FishingState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, app::FishingMiniGameController_FishingState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSuspended, app::FishingMiniGameController_FishingState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUnsuspended, app::FishingMiniGameController_FishingState* this_ptr)
} // namespace app::classes::FishingMiniGameController_FishingState
