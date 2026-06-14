#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_MasterTimelineSequence_SceneEntry_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_MasterTimelineSequence_SceneEntry_.h>
#include <Modloader/app/structs/MasterTimelineSequence_SceneEntry.h>

namespace app::classes::System::Collections::Generic::List_1_MasterTimelineSequence_SceneEntry_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_MasterTimelineSequence_SceneEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::MasterTimelineSequence_SceneEntry*,
        get_Item,
        app::List_1_MasterTimelineSequence_SceneEntry_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_MasterTimelineSequence_SceneEntry_,
        GetEnumerator,
        app::List_1_MasterTimelineSequence_SceneEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, app::List_1_MasterTimelineSequence_SceneEntry_* this_ptr, app::MasterTimelineSequence_SceneEntry* item)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_MasterTimelineSequence_SceneEntry_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_MasterTimelineSequence_SceneEntry_
