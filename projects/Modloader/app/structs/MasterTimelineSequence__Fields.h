#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MasterTimelineSequence__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MasterTimelineSequence__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MasterTimelineSequence__Fields_DEFINED)
#include <Modloader/app/structs/BaseTimelineSequence__Fields.h>
#if defined(IL2CPP_STRUCT_BaseTimelineSequence__Fields_DEFINED)
#define IL2CPP_STRUCT_MasterTimelineSequence__Fields_DEFINED
struct SceneRoot;
struct RuntimeSceneMetaData;
struct List_1_MasterTimelineSequence_SceneEntry_;
struct List_1_MasterTimelineSequence_SceneSettings_;
struct LegacyTimelineSequence;
struct ActionSequence;
struct AutoRecorder;
struct HashSet_1_MasterTimelineSequence_SceneEntry_;
struct MasterTimelineSequence_SceneEntry;
struct MasterTimelineSequence__Fields {
    struct BaseTimelineSequence__Fields _;
    struct SceneRoot* SceneRoot;
    struct RuntimeSceneMetaData* RuntimeSceneMetaData;
    struct List_1_MasterTimelineSequence_SceneEntry_* Entries;
    struct List_1_MasterTimelineSequence_SceneSettings_* Scenes;
    struct LegacyTimelineSequence* TimelineSequence;
    struct ActionSequence* OnFinish;
    float BeforeFinishActionTimeOffset;
    struct ActionSequence* BeforeFinishAction;
    bool Record;
    struct AutoRecorder* m_recorder;
    struct HashSet_1_MasterTimelineSequence_SceneEntry_* m_preloadedScenes;
    bool m_hasFinished;
    bool m_hasRunBeforeFinishAction;
    float m_time;
    struct MasterTimelineSequence_SceneEntry* m_crossFadingFromScene;
    float m_crossFadePadding;
    bool m_playing;
    float m_realTime;
    float m_lastRealTime;
    float m_crossFadeTimeOffset;
    float m_cachedUnlockedDuration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MasterTimelineSequence__Fields_FWDDECL)
#define IL2CPP_STRUCT_MasterTimelineSequence__Fields_FWDDECL
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/AutoRecorder.h>
#include <Modloader/app/structs/HashSet_1_MasterTimelineSequence_SceneEntry_.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/List_1_MasterTimelineSequence_SceneEntry_.h>
#include <Modloader/app/structs/List_1_MasterTimelineSequence_SceneSettings_.h>
#include <Modloader/app/structs/MasterTimelineSequence_SceneEntry.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/SceneRoot.h>
#endif
#undef IL2CPP_STRUCT_MasterTimelineSequence__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MasterTimelineSequence__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MasterTimelineSequence__Fields_FWDDECL)
#include <Modloader/app/structs/MasterTimelineSequence__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MasterTimelineSequence__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
