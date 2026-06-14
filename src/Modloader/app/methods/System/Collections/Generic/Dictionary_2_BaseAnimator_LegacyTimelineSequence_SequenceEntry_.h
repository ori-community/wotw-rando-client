#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_.h>
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_* this_ptr,
        app::BaseAnimator* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_* this_ptr,
        app::BaseAnimator* key,
        app::LegacyTimelineSequence_SequenceEntry* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_* this_ptr,
        app::BaseAnimator* key,
        app::LegacyTimelineSequence_SequenceEntry** value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_
