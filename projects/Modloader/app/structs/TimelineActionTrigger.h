#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineActionTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineActionTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineActionTrigger_DEFINED)
#include <Modloader/app/structs/TimelineActionTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineActionTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineActionTrigger_DEFINED
struct TimelineActionTrigger__Class;
struct TimelineActionTrigger {
    struct TimelineActionTrigger__Class* klass;
    MonitorData* monitor;
    struct TimelineActionTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineActionTrigger_FWDDECL)
#define IL2CPP_STRUCT_TimelineActionTrigger_FWDDECL
#include <Modloader/app/structs/TimelineActionTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineActionTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineActionTrigger_DEFINED) && !defined(IL2CPP_STRUCT_TimelineActionTrigger_FWDDECL)
#include <Modloader/app/structs/TimelineActionTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineActionTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
