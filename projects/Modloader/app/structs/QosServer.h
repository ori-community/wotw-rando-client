#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QosServer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QosServer_INITIALIZING
#if !defined(IL2CPP_STRUCT_QosServer_DEFINED)
#include <Modloader/app/structs/QosServer__Fields.h>
#if defined(IL2CPP_STRUCT_QosServer__Fields_DEFINED)
#define IL2CPP_STRUCT_QosServer_DEFINED
struct QosServer__Class;
struct QosServer {
    struct QosServer__Class* klass;
    MonitorData* monitor;
    struct QosServer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QosServer_FWDDECL)
#define IL2CPP_STRUCT_QosServer_FWDDECL
#include <Modloader/app/structs/QosServer__Class.h>
#endif
#undef IL2CPP_STRUCT_QosServer_INITIALIZING
#if !defined(IL2CPP_STRUCT_QosServer_DEFINED) && !defined(IL2CPP_STRUCT_QosServer_FWDDECL)
#include <Modloader/app/structs/QosServer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QosServer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
