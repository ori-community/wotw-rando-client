#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerThread_Timer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerThread_Timer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_Timer_DEFINED)
#include <Modloader/app/structs/TimerThread_Timer__Fields.h>
#if defined(IL2CPP_STRUCT_TimerThread_Timer__Fields_DEFINED)
#define IL2CPP_STRUCT_TimerThread_Timer_DEFINED
struct TimerThread_Timer__Class;
struct TimerThread_Timer {
    struct TimerThread_Timer__Class* klass;
    MonitorData* monitor;
    struct TimerThread_Timer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerThread_Timer_FWDDECL)
#define IL2CPP_STRUCT_TimerThread_Timer_FWDDECL
#include <Modloader/app/structs/TimerThread_Timer__Class.h>
#endif
#undef IL2CPP_STRUCT_TimerThread_Timer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_Timer_DEFINED) && !defined(IL2CPP_STRUCT_TimerThread_Timer_FWDDECL)
#include <Modloader/app/structs/TimerThread_Timer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerThread_Timer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
