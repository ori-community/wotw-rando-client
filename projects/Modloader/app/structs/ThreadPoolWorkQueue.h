#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadPoolWorkQueue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_DEFINED)
#include <Modloader/app/structs/ThreadPoolWorkQueue__Fields.h>
#if defined(IL2CPP_STRUCT_ThreadPoolWorkQueue__Fields_DEFINED)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue_DEFINED
struct ThreadPoolWorkQueue__Class;
struct ThreadPoolWorkQueue {
    struct ThreadPoolWorkQueue__Class* klass;
    MonitorData* monitor;
    struct ThreadPoolWorkQueue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_FWDDECL)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue_FWDDECL
#include <Modloader/app/structs/ThreadPoolWorkQueue__Class.h>
#endif
#undef IL2CPP_STRUCT_ThreadPoolWorkQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_DEFINED) && !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_FWDDECL)
#include <Modloader/app/structs/ThreadPoolWorkQueue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadPoolWorkQueue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
