#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerConfigurationProperties__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerConfigurationProperties__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerConfigurationProperties__Boxed_DEFINED)
#include <Modloader/app/structs/ServerConfigurationProperties.h>
#if defined(IL2CPP_STRUCT_ServerConfigurationProperties_DEFINED)
#define IL2CPP_STRUCT_ServerConfigurationProperties__Boxed_DEFINED
struct ServerConfigurationProperties__Class;
struct ServerConfigurationProperties__Boxed {
    struct ServerConfigurationProperties__Class* klass;
    MonitorData* monitor;
    struct ServerConfigurationProperties fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerConfigurationProperties__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ServerConfigurationProperties__Boxed_FWDDECL
#include <Modloader/app/structs/ServerConfigurationProperties__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerConfigurationProperties__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerConfigurationProperties__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ServerConfigurationProperties__Boxed_FWDDECL)
#include <Modloader/app/structs/ServerConfigurationProperties__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerConfigurationProperties__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
