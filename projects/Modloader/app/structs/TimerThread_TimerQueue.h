#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerThread_TimerQueue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerThread_TimerQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_TimerQueue_DEFINED)
#include <Modloader/app/structs/TimerThread_TimerQueue__Fields.h>
#if defined(IL2CPP_STRUCT_TimerThread_TimerQueue__Fields_DEFINED)
#define IL2CPP_STRUCT_TimerThread_TimerQueue_DEFINED
struct TimerThread_TimerQueue__Class;
struct TimerThread_TimerQueue {
    struct TimerThread_TimerQueue__Class* klass;
    MonitorData* monitor;
    struct TimerThread_TimerQueue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerThread_TimerQueue_FWDDECL)
#define IL2CPP_STRUCT_TimerThread_TimerQueue_FWDDECL
#include <Modloader/app/structs/TimerThread_TimerQueue__Class.h>
#endif
#undef IL2CPP_STRUCT_TimerThread_TimerQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_TimerQueue_DEFINED) && !defined(IL2CPP_STRUCT_TimerThread_TimerQueue_FWDDECL)
#include <Modloader/app/structs/TimerThread_TimerQueue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerThread_TimerQueue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
