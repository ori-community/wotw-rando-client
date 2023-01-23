#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_LegacyTimelineSequence_SequenceEntry_.h>
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry.h>
#include <Modloader/app/structs/Predicate_1_LegacyTimelineSequence_SequenceEntry_.h>
#include <Modloader/app/structs/Comparison_1_LegacyTimelineSequence_SequenceEntry_.h>

namespace app::classes::System::Collections::Generic::List_1_LegacyTimelineSequence_SequenceEntry_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_LegacyTimelineSequence_SequenceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473F528, List_1_LegacyTimelineSequence_SequenceEntry__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::LegacyTimelineSequence_SequenceEntry*, get_Item, (app::List_1_LegacyTimelineSequence_SequenceEntry_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04796288, List_1_LegacyTimelineSequence_SequenceEntry__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_LegacyTimelineSequence_SequenceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04731B00, List_1_LegacyTimelineSequence_SequenceEntry__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1EFE0, int32_t, RemoveAll, (app::List_1_LegacyTimelineSequence_SequenceEntry_ * this_ptr, app::Predicate_1_LegacyTimelineSequence_SequenceEntry_* match))
    IL2CPP_REGISTER_METHODINFO(0x047441F0, List_1_LegacyTimelineSequence_SequenceEntry__RemoveAll__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_LegacyTimelineSequence_SequenceEntry_ * this_ptr, app::LegacyTimelineSequence_SequenceEntry* item))
    IL2CPP_REGISTER_METHODINFO(0x04731EC0, List_1_LegacyTimelineSequence_SequenceEntry__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_LegacyTimelineSequence_SequenceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04719080, List_1_LegacyTimelineSequence_SequenceEntry___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_LegacyTimelineSequence_SequenceEntry_ * this_ptr, app::Comparison_1_LegacyTimelineSequence_SequenceEntry_* comparison))
    IL2CPP_REGISTER_METHODINFO(0x04797690, List_1_LegacyTimelineSequence_SequenceEntry__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_LegacyTimelineSequence_SequenceEntry_ * this_ptr, app::LegacyTimelineSequence_SequenceEntry* item))
    IL2CPP_REGISTER_METHODINFO(0x04719120, List_1_LegacyTimelineSequence_SequenceEntry__Contains__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_LegacyTimelineSequence_SequenceEntry_
