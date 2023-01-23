#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerThread_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerThread_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_DEFINED)
#define IL2CPP_STRUCT_TimerThread_DEFINED
struct TimerThread__Class;
struct TimerThread {
    struct TimerThread__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TimerThread_FWDDECL)
#define IL2CPP_STRUCT_TimerThread_FWDDECL
#include <Modloader/app/structs/TimerThread__Class.h>
#endif
#undef IL2CPP_STRUCT_TimerThread_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_DEFINED) && !defined(IL2CPP_STRUCT_TimerThread_FWDDECL)
#include <Modloader/app/structs/TimerThread.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerThread.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
