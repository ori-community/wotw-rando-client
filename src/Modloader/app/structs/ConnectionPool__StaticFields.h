#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConnectionPool__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConnectionPool__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConnectionPool__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ConnectionPool__StaticFields_DEFINED
struct TimerThread_Callback;
struct TimerThread_Queue;
struct ConnectionPool__StaticFields {
    struct TimerThread_Callback* s_CleanupCallback;
    struct TimerThread_Callback* s_CancelErrorCallback;
    struct TimerThread_Queue* s_CancelErrorQueue;
};
#endif
#if !defined(IL2CPP_STRUCT_ConnectionPool__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ConnectionPool__StaticFields_FWDDECL
#include <Modloader/app/structs/TimerThread_Callback.h>
#include <Modloader/app/structs/TimerThread_Queue.h>
#endif
#undef IL2CPP_STRUCT_ConnectionPool__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConnectionPool__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ConnectionPool__StaticFields_FWDDECL)
#include <Modloader/app/structs/ConnectionPool__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConnectionPool__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
