#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MasterTimelineSequence_SceneEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MasterTimelineSequence_SceneEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MasterTimelineSequence_SceneEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_MasterTimelineSequence_SceneEntry__Fields_DEFINED
struct SceneMetaData;
struct MasterTimelineSequence_SceneEntry;
struct String;
struct BaseAnimator;
struct __declspec(align(8)) MasterTimelineSequence_SceneEntry__Fields {
    struct SceneMetaData* SceneMetaData;
    struct MasterTimelineSequence_SceneEntry* PreviousEntry;
    float m_startOffset;
    float PreloadTime;
    float CrossfadeDuration;
    struct String* TimelineName;
    bool WasEnabled;
    float m_speed;
    float m_lastCachedDuration;
    struct BaseAnimator* m_animator;
};
#endif
#if !defined(IL2CPP_STRUCT_MasterTimelineSequence_SceneEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_MasterTimelineSequence_SceneEntry__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/MasterTimelineSequence_SceneEntry.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MasterTimelineSequence_SceneEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MasterTimelineSequence_SceneEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MasterTimelineSequence_SceneEntry__Fields_FWDDECL)
#include <Modloader/app/structs/MasterTimelineSequence_SceneEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MasterTimelineSequence_SceneEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
