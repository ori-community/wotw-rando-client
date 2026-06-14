#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadPoolWorkQueue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue__Fields_DEFINED)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue__Fields_DEFINED
struct ThreadPoolWorkQueue_QueueSegment;
struct __declspec(align(8)) ThreadPoolWorkQueue__Fields {
    struct ThreadPoolWorkQueue_QueueSegment* queueHead;
    struct ThreadPoolWorkQueue_QueueSegment* queueTail;
    int32_t numOutstandingThreadRequests;
};
#endif
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue__Fields_FWDDECL)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue__Fields_FWDDECL
#include <Modloader/app/structs/ThreadPoolWorkQueue_QueueSegment.h>
#endif
#undef IL2CPP_STRUCT_ThreadPoolWorkQueue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue__Fields_FWDDECL)
#include <Modloader/app/structs/ThreadPoolWorkQueue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadPoolWorkQueue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
