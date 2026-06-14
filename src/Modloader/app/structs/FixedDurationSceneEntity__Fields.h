#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixedDurationSceneEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixedDurationSceneEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedDurationSceneEntity__Fields_DEFINED)
#include <Modloader/app/structs/FixedDurationSceneEntity_StopBehaviourType__Enum.h>
#include <Modloader/app/structs/ScenesManager_SceneManagementMode__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_FixedDurationSceneEntity_StopBehaviourType__Enum_DEFINED) && defined(IL2CPP_STRUCT_ScenesManager_SceneManagementMode__Enum_DEFINED)
#define IL2CPP_STRUCT_FixedDurationSceneEntity__Fields_DEFINED
struct MoonReference_1_Moon_Timeline_ITimelineEntity_;
struct SceneMetaData;
struct MoonTimeline;
struct RuntimeSceneMetaData;
struct IContext;
struct List_1_Moon_MoonReference_1__2;
struct List_1_Moon_Timeline_IEventDescriptor_;
struct ITrimController;
struct FixedDurationSceneEntity__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_Moon_Timeline_ITimelineEntity_* m_timeline;
    FixedDurationSceneEntity_StopBehaviourType__Enum StopBehaviour;

    bool m_isBlockingLoad;
    struct SceneMetaData* SceneMetaData;
    bool HideSceneOnStop;
    bool IsCameraCut;
    bool UnloadSceneOnStop;
    ScenesManager_SceneManagementMode__Enum SceneMode;

    bool CanPreload;
    struct MoonTimeline* TargetTimeline;
    struct RuntimeSceneMetaData* m_runtimeSceneMetaData;
    bool m_isLoaded;
    bool m_startedTimeline;
    bool m_hasFirstFrameProcess;
    int32_t m_startedFrameCount;
    struct IContext* m_context;
    struct RuntimeSceneMetaData* m_rootMetaData;
    float TimeSoFar;
    struct List_1_Moon_MoonReference_1__2* m_timelines;
    struct List_1_Moon_Timeline_IEventDescriptor_* m_events;
    struct ITrimController* _TrimController_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FixedDurationSceneEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_FixedDurationSceneEntity__Fields_FWDDECL
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ITrimController.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__2.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_IEventDescriptor_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_ITimelineEntity_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/SceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_FixedDurationSceneEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedDurationSceneEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FixedDurationSceneEntity__Fields_FWDDECL)
#include <Modloader/app/structs/FixedDurationSceneEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixedDurationSceneEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
