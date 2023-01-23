#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoveEventWindowAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoveEventWindowAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveEventWindowAnimator__Fields_DEFINED)
#include <Modloader/app/structs/MoveEventType__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_MoveEventType__Enum_DEFINED)
#define IL2CPP_STRUCT_MoveEventWindowAnimator__Fields_DEFINED
struct Action_1_Moon_Timeline_MoveEventType_;
struct MoveEventWindowAnimator__Fields {
    struct TimelineEntity__Fields _;
    MoveEventType__Enum EventType;

    struct Action_1_Moon_Timeline_MoveEventType_* m_eventStart;
    struct Action_1_Moon_Timeline_MoveEventType_* m_eventStay;
    struct Action_1_Moon_Timeline_MoveEventType_* m_eventEnd;
    float m_time;
    bool DebugStartAndEndTimes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoveEventWindowAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoveEventWindowAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Moon_Timeline_MoveEventType_.h>
#endif
#undef IL2CPP_STRUCT_MoveEventWindowAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveEventWindowAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoveEventWindowAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/MoveEventWindowAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoveEventWindowAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
