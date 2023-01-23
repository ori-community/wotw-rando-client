#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventTriggerAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventTriggerAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventTriggerAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_EventTriggerAnimator__Fields_DEFINED
struct Action_1_Moon_Timeline_EventTriggerAnimator_;
struct Action;
struct EventTriggerAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct Action_1_Moon_Timeline_EventTriggerAnimator_* m_eventStartWithTriggerInfo;
    struct Action* m_eventStart;
    struct Action* m_eventStay;
    struct Action* m_eventEnd;
    float m_duration;
    float m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventTriggerAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventTriggerAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Moon_Timeline_EventTriggerAnimator_.h>
#endif
#undef IL2CPP_STRUCT_EventTriggerAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventTriggerAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventTriggerAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/EventTriggerAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventTriggerAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
