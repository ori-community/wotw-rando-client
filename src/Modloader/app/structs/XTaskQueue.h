#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XTaskQueue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XTaskQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_XTaskQueue_DEFINED)
#include <Modloader/app/structs/XTaskQueue__Fields.h>
#if defined(IL2CPP_STRUCT_XTaskQueue__Fields_DEFINED)
#define IL2CPP_STRUCT_XTaskQueue_DEFINED
struct XTaskQueue__Class;
struct XTaskQueue {
    struct XTaskQueue__Class* klass;
    MonitorData* monitor;
    struct XTaskQueue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XTaskQueue_FWDDECL)
#define IL2CPP_STRUCT_XTaskQueue_FWDDECL
#include <Modloader/app/structs/XTaskQueue__Class.h>
#endif
#undef IL2CPP_STRUCT_XTaskQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_XTaskQueue_DEFINED) && !defined(IL2CPP_STRUCT_XTaskQueue_FWDDECL)
#include <Modloader/app/structs/XTaskQueue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XTaskQueue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
