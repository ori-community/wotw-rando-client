#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry.h>

namespace app::classes::System::Action_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ {
    IL2CPP_REGISTER_METHOD(
        0x015FE410,
        void,
        Invoke,
        app::Action_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_* this_ptr,
        app::BaseAnimator* arg1,
        app::LegacyTimelineSequence_SequenceEntry* arg2
    )
}
