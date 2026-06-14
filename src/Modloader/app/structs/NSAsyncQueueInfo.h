#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NSAsyncQueueInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NSAsyncQueueInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_NSAsyncQueueInfo_DEFINED)
#include <Modloader/app/structs/NSAsyncQueueInfo__Fields.h>
#if defined(IL2CPP_STRUCT_NSAsyncQueueInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_NSAsyncQueueInfo_DEFINED
struct NSAsyncQueueInfo__Class;
struct NSAsyncQueueInfo {
    struct NSAsyncQueueInfo__Class* klass;
    MonitorData* monitor;
    struct NSAsyncQueueInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NSAsyncQueueInfo_FWDDECL)
#define IL2CPP_STRUCT_NSAsyncQueueInfo_FWDDECL
#include <Modloader/app/structs/NSAsyncQueueInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_NSAsyncQueueInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_NSAsyncQueueInfo_DEFINED) && !defined(IL2CPP_STRUCT_NSAsyncQueueInfo_FWDDECL)
#include <Modloader/app/structs/NSAsyncQueueInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NSAsyncQueueInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
