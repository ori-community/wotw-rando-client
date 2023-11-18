#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MasterTimelineSequence_SceneEntry.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/IEntry.h>
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry_Constraint.h>
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum.h>

namespace app::classes::MasterTimelineSequence_SceneEntry {
    IL2CPP_REGISTER_METHOD(0x00A13C70, float, get_StartTime, (app::MasterTimelineSequence_SceneEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A13CE0, void, set_StartTime, (app::MasterTimelineSequence_SceneEntry * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A13D90, float, get_EndTime, (app::MasterTimelineSequence_SceneEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_EndTime, (app::MasterTimelineSequence_SceneEntry * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00724020, float, get_Speed, (app::MasterTimelineSequence_SceneEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724030, void, set_Speed, (app::MasterTimelineSequence_SceneEntry * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_LastCachedDuration, (app::MasterTimelineSequence_SceneEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_LastCachedDuration, (app::MasterTimelineSequence_SceneEntry * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A13DD0, float, get_Duration, (app::MasterTimelineSequence_SceneEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A13F40, app::BaseAnimator*, get_Animator, (app::MasterTimelineSequence_SceneEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasStartConstraint, (app::MasterTimelineSequence_SceneEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_HasStartConstraint, (app::MasterTimelineSequence_SceneEntry * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasEndConstraint, (app::MasterTimelineSequence_SceneEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_HasEndConstraint, (app::MasterTimelineSequence_SceneEntry * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeConstrainedTo, (app::MasterTimelineSequence_SceneEntry * this_ptr, app::IEntry* clip))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetStartConstraint, (app::MasterTimelineSequence_SceneEntry * this_ptr, app::IEntry* constraint))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetEndConstraint, (app::MasterTimelineSequence_SceneEntry * this_ptr, app::IEntry* constraint, app::LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum anchor))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::LegacyTimelineSequence_SequenceEntry_Constraint*, get_StartConstraint, (app::MasterTimelineSequence_SceneEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_StartConstraint, (app::MasterTimelineSequence_SceneEntry * this_ptr, app::LegacyTimelineSequence_SequenceEntry_Constraint* value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::LegacyTimelineSequence_SequenceEntry_Constraint*, get_EndConstraint, (app::MasterTimelineSequence_SceneEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_EndConstraint, (app::MasterTimelineSequence_SceneEntry * this_ptr, app::LegacyTimelineSequence_SequenceEntry_Constraint* value))
    IL2CPP_REGISTER_METHOD(0x00A14220, void, ctor, (app::MasterTimelineSequence_SceneEntry * this_ptr))
} // namespace app::classes::MasterTimelineSequence_SceneEntry
