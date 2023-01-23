#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RequestCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RequestCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCallback_DEFINED)
#include <Modloader/app/structs/RequestCallback__Fields.h>
#if defined(IL2CPP_STRUCT_RequestCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_RequestCallback_DEFINED
struct RequestCallback__Class;
struct RequestCallback {
    struct RequestCallback__Class* klass;
    MonitorData* monitor;
    struct RequestCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RequestCallback_FWDDECL)
#define IL2CPP_STRUCT_RequestCallback_FWDDECL
#include <Modloader/app/structs/RequestCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_RequestCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequestCallback_DEFINED) && !defined(IL2CPP_STRUCT_RequestCallback_FWDDECL)
#include <Modloader/app/structs/RequestCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RequestCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
