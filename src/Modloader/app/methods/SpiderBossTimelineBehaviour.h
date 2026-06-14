#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SpiderBossTimelineBehaviour.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SpiderBossTimelineBehaviour {
    IL2CPP_REGISTER_METHOD(0x011BA940, app::String*, get_Info, app::SpiderBossTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011BAA60, app::MoonTimeline*, GetTimeline, app::SpiderBossTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011BAB40, bool, ShouldPauseLocomotion, app::SpiderBossTimelineBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011BAC20, void, ctor, app::SpiderBossTimelineBehaviour* this_ptr)
} // namespace app::classes::SpiderBossTimelineBehaviour
