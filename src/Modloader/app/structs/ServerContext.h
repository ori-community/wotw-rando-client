#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerContext_DEFINED)
#include <Modloader/app/structs/ServerContext__Fields.h>
#if defined(IL2CPP_STRUCT_ServerContext__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerContext_DEFINED
struct ServerContext__Class;
struct ServerContext {
    struct ServerContext__Class* klass;
    MonitorData* monitor;
    struct ServerContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerContext_FWDDECL)
#define IL2CPP_STRUCT_ServerContext_FWDDECL
#include <Modloader/app/structs/ServerContext__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerContext_DEFINED) && !defined(IL2CPP_STRUCT_ServerContext_FWDDECL)
#include <Modloader/app/structs/ServerContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
