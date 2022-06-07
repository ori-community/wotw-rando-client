#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::NightCrawlerChaseIntroController {
    IL2CPP_REGISTER_METHOD(0x00603BC0, app::Enum__Array *, GetEntries, (app::NightCrawlerChaseIntroController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00603C50, app::Enum, Evaluate, (app::NightCrawlerChaseIntroController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::NightCrawlerChaseIntroController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::NightCrawlerChaseIntroController * this_ptr))
}
