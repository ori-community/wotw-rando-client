#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Timer_Scheduler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Timer_Scheduler_INITIALIZING
#if !defined(IL2CPP_STRUCT_Timer_Scheduler_DEFINED)
#include <Modloader/app/structs/Timer_Scheduler__Fields.h>
#if defined(IL2CPP_STRUCT_Timer_Scheduler__Fields_DEFINED)
#define IL2CPP_STRUCT_Timer_Scheduler_DEFINED
struct Timer_Scheduler__Class;
struct Timer_Scheduler {
    struct Timer_Scheduler__Class* klass;
    MonitorData* monitor;
    struct Timer_Scheduler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Timer_Scheduler_FWDDECL)
#define IL2CPP_STRUCT_Timer_Scheduler_FWDDECL
#include <Modloader/app/structs/Timer_Scheduler__Class.h>
#endif
#undef IL2CPP_STRUCT_Timer_Scheduler_INITIALIZING
#if !defined(IL2CPP_STRUCT_Timer_Scheduler_DEFINED) && !defined(IL2CPP_STRUCT_Timer_Scheduler_FWDDECL)
#include <Modloader/app/structs/Timer_Scheduler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Timer_Scheduler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
