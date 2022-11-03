#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpiderBossLocationAnimationSet {
    IL2CPP_REGISTER_METHOD(0x011B2290, app::MoonAnimation*, GetItem, (app::SpiderBossLocationAnimationSet * this_ptr, app::SpiderBossLocationZone__Enum zone, float facing_direction))
    IL2CPP_REGISTER_METHOD(0x011B2320, app::MoonAnimation*, GetAnyItem, (app::SpiderBossLocationAnimationSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SpiderBossLocationAnimationSet * this_ptr))
} // namespace app::classes::SpiderBossLocationAnimationSet
