#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SpiderBossLocationTimelineBehaviour.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SpiderBossLocationTimelineBehaviour {
    IL2CPP_REGISTER_METHOD(0x011B26C0, app::String*, get_Info, app::SpiderBossLocationTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B2830, app::MoonTimeline*, GetTimeline, app::SpiderBossLocationTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B1480, void, ctor, app::SpiderBossLocationTimelineBehaviour* this_ptr)
} // namespace app::classes::SpiderBossLocationTimelineBehaviour
