#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NightCrawlerFightController_FightState.h>
#include <Modloader/app/structs/NightCrawlerFightController.h>

namespace app::classes::NightCrawlerFightController_FightState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::NightCrawlerFightController_FightState * this_ptr, app::NightCrawlerFightController* controller))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::NightCrawlerFightController_FightState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::NightCrawlerFightController_FightState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::NightCrawlerFightController_FightState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::NightCrawlerFightController_FightState * this_ptr))
} // namespace app::classes::NightCrawlerFightController_FightState
