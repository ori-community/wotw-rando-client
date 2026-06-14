#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_MasterTimelineSequence_SceneEntry_.h>
#include <Modloader/app/structs/MasterTimelineSequence_SceneEntry.h>

namespace app::classes::System::Collections::Generic::HashSet_1_MasterTimelineSequence_SceneEntry_ {
    IL2CPP_REGISTER_METHOD(
        0x02ABEAC0,
        bool,
        Contains,
        app::HashSet_1_MasterTimelineSequence_SceneEntry_* this_ptr,
        app::MasterTimelineSequence_SceneEntry* item
    )
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, app::HashSet_1_MasterTimelineSequence_SceneEntry_* this_ptr, app::MasterTimelineSequence_SceneEntry* item)
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, app::HashSet_1_MasterTimelineSequence_SceneEntry_* this_ptr)
} // namespace app::classes::System::Collections::Generic::HashSet_1_MasterTimelineSequence_SceneEntry_
