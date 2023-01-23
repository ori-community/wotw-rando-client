#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NightCrawlerFightController_FarRetreatState.h>
#include <Modloader/app/structs/NightCrawlerFightController.h>

namespace app::classes::NightCrawlerFightController_FarRetreatState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::NightCrawlerFightController_FarRetreatState * this_ptr, app::NightCrawlerFightController* controller))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsRightSide, (app::NightCrawlerFightController_FarRetreatState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00607960, void, OnEnter, (app::NightCrawlerFightController_FarRetreatState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00606BF0, void, RetreatFinished, (app::NightCrawlerFightController_FarRetreatState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471F5D0, NightCrawlerFightController_FarRetreatState_RetreatFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00607B50, void, OnExit, (app::NightCrawlerFightController_FarRetreatState * this_ptr))
} // namespace app::classes::NightCrawlerFightController_FarRetreatState
