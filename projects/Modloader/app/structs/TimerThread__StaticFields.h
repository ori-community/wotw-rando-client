#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerThread__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerThread__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TimerThread__StaticFields_DEFINED
struct LinkedList_1_System_WeakReference_;
struct AutoResetEvent;
struct ManualResetEvent;
struct WaitHandle__Array;
struct Hashtable;
struct TimerThread__StaticFields {
    struct LinkedList_1_System_WeakReference_* s_Queues;
    struct LinkedList_1_System_WeakReference_* s_NewQueues;
    int32_t s_ThreadState;
    struct AutoResetEvent* s_ThreadReadyEvent;
    struct ManualResetEvent* s_ThreadShutdownEvent;
    struct WaitHandle__Array* s_ThreadEvents;
    int32_t s_CacheScanIteration;
    struct Hashtable* s_QueuesCache;
};
#endif
#if !defined(IL2CPP_STRUCT_TimerThread__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TimerThread__StaticFields_FWDDECL
#include <Modloader/app/structs/AutoResetEvent.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/LinkedList_1_System_WeakReference_.h>
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/WaitHandle__Array.h>
#endif
#undef IL2CPP_STRUCT_TimerThread__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TimerThread__StaticFields_FWDDECL)
#include <Modloader/app/structs/TimerThread__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerThread__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
