#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimelineEventTrigger.h>
#include <Modloader/app/structs/Action_1_TimelineEventTrigger_.h>
#include <Modloader/app/structs/Action.h>

namespace app::classes::TimelineEventTrigger {
    IL2CPP_REGISTER_METHOD(0x004C65D0, app::String*, get_EventProviderName, (app::TimelineEventTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::Action_1_TimelineEventTrigger_*, get_EventStartWithTriggerInfo, (app::TimelineEventTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_EventStartWithTriggerInfo, (app::TimelineEventTrigger * this_ptr, app::Action_1_TimelineEventTrigger_* value))
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::Action*, get_EventStart, (app::TimelineEventTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_EventStart, (app::TimelineEventTrigger * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::Action*, get_EventStay, (app::TimelineEventTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCB0, void, set_EventStay, (app::TimelineEventTrigger * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::Action*, get_EventEnd, (app::TimelineEventTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCD0, void, set_EventEnd, (app::TimelineEventTrigger * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x010F6EB0, void, OnStartPlay, (app::TimelineEventTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F6F80, void, OnStopPlay, (app::TimelineEventTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::TimelineEventTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F6FD0, void, SampleValue, (app::TimelineEventTrigger * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::TimelineEventTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DCB6C0, float, get_Duration, (app::TimelineEventTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::TimelineEventTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F7000, void, ctor, (app::TimelineEventTrigger * this_ptr))
} // namespace app::classes::TimelineEventTrigger
