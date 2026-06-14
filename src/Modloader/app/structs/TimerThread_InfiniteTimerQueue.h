#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerThread_InfiniteTimerQueue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerThread_InfiniteTimerQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_InfiniteTimerQueue_DEFINED)
#include <Modloader/app/structs/TimerThread_InfiniteTimerQueue__Fields.h>
#if defined(IL2CPP_STRUCT_TimerThread_InfiniteTimerQueue__Fields_DEFINED)
#define IL2CPP_STRUCT_TimerThread_InfiniteTimerQueue_DEFINED
struct TimerThread_InfiniteTimerQueue__Class;
struct TimerThread_InfiniteTimerQueue {
    struct TimerThread_InfiniteTimerQueue__Class* klass;
    MonitorData* monitor;
    struct TimerThread_InfiniteTimerQueue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerThread_InfiniteTimerQueue_FWDDECL)
#define IL2CPP_STRUCT_TimerThread_InfiniteTimerQueue_FWDDECL
#include <Modloader/app/structs/TimerThread_InfiniteTimerQueue__Class.h>
#endif
#undef IL2CPP_STRUCT_TimerThread_InfiniteTimerQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_InfiniteTimerQueue_DEFINED) && !defined(IL2CPP_STRUCT_TimerThread_InfiniteTimerQueue_FWDDECL)
#include <Modloader/app/structs/TimerThread_InfiniteTimerQueue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerThread_InfiniteTimerQueue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
