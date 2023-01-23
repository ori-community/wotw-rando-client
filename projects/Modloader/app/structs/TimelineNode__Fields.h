#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineNode__Fields_DEFINED)
#include <Modloader/app/structs/InteractionNode__Fields.h>
#include <Modloader/app/structs/TimelineNodeMode__Enum.h>
#if defined(IL2CPP_STRUCT_InteractionNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_TimelineNodeMode__Enum_DEFINED)
#define IL2CPP_STRUCT_TimelineNode__Fields_DEFINED
struct List_1_Moon_MoonReference_1__5;
struct EventTriggerAnimator;
struct List_1_Moon_Timeline_MoonTimeline_;
struct TimelineNode__Fields {
    struct InteractionNode__Fields _;
    struct List_1_Moon_MoonReference_1__5* Timelines;
    TimelineNodeMode__Enum Mode;

    struct EventTriggerAnimator* InterruptionTrigger;
    bool ClearResolvedTimelinesOnEnter;
    struct List_1_Moon_Timeline_MoonTimeline_* m_resolvedTimelines;
    int32_t m_timelineIndx;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimelineNode__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__5.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_MoonTimeline_.h>
#endif
#undef IL2CPP_STRUCT_TimelineNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimelineNode__Fields_FWDDECL)
#include <Modloader/app/structs/TimelineNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
