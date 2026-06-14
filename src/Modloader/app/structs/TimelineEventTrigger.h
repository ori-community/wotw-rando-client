#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineEventTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineEventTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEventTrigger_DEFINED)
#include <Modloader/app/structs/TimelineEventTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEventTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineEventTrigger_DEFINED
struct TimelineEventTrigger__Class;
struct TimelineEventTrigger {
    struct TimelineEventTrigger__Class* klass;
    MonitorData* monitor;
    struct TimelineEventTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineEventTrigger_FWDDECL)
#define IL2CPP_STRUCT_TimelineEventTrigger_FWDDECL
#include <Modloader/app/structs/TimelineEventTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineEventTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEventTrigger_DEFINED) && !defined(IL2CPP_STRUCT_TimelineEventTrigger_FWDDECL)
#include <Modloader/app/structs/TimelineEventTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineEventTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
