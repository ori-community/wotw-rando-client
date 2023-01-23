#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NightCrawlerFightController_FarHoldState.h>
#include <Modloader/app/structs/NightCrawlerFightController.h>

namespace app::classes::NightCrawlerFightController_FarHoldState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::NightCrawlerFightController_FarHoldState * this_ptr, app::NightCrawlerFightController* controller))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsRightSide, (app::NightCrawlerFightController_FarHoldState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00607880, void, OnEnter, (app::NightCrawlerFightController_FarHoldState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006078C0, void, UpdateState, (app::NightCrawlerFightController_FarHoldState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00607930, void, OnExit, (app::NightCrawlerFightController_FarHoldState * this_ptr))
} // namespace app::classes::NightCrawlerFightController_FarHoldState
