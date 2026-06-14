#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Array_DEFINED)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Array_DEFINED
struct ThreadPoolWorkQueue_WorkStealingQueue__Array__Class;
struct ThreadPoolWorkQueue_WorkStealingQueue;
struct ThreadPoolWorkQueue_WorkStealingQueue__Array {
    struct ThreadPoolWorkQueue_WorkStealingQueue__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct ThreadPoolWorkQueue_WorkStealingQueue* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Array_FWDDECL)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Array_FWDDECL
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue.h>
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Array_DEFINED) && !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Array_FWDDECL)
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
