#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SystemNetworkCredential_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SystemNetworkCredential_INITIALIZING
#if !defined(IL2CPP_STRUCT_SystemNetworkCredential_DEFINED)
#include <Modloader/app/structs/SystemNetworkCredential__Fields.h>
#if defined(IL2CPP_STRUCT_SystemNetworkCredential__Fields_DEFINED)
#define IL2CPP_STRUCT_SystemNetworkCredential_DEFINED
struct SystemNetworkCredential__Class;
struct SystemNetworkCredential {
    struct SystemNetworkCredential__Class* klass;
    MonitorData* monitor;
    struct SystemNetworkCredential__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SystemNetworkCredential_FWDDECL)
#define IL2CPP_STRUCT_SystemNetworkCredential_FWDDECL
#include <Modloader/app/structs/SystemNetworkCredential__Class.h>
#endif
#undef IL2CPP_STRUCT_SystemNetworkCredential_INITIALIZING
#if !defined(IL2CPP_STRUCT_SystemNetworkCredential_DEFINED) && !defined(IL2CPP_STRUCT_SystemNetworkCredential_FWDDECL)
#include <Modloader/app/structs/SystemNetworkCredential.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SystemNetworkCredential.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
