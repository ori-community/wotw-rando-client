#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry.h>
#include <Modloader/app/structs/LegacyTimelineSequence_c.h>

namespace app::classes::LegacyTimelineSequence___c {
    IL2CPP_REGISTER_METHOD(0x01126AD0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LegacyTimelineSequence_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01126C10, bool, _SortByTime_b__20_0, app::LegacyTimelineSequence_c* this_ptr, app::LegacyTimelineSequence_SequenceEntry* a)
    IL2CPP_REGISTER_METHOD(
        0x01126CC0,
        int32_t,
        _SortByTime_b__20_1,
        app::LegacyTimelineSequence_c* this_ptr,
        app::LegacyTimelineSequence_SequenceEntry* a,
        app::LegacyTimelineSequence_SequenceEntry* b
    )
    IL2CPP_REGISTER_METHOD(0x01126E50, bool, _SortByName_b__21_0, app::LegacyTimelineSequence_c* this_ptr, app::LegacyTimelineSequence_SequenceEntry* a)
    IL2CPP_REGISTER_METHOD(
        0x01126F00,
        int32_t,
        _SortByName_b__21_1,
        app::LegacyTimelineSequence_c* this_ptr,
        app::LegacyTimelineSequence_SequenceEntry* a,
        app::LegacyTimelineSequence_SequenceEntry* b
    )
    IL2CPP_REGISTER_METHOD(0x00D4A040, bool, _RemoveNullEntries_b__25_0, app::LegacyTimelineSequence_c* this_ptr, app::LegacyTimelineSequence_SequenceEntry* a)
} // namespace app::classes::LegacyTimelineSequence___c
