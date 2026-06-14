#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerConfiguration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerConfiguration_DEFINED)
#include <Modloader/app/structs/ServerConfiguration__Fields.h>
#if defined(IL2CPP_STRUCT_ServerConfiguration__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerConfiguration_DEFINED
struct ServerConfiguration__Class;
struct ServerConfiguration {
    struct ServerConfiguration__Class* klass;
    MonitorData* monitor;
    struct ServerConfiguration__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerConfiguration_FWDDECL)
#define IL2CPP_STRUCT_ServerConfiguration_FWDDECL
#include <Modloader/app/structs/ServerConfiguration__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerConfiguration_DEFINED) && !defined(IL2CPP_STRUCT_ServerConfiguration_FWDDECL)
#include <Modloader/app/structs/ServerConfiguration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerConfiguration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
