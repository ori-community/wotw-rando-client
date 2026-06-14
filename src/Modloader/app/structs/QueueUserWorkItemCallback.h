#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QueueUserWorkItemCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QueueUserWorkItemCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_QueueUserWorkItemCallback_DEFINED)
#include <Modloader/app/structs/QueueUserWorkItemCallback__Fields.h>
#if defined(IL2CPP_STRUCT_QueueUserWorkItemCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_QueueUserWorkItemCallback_DEFINED
struct QueueUserWorkItemCallback__Class;
struct QueueUserWorkItemCallback {
    struct QueueUserWorkItemCallback__Class* klass;
    MonitorData* monitor;
    struct QueueUserWorkItemCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QueueUserWorkItemCallback_FWDDECL)
#define IL2CPP_STRUCT_QueueUserWorkItemCallback_FWDDECL
#include <Modloader/app/structs/QueueUserWorkItemCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_QueueUserWorkItemCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_QueueUserWorkItemCallback_DEFINED) && !defined(IL2CPP_STRUCT_QueueUserWorkItemCallback_FWDDECL)
#include <Modloader/app/structs/QueueUserWorkItemCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QueueUserWorkItemCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
