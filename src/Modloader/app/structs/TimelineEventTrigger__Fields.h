#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineEventTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineEventTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEventTrigger__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineEventTrigger__Fields_DEFINED
struct Action_1_TimelineEventTrigger_;
struct Action;
struct TimelineEventTrigger__Fields {
    struct BaseAnimator__Fields _;
    float ClipDuration;
    struct Action_1_TimelineEventTrigger_* m_eventStartWithTriggerInfo;
    struct Action* m_eventStart;
    struct Action* m_eventStay;
    struct Action* m_eventEnd;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineEventTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimelineEventTrigger__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_TimelineEventTrigger_.h>
#endif
#undef IL2CPP_STRUCT_TimelineEventTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEventTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimelineEventTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/TimelineEventTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineEventTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
