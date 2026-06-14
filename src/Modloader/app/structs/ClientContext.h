#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientContext_DEFINED)
#include <Modloader/app/structs/ClientContext__Fields.h>
#if defined(IL2CPP_STRUCT_ClientContext__Fields_DEFINED)
#define IL2CPP_STRUCT_ClientContext_DEFINED
struct ClientContext__Class;
struct ClientContext {
    struct ClientContext__Class* klass;
    MonitorData* monitor;
    struct ClientContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClientContext_FWDDECL)
#define IL2CPP_STRUCT_ClientContext_FWDDECL
#include <Modloader/app/structs/ClientContext__Class.h>
#endif
#undef IL2CPP_STRUCT_ClientContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientContext_DEFINED) && !defined(IL2CPP_STRUCT_ClientContext_FWDDECL)
#include <Modloader/app/structs/ClientContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
