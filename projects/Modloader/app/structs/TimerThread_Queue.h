#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerThread_Queue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerThread_Queue_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_Queue_DEFINED)
#include <Modloader/app/structs/TimerThread_Queue__Fields.h>
#if defined(IL2CPP_STRUCT_TimerThread_Queue__Fields_DEFINED)
#define IL2CPP_STRUCT_TimerThread_Queue_DEFINED
struct TimerThread_Queue__Class;
struct TimerThread_Queue {
    struct TimerThread_Queue__Class* klass;
    MonitorData* monitor;
    struct TimerThread_Queue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerThread_Queue_FWDDECL)
#define IL2CPP_STRUCT_TimerThread_Queue_FWDDECL
#include <Modloader/app/structs/TimerThread_Queue__Class.h>
#endif
#undef IL2CPP_STRUCT_TimerThread_Queue_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_Queue_DEFINED) && !defined(IL2CPP_STRUCT_TimerThread_Queue_FWDDECL)
#include <Modloader/app/structs/TimerThread_Queue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerThread_Queue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
