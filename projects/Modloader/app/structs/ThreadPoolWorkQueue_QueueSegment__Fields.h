#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment__Fields_DEFINED)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment__Fields_DEFINED
struct IThreadPoolWorkItem__Array;
struct ThreadPoolWorkQueue_QueueSegment;
struct __declspec(align(8)) ThreadPoolWorkQueue_QueueSegment__Fields {
    struct IThreadPoolWorkItem__Array* nodes;
    int32_t indexes;
    struct ThreadPoolWorkQueue_QueueSegment* Next;
};
#endif
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment__Fields_FWDDECL)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment__Fields_FWDDECL
#include <Modloader/app/structs/IThreadPoolWorkItem__Array.h>
#include <Modloader/app/structs/ThreadPoolWorkQueue_QueueSegment.h>
#endif
#undef IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment__Fields_FWDDECL)
#include <Modloader/app/structs/ThreadPoolWorkQueue_QueueSegment__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadPoolWorkQueue_QueueSegment__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
