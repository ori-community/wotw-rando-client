#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dns_ResolveCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dns_ResolveCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dns_ResolveCallback_DEFINED)
#include <Modloader/app/structs/Dns_ResolveCallback__Fields.h>
#if defined(IL2CPP_STRUCT_Dns_ResolveCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_Dns_ResolveCallback_DEFINED
struct Dns_ResolveCallback__Class;
struct Dns_ResolveCallback {
    struct Dns_ResolveCallback__Class* klass;
    MonitorData* monitor;
    struct Dns_ResolveCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Dns_ResolveCallback_FWDDECL)
#define IL2CPP_STRUCT_Dns_ResolveCallback_FWDDECL
#include <Modloader/app/structs/Dns_ResolveCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_Dns_ResolveCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dns_ResolveCallback_DEFINED) && !defined(IL2CPP_STRUCT_Dns_ResolveCallback_FWDDECL)
#include <Modloader/app/structs/Dns_ResolveCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dns_ResolveCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
