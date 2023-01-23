#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MasterTimelineSequence.h>
#include <Modloader/app/structs/MasterTimelineSequence_SceneEntry.h>

namespace app::classes::MasterTimelineSequence {
    IL2CPP_REGISTER_METHOD(0x00A11940, float, get_UnlockedDuration, (app::MasterTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::MasterTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnValidate, (app::MasterTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A11950, void, OnSkipCutscene, (app::MasterTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A11BB0, void, GenerateStartTimes, (app::MasterTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A11DB0, app::MasterTimelineSequence_SceneEntry*, FindSceneToPreloadAtTime, (app::MasterTimelineSequence * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00A11F10, int32_t, FindEntryIndex, (app::MasterTimelineSequence * this_ptr, app::MasterTimelineSequence_SceneEntry* entry))
    IL2CPP_REGISTER_METHOD(0x00A11FD0, void, OnStartPlay, (app::MasterTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A121E0, void, UpdateSubAnimatorList, (app::MasterTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A122B0, void, UpdateDurationAndTimeCache, (app::MasterTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::MasterTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A12460, void, CacheOriginals, (app::MasterTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A124F0, void, OnLoadedScene, (app::MasterTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04793A98, MasterTimelineSequence_OnLoadedScene__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00A12510, void, Awake, (app::MasterTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A125C0, void, OnDestroy, (app::MasterTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A12670, void, Start, (app::MasterTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A127D0, void, Update, (app::MasterTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A12870, void, SampleValue, (app::MasterTimelineSequence * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00A13150, void, SampleSceneAtRuntime, (app::MasterTimelineSequence * this_ptr, float time, app::MasterTimelineSequence_SceneEntry* entry, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00A137E0, void, OnStopPlay, (app::MasterTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A138B0, void, ctor, (app::MasterTimelineSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A13BE0, void, cctor, ())
} // namespace app::classes::MasterTimelineSequence
