#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Enum.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/NightCrawlerRetaliationController.h>

namespace app::classes::NightCrawlerRetaliationController {
    IL2CPP_REGISTER_METHOD(0x00608180, app::Enum__Array*, GetEntries, app::NightCrawlerRetaliationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00608210, void, OnEnable, app::NightCrawlerRetaliationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006083C0, void, OnDisable, app::NightCrawlerRetaliationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00608570, void, OnDamageReceived, app::NightCrawlerRetaliationController* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00608590, app::Enum, Evaluate, app::NightCrawlerRetaliationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, app::NightCrawlerRetaliationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00608630, bool, Validate, app::NightCrawlerRetaliationController* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00608670, void, ResetCondition, app::NightCrawlerRetaliationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00608680, void, UpdateCondition, app::NightCrawlerRetaliationController* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x006086C0, void, ctor, app::NightCrawlerRetaliationController* this_ptr)
} // namespace app::classes::NightCrawlerRetaliationController
