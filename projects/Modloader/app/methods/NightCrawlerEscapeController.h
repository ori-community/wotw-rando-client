#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::NightCrawlerEscapeController {
    IL2CPP_REGISTER_METHOD(0x00603D40, bool, Validate, (app::NightCrawlerEscapeController * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::NightCrawlerEscapeController * this_ptr))
} // namespace app::classes::NightCrawlerEscapeController
