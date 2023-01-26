#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/Enum.h>
#include <Modloader/app/structs/NightCrawlerChaseIntroController.h>

namespace app::classes::NightCrawlerChaseIntroController {
    IL2CPP_REGISTER_METHOD(0x00603BC0, app::Enum__Array*, GetEntries, (app::NightCrawlerChaseIntroController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00603C50, app::Enum, Evaluate, (app::NightCrawlerChaseIntroController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::NightCrawlerChaseIntroController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::NightCrawlerChaseIntroController * this_ptr))
} // namespace app::classes::NightCrawlerChaseIntroController
