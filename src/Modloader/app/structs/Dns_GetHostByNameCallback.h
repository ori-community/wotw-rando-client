#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dns_GetHostByNameCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dns_GetHostByNameCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dns_GetHostByNameCallback_DEFINED)
#include <Modloader/app/structs/Dns_GetHostByNameCallback__Fields.h>
#if defined(IL2CPP_STRUCT_Dns_GetHostByNameCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_Dns_GetHostByNameCallback_DEFINED
struct Dns_GetHostByNameCallback__Class;
struct Dns_GetHostByNameCallback {
    struct Dns_GetHostByNameCallback__Class* klass;
    MonitorData* monitor;
    struct Dns_GetHostByNameCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Dns_GetHostByNameCallback_FWDDECL)
#define IL2CPP_STRUCT_Dns_GetHostByNameCallback_FWDDECL
#include <Modloader/app/structs/Dns_GetHostByNameCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_Dns_GetHostByNameCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dns_GetHostByNameCallback_DEFINED) && !defined(IL2CPP_STRUCT_Dns_GetHostByNameCallback_FWDDECL)
#include <Modloader/app/structs/Dns_GetHostByNameCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dns_GetHostByNameCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
