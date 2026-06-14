#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientSessionInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientSessionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientSessionInfo_DEFINED)
#include <Modloader/app/structs/ClientSessionInfo__Fields.h>
#if defined(IL2CPP_STRUCT_ClientSessionInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ClientSessionInfo_DEFINED
struct ClientSessionInfo__Class;
struct ClientSessionInfo {
    struct ClientSessionInfo__Class* klass;
    MonitorData* monitor;
    struct ClientSessionInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClientSessionInfo_FWDDECL)
#define IL2CPP_STRUCT_ClientSessionInfo_FWDDECL
#include <Modloader/app/structs/ClientSessionInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_ClientSessionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientSessionInfo_DEFINED) && !defined(IL2CPP_STRUCT_ClientSessionInfo_FWDDECL)
#include <Modloader/app/structs/ClientSessionInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientSessionInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
