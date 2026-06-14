#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment_DEFINED)
#include <Modloader/app/structs/ThreadPoolWorkQueue_QueueSegment__Fields.h>
#if defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment__Fields_DEFINED)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment_DEFINED
struct ThreadPoolWorkQueue_QueueSegment__Class;
struct ThreadPoolWorkQueue_QueueSegment {
    struct ThreadPoolWorkQueue_QueueSegment__Class* klass;
    MonitorData* monitor;
    struct ThreadPoolWorkQueue_QueueSegment__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment_FWDDECL)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment_FWDDECL
#include <Modloader/app/structs/ThreadPoolWorkQueue_QueueSegment__Class.h>
#endif
#undef IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment_DEFINED) && !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_QueueSegment_FWDDECL)
#include <Modloader/app/structs/ThreadPoolWorkQueue_QueueSegment.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadPoolWorkQueue_QueueSegment.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
