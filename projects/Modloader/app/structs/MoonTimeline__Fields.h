#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTimeline__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTimeline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTimeline__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#include <Modloader/app/structs/TimelineStartMode__Enum.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_TimelineStartMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED)
#define IL2CPP_STRUCT_MoonTimeline__Fields_DEFINED
struct CustomPlaybackSettings;
struct List_1_Moon_Timeline_TimelineEntity_;
struct Dictionary_2_System_UInt32_List_1_Moon_Timeline_Reaction_;
struct Queue_1_Moon_Timeline_Reaction_;
struct TimelineDoubleEndQueue;
struct Action;
struct List_1_Moon_Timeline_ConstraintsMetaData_;
struct List_1_Moon_Timeline_TimelineEntityRecord_;
struct List_1_Moon_Timeline_TimelineMarkerRecord_;
struct List_1_Moon_Timeline_ExternalTimelineRecord_;
struct TimelineContext;
struct IContext;
struct ITrimController;
struct MoonTimeline__Fields {
    struct TimelineEntity__Fields _;
    struct CustomPlaybackSettings* CustomPlaybackSettings;
    struct List_1_Moon_Timeline_TimelineEntity_* m_rootScopeStopRegistrations;
    struct Dictionary_2_System_UInt32_List_1_Moon_Timeline_Reaction_* m_reactionsMap;
    struct Queue_1_Moon_Timeline_Reaction_* m_helperQueue;
    struct Queue_1_Moon_Timeline_Reaction_* m_pendingReactions;
    struct TimelineDoubleEndQueue* m_queueToProcess;
    bool IsSkipped;
    bool IsSkippable;
    int32_t indent;
    float AcceptableTimeError;
    struct Action* ContentLengthChanged;
    struct Action* OnStopEvent;
    struct Action* OnStartEvent;
    bool Loop;
    TimelineStartMode__Enum StartMode;

    float _CurrentTime_k__BackingField;
    struct Nullable_1_Single_ m_duration;
    struct List_1_Moon_Timeline_ConstraintsMetaData_* m_constraintMetaDatas;
    struct List_1_Moon_Timeline_TimelineEntityRecord_* m_entityRecords;
    struct List_1_Moon_Timeline_TimelineMarkerRecord_* m_markerRecords;
    struct List_1_Moon_Timeline_ExternalTimelineRecord_* m_externalRecords;
    bool m_isFinished;
    struct TimelineContext* m_timelineContext;
    struct IContext* m_context;
    bool m_markerInitialized;
    bool m_contentEnd;
    bool m_loopRestart;
    struct Nullable_1_Single_ _ForcedDuration_k__BackingField;
    struct ITrimController* _TrimController_k__BackingField;
    bool _SelfManaged_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTimeline__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTimeline__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/CustomPlaybackSettings.h>
#include <Modloader/app/structs/Dictionary_2_System_UInt32_List_1_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ITrimController.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_ConstraintsMetaData_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_ExternalTimelineRecord_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_TimelineEntityRecord_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_TimelineEntity_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_TimelineMarkerRecord_.h>
#include <Modloader/app/structs/Queue_1_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/TimelineContext.h>
#include <Modloader/app/structs/TimelineDoubleEndQueue.h>
#endif
#undef IL2CPP_STRUCT_MoonTimeline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTimeline__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTimeline__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTimeline__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTimeline__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
