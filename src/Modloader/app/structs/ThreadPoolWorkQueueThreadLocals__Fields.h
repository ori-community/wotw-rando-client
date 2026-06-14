#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals__Fields_DEFINED)
#define IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals__Fields_DEFINED
struct ThreadPoolWorkQueue;
struct ThreadPoolWorkQueue_WorkStealingQueue;
struct Random;
struct __declspec(align(8)) ThreadPoolWorkQueueThreadLocals__Fields {
    struct ThreadPoolWorkQueue* workQueue;
    struct ThreadPoolWorkQueue_WorkStealingQueue* workStealingQueue;
    struct Random* random;
};
#endif
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals__Fields_FWDDECL)
#define IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals__Fields_FWDDECL
#include <Modloader/app/structs/Random.h>
#include <Modloader/app/structs/ThreadPoolWorkQueue.h>
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue.h>
#endif
#undef IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals__Fields_FWDDECL)
#include <Modloader/app/structs/ThreadPoolWorkQueueThreadLocals__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadPoolWorkQueueThreadLocals__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
