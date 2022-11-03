#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::NightCrawlerFightController_DefeatRetreatState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::NightCrawlerFightController_DefeatRetreatState * this_ptr, app::NightCrawlerFightController* controller))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsRightSide, (app::NightCrawlerFightController_DefeatRetreatState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006074B0, void, OnEnter, (app::NightCrawlerFightController_DefeatRetreatState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006076A0, void, DefeatRetreatFinished, (app::NightCrawlerFightController_DefeatRetreatState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04752A90, NightCrawlerFightController_DefeatRetreatState_DefeatRetreatFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006076C0, void, OnExit, (app::NightCrawlerFightController_DefeatRetreatState * this_ptr))
} // namespace app::classes::NightCrawlerFightController_DefeatRetreatState
