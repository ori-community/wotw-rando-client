#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::NightCrawlerFightController_FightState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::NightCrawlerFightController_FightState * this_ptr, app::NightCrawlerFightController * controller))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::NightCrawlerFightController_FightState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::NightCrawlerFightController_FightState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::NightCrawlerFightController_FightState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::NightCrawlerFightController_FightState * this_ptr))
}
