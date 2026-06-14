#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventTriggerGameplayAnimator.h>
#include <Modloader/app/structs/EventTriggerGameplayAnimator_Type__Enum.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerGameplayAnimator_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>

namespace app::classes::Moon::Timeline::EventTriggerGameplayAnimator {
    IL2CPP_REGISTER_METHOD(
        0x01BBD9E0,
        app::List_1_Moon_Timeline_EventTriggerGameplayAnimator_*,
        FindInTimeline,
        app::MoonTimeline* timeline,
        app::EventTriggerGameplayAnimator_Type__Enum type
    )
    IL2CPP_REGISTER_METHOD(
        0x01BBDD50,
        void,
        SynchronizeData,
        app::EventTriggerGameplayAnimator* this_ptr,
        app::MoonTimeline* timeline,
        app::TimelineEntityRecord* record
    )
    IL2CPP_REGISTER_METHOD(0x01BBDEC0, void, ctor, app::EventTriggerGameplayAnimator* this_ptr)
} // namespace app::classes::Moon::Timeline::EventTriggerGameplayAnimator
