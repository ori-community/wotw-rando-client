#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::BrainScript {
    IL2CPP_REGISTER_METHOD(0x00D486C0, float, get_Duration, (app::BrainScript * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D48810, void, Awake, (app::BrainScript * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::BrainScript * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::BrainScript * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (app::BrainScript * this_ptr, float time, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::BrainScript * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D488D0, void, UpdateEntriesIndexes, (app::BrainScript * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D48B70, void, ExecuteEntry_1, (app::BrainScript * this_ptr, app::LegacyTimelineSequence_SequenceEntry* sequence_entry))
    IL2CPP_REGISTER_METHOD(0x00D48BA0, void, ExecuteEntry_2, (app::BrainScript * this_ptr, app::BaseAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x00D48D80, app::LegacyTimelineSequence_SequenceEntry*, AddEntry, (app::BrainScript * this_ptr, app::BaseAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::List_1_LegacyTimelineSequence_SequenceEntry_*, get_EditorEntries, (app::BrainScript * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D48F30, bool, get_SamplingEditorEntries, (app::BrainScript * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D48FC0, void, ResetEditorEntries, (app::BrainScript * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D49070, void, RemoveNullEntries, (app::BrainScript * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D49260, void, RemoveEntriesWithNullAnimators, (app::BrainScript * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D49450, void, UpdateEntries, (app::BrainScript * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D49A90, void, ctor, (app::BrainScript * this_ptr))
} // namespace app::classes::BrainScript
