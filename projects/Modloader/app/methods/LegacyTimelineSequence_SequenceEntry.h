#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry.h>
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum.h>

namespace app::classes::LegacyTimelineSequence_SequenceEntry {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::BaseAnimator*, get_Animator, (app::LegacyTimelineSequence_SequenceEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01127030, float, get_Speed, (app::LegacyTimelineSequence_SequenceEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724010, void, set_Speed, (app::LegacyTimelineSequence_SequenceEntry * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01127060, bool, get_HasStartConstraint, (app::LegacyTimelineSequence_SequenceEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01127110, bool, get_HasEndConstraint, (app::LegacyTimelineSequence_SequenceEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011271C0, float, get_StartTime, (app::LegacyTimelineSequence_SequenceEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01127230, void, set_StartTime, (app::LegacyTimelineSequence_SequenceEntry * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01127370, float, get_EndTime, (app::LegacyTimelineSequence_SequenceEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01127430, float, get_Duration, (app::LegacyTimelineSequence_SequenceEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011275F0, void, SetStartConstraint, (app::LegacyTimelineSequence_SequenceEntry * this_ptr, app::LegacyTimelineSequence_SequenceEntry* constraint, app::LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum anchor))
    IL2CPP_REGISTER_METHOD(0x011277B0, void, SetEndConstraint, (app::LegacyTimelineSequence_SequenceEntry * this_ptr, app::LegacyTimelineSequence_SequenceEntry* constraint, app::LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum anchor))
    IL2CPP_REGISTER_METHOD(0x01127830, bool, CanBeConstrainedTo, (app::LegacyTimelineSequence_SequenceEntry * this_ptr, app::LegacyTimelineSequence_SequenceEntry* constraint))
    IL2CPP_REGISTER_METHOD(0x01127A40, void, OnAfterDeserialize, (app::LegacyTimelineSequence_SequenceEntry * this_ptr, app::LegacyTimelineSequence* sequence))
    IL2CPP_REGISTER_METHOD(0x01127C70, void, ctor, (app::LegacyTimelineSequence_SequenceEntry * this_ptr))
} // namespace app::classes::LegacyTimelineSequence_SequenceEntry
