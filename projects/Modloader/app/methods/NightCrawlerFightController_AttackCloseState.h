#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NightCrawlerFightController.h>
#include <Modloader/app/structs/NightCrawlerFightController_AttackCloseState.h>

namespace app::classes::NightCrawlerFightController_AttackCloseState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::NightCrawlerFightController_AttackCloseState* this_ptr, app::NightCrawlerFightController* controller)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsRightSide, app::NightCrawlerFightController_AttackCloseState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00606990, void, OnEnter, app::NightCrawlerFightController_AttackCloseState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00606BF0, void, AttackFinished, app::NightCrawlerFightController_AttackCloseState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00606C40, void, OnExit, app::NightCrawlerFightController_AttackCloseState* this_ptr)
} // namespace app::classes::NightCrawlerFightController_AttackCloseState
