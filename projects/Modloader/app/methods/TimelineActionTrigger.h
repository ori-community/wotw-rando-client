#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimelineActionTrigger.h>

namespace app::classes::TimelineActionTrigger {
    IL2CPP_REGISTER_METHOD(0x010F4900, void, OnStartPlay, (app::TimelineActionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::TimelineActionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (app::TimelineActionTrigger * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::TimelineActionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_Duration, (app::TimelineActionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::TimelineActionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A4BA0, void, ctor, (app::TimelineActionTrigger * this_ptr))
} // namespace app::classes::TimelineActionTrigger
