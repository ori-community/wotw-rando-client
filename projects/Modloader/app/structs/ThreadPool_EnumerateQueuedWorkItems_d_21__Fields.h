#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadPool_EnumerateQueuedWorkItems_d_21__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadPool_EnumerateQueuedWorkItems_d_21__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPool_EnumerateQueuedWorkItems_d_21__Fields_DEFINED)
#define IL2CPP_STRUCT_ThreadPool_EnumerateQueuedWorkItems_d_21__Fields_DEFINED
struct IThreadPoolWorkItem;
struct ThreadPoolWorkQueue_WorkStealingQueue__Array;
struct IThreadPoolWorkItem__Array;
struct ThreadPoolWorkQueue_QueueSegment;
struct __declspec(align(8)) ThreadPool_EnumerateQueuedWorkItems_d_21__Fields {
    int32_t __1__state;
    struct IThreadPoolWorkItem* __2__current;
    int32_t __l__initialThreadId;
    struct ThreadPoolWorkQueue_WorkStealingQueue__Array* wsQueues;
    struct ThreadPoolWorkQueue_WorkStealingQueue__Array* __3__wsQueues;
    struct IThreadPoolWorkItem__Array* _items_5__1;
    int32_t _i_5__2;
    struct ThreadPoolWorkQueue_QueueSegment* globalQueueTail;
    struct ThreadPoolWorkQueue_QueueSegment* __3__globalQueueTail;
    struct IThreadPoolWorkItem__Array* _items_5__3;
    int32_t _i_5__4;
    struct ThreadPoolWorkQueue_QueueSegment* _segment_5__5;
    struct ThreadPoolWorkQueue_WorkStealingQueue__Array* __7__wrap1;
    int32_t __7__wrap2;
};
#endif
#if !defined(IL2CPP_STRUCT_ThreadPool_EnumerateQueuedWorkItems_d_21__Fields_FWDDECL)
#define IL2CPP_STRUCT_ThreadPool_EnumerateQueuedWorkItems_d_21__Fields_FWDDECL
#include <Modloader/app/structs/IThreadPoolWorkItem.h>
#include <Modloader/app/structs/IThreadPoolWorkItem__Array.h>
#include <Modloader/app/structs/ThreadPoolWorkQueue_QueueSegment.h>
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue__Array.h>
#endif
#undef IL2CPP_STRUCT_ThreadPool_EnumerateQueuedWorkItems_d_21__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPool_EnumerateQueuedWorkItems_d_21__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ThreadPool_EnumerateQueuedWorkItems_d_21__Fields_FWDDECL)
#include <Modloader/app/structs/ThreadPool_EnumerateQueuedWorkItems_d_21__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadPool_EnumerateQueuedWorkItems_d_21__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
