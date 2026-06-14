#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/BaseTimelineSequence.h>
#include <Modloader/app/structs/IEntry.h>
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry.h>
#include <Modloader/app/structs/List_1_LegacyTimelineSequence_SequenceEntry_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::BaseTimelineSequence {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateEntries, app::BaseTimelineSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FDAA0, float, get_UnlockedDuration, app::BaseTimelineSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A47A00, void, set_UnlockedDuration, app::BaseTimelineSequence* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00F8B850, float, get_Duration, app::BaseTimelineSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F8B880, void, OnStopPlay, app::BaseTimelineSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F8BA70, void, SampleEntryAtRuntime, app::BaseTimelineSequence* this_ptr, float time, app::IEntry* entry, bool force_sample)
    IL2CPP_REGISTER_METHOD(0x00F8BEE0, void, UpdateSubAnimatorDurationAndTimeCaches, app::BaseTimelineSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F8BFF0, void, GatherSubAnimators, app::BaseTimelineSequence* this_ptr, app::BaseAnimator* animator)
    IL2CPP_REGISTER_METHOD(0x00F8C330, void, OnSubAnimatorDurationChange, app::BaseTimelineSequence* this_ptr, app::BaseAnimator* sub_animator)
    IL2CPP_REGISTER_METHOD(0x00F8C340, void, ctor, app::BaseTimelineSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157E140, app::Object*, FindAnimatorOfType, app::BaseTimelineSequence* this_ptr, app::List_1_System_Object_* entries, float time)
    IL2CPP_REGISTER_METHOD(0x015E7A60, app::Object*, FindEntryAtTime, app::BaseTimelineSequence* this_ptr, app::List_1_System_Object_* entries, float time)
    IL2CPP_REGISTER_METHOD(
        0x015E7B90,
        app::Object*,
        GetEntryByAnimator_1,
        app::BaseTimelineSequence* this_ptr,
        app::List_1_System_Object_* entries,
        app::BaseAnimator* animator
    )
    IL2CPP_REGISTER_METHOD(
        0x015E7B90,
        app::LegacyTimelineSequence_SequenceEntry*,
        GetEntryByAnimator_2,
        app::BaseTimelineSequence* this_ptr,
        app::List_1_LegacyTimelineSequence_SequenceEntry_* entries,
        app::BaseAnimator* animator
    )
} // namespace app::classes::BaseTimelineSequence
