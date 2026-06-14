#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimelineState_NewTimelineStateTempHook.h>

namespace app::classes::Moon::Timeline::TimelineState_NewTimelineStateTempHook {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TimelineState_NewTimelineStateTempHook* this_ptr)
}
