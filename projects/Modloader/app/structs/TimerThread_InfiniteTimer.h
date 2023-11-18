#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerThread_InfiniteTimer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerThread_InfiniteTimer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_InfiniteTimer_DEFINED)
#include <Modloader/app/structs/TimerThread_InfiniteTimer__Fields.h>
#if defined(IL2CPP_STRUCT_TimerThread_InfiniteTimer__Fields_DEFINED)
#define IL2CPP_STRUCT_TimerThread_InfiniteTimer_DEFINED
struct TimerThread_InfiniteTimer__Class;
struct TimerThread_InfiniteTimer {
    struct TimerThread_InfiniteTimer__Class* klass;
    MonitorData* monitor;
    struct TimerThread_InfiniteTimer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerThread_InfiniteTimer_FWDDECL)
#define IL2CPP_STRUCT_TimerThread_InfiniteTimer_FWDDECL
#include <Modloader/app/structs/TimerThread_InfiniteTimer__Class.h>
#endif
#undef IL2CPP_STRUCT_TimerThread_InfiniteTimer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_InfiniteTimer_DEFINED) && !defined(IL2CPP_STRUCT_TimerThread_InfiniteTimer_FWDDECL)
#include <Modloader/app/structs/TimerThread_InfiniteTimer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerThread_InfiniteTimer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
