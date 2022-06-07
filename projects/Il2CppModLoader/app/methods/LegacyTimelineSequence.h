#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LegacyTimelineSequence {
    IL2CPP_REGISTER_METHOD(0x0074B530, float, get_UnlockedDuration, (app::LegacyTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3CA60, bool, get_IsLooping, (app::LegacyTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3CA70, void, OnStartPlay, (app::LegacyTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3CC30, void, CacheOriginals, (app::LegacyTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3CDA0, void, UpdateDurationAndTimeCache, (app::LegacyTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3CF90, void, ForceToPlay, (app::LegacyTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3CFE0, void, Stop, (app::LegacyTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3D010, void, SampleValue, (app::LegacyTimelineSequence * this_ptr, float time, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00A3D2B0, void, RestoreToOriginalState, (app::LegacyTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3D410, void, SortByTime, (app::LegacyTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3D7A0, void, SortByName, (app::LegacyTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3DB30, app::LegacyTimelineSequence_SequenceEntry *, AddEntry, (app::LegacyTimelineSequence * this_ptr, app::BaseAnimator * animator, float start_time))
    IL2CPP_REGISTER_METHOD(0x00A3DD10, void, RemoveNullEntries, (app::LegacyTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3DF00, void, UpdateEntries, (app::LegacyTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3E640, app::LegacyTimelineSequence_SequenceEntry *, DuplicateEntry, (app::LegacyTimelineSequence * this_ptr, app::LegacyTimelineSequence_SequenceEntry * entry))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::LegacyTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3EAE0, void, OnAfterDeserialize, (app::LegacyTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3EBD0, bool, IsGoingToFinish, (app::LegacyTimelineSequence * this_ptr, float time_to_end))
    IL2CPP_REGISTER_METHOD(0x00A3EC70, void, ctor, (app::LegacyTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018EC8B0, app::LegacyTimelineSequence_SequenceEntry *, FindEntry, (app::LegacyTimelineSequence * this_ptr))
}
