#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TimelineContext.h>

namespace app::classes::Moon::Timeline::TimelineContext {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MoonTimeline*, get_ContainingTimeline, app::TimelineContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ContainingTimeline, app::TimelineContext* this_ptr, app::MoonTimeline* value)
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsSkippable, app::TimelineContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsSkippable, app::TimelineContext* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TimelineContext* this_ptr)
} // namespace app::classes::Moon::Timeline::TimelineContext
