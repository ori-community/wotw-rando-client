#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpiderBossLocationTimelineSet.h>
#include <Modloader/app/structs/SpiderBossLocationZone__Enum.h>
#include <Modloader/app/structs/MirroredTimelineSet.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::SpiderBossLocationTimelineSet {
    IL2CPP_REGISTER_METHOD(0x011B2970, void, SwapIdle, (app::SpiderBossLocationTimelineSet * this_ptr, app::SpiderBossLocationZone__Enum zone, app::MirroredTimelineSet* timelines))
    IL2CPP_REGISTER_METHOD(0x011B2A20, void, ResetIdle, (app::SpiderBossLocationTimelineSet * this_ptr, app::SpiderBossLocationZone__Enum zone))
    IL2CPP_REGISTER_METHOD(0x011B2AC0, void, CacheInitTimelines, (app::SpiderBossLocationTimelineSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B2290, app::MoonTimeline*, GetTimeline, (app::SpiderBossLocationTimelineSet * this_ptr, app::SpiderBossLocationZone__Enum zone, float facing_direction))
    IL2CPP_REGISTER_METHOD(0x011B2B50, app::MoonTimeline*, GetAnyTimeline, (app::SpiderBossLocationTimelineSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SpiderBossLocationTimelineSet * this_ptr))
} // namespace app::classes::SpiderBossLocationTimelineSet
