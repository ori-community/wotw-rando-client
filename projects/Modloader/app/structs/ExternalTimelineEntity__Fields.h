#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExternalTimelineEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExternalTimelineEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExternalTimelineEntity__Fields_DEFINED)
#include <Modloader/app/structs/ExternalTimelineEntity_StopBehaviourType__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_ExternalTimelineEntity_StopBehaviourType__Enum_DEFINED)
#define IL2CPP_STRUCT_ExternalTimelineEntity__Fields_DEFINED
struct MoonReference_1_Moon_Timeline_ITimelineEntity_;
struct MoonTimeline;
struct List_1_Moon_MoonReference_1__2;
struct ITrimController;
struct ExternalTimelineEntity__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_Moon_Timeline_ITimelineEntity_* m_timeline;
    bool IsScenarioTimelineCall;
    ExternalTimelineEntity_StopBehaviourType__Enum m_stopBehaviourType;

    struct MoonTimeline* m_targetTimeline;
    struct List_1_Moon_MoonReference_1__2* m_timelines;
    float _TrimTime_k__BackingField;
    bool _ShouldTrim_k__BackingField;
    struct ITrimController* _TrimController_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExternalTimelineEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExternalTimelineEntity__Fields_FWDDECL
#include <Modloader/app/structs/ITrimController.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__2.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_ITimelineEntity_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_ExternalTimelineEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExternalTimelineEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExternalTimelineEntity__Fields_FWDDECL)
#include <Modloader/app/structs/ExternalTimelineEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExternalTimelineEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
