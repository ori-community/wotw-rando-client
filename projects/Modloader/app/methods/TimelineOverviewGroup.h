#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimelineOverviewGroup.h>

namespace app::classes::TimelineOverviewGroup {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_InvalidateParentTimelineCache, app::TimelineOverviewGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_InvalidateParentTimelineCache, app::TimelineOverviewGroup* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, app::TimelineOverviewGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::TimelineOverviewGroup* this_ptr)
} // namespace app::classes::TimelineOverviewGroup
