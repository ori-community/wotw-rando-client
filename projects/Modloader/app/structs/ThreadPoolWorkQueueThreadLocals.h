#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals_DEFINED)
#include <Modloader/app/structs/ThreadPoolWorkQueueThreadLocals__Fields.h>
#if defined(IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals__Fields_DEFINED)
#define IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals_DEFINED
struct ThreadPoolWorkQueueThreadLocals__Class;
struct ThreadPoolWorkQueueThreadLocals {
    struct ThreadPoolWorkQueueThreadLocals__Class* klass;
    MonitorData* monitor;
    struct ThreadPoolWorkQueueThreadLocals__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals_FWDDECL)
#define IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals_FWDDECL
#include <Modloader/app/structs/ThreadPoolWorkQueueThreadLocals__Class.h>
#endif
#undef IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals_DEFINED) && !defined(IL2CPP_STRUCT_ThreadPoolWorkQueueThreadLocals_FWDDECL)
#include <Modloader/app/structs/ThreadPoolWorkQueueThreadLocals.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadPoolWorkQueueThreadLocals.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
