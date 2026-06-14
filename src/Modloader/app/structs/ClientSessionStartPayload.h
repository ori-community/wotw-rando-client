#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientSessionStartPayload_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientSessionStartPayload_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientSessionStartPayload_DEFINED)
#include <Modloader/app/structs/ClientSessionStartPayload__Fields.h>
#if defined(IL2CPP_STRUCT_ClientSessionStartPayload__Fields_DEFINED)
#define IL2CPP_STRUCT_ClientSessionStartPayload_DEFINED
struct ClientSessionStartPayload__Class;
struct ClientSessionStartPayload {
    struct ClientSessionStartPayload__Class* klass;
    MonitorData* monitor;
    struct ClientSessionStartPayload__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClientSessionStartPayload_FWDDECL)
#define IL2CPP_STRUCT_ClientSessionStartPayload_FWDDECL
#include <Modloader/app/structs/ClientSessionStartPayload__Class.h>
#endif
#undef IL2CPP_STRUCT_ClientSessionStartPayload_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientSessionStartPayload_DEFINED) && !defined(IL2CPP_STRUCT_ClientSessionStartPayload_FWDDECL)
#include <Modloader/app/structs/ClientSessionStartPayload.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientSessionStartPayload.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
