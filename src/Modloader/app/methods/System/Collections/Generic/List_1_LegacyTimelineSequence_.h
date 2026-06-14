#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/List_1_LegacyTimelineSequence_.h>

namespace app::classes::System::Collections::Generic::List_1_LegacyTimelineSequence_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_LegacyTimelineSequence_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::LegacyTimelineSequence*, get_Item, app::List_1_LegacyTimelineSequence_* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::Generic::List_1_LegacyTimelineSequence_
