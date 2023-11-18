#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue_DEFINED)
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue__Fields.h>
#if defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Fields_DEFINED)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue_DEFINED
struct ThreadPoolWorkQueue_WorkStealingQueue__Class;
struct ThreadPoolWorkQueue_WorkStealingQueue {
    struct ThreadPoolWorkQueue_WorkStealingQueue__Class* klass;
    MonitorData* monitor;
    struct ThreadPoolWorkQueue_WorkStealingQueue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue_FWDDECL)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue_FWDDECL
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue__Class.h>
#endif
#undef IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue_DEFINED) && !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue_FWDDECL)
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
