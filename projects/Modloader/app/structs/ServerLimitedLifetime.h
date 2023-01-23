#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerLimitedLifetime_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerLimitedLifetime_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerLimitedLifetime_DEFINED)
#include <Modloader/app/structs/ServerLimitedLifetime__Fields.h>
#if defined(IL2CPP_STRUCT_ServerLimitedLifetime__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerLimitedLifetime_DEFINED
struct ServerLimitedLifetime__Class;
struct ServerLimitedLifetime {
    struct ServerLimitedLifetime__Class* klass;
    MonitorData* monitor;
    struct ServerLimitedLifetime__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerLimitedLifetime_FWDDECL)
#define IL2CPP_STRUCT_ServerLimitedLifetime_FWDDECL
#include <Modloader/app/structs/ServerLimitedLifetime__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerLimitedLifetime_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerLimitedLifetime_DEFINED) && !defined(IL2CPP_STRUCT_ServerLimitedLifetime_FWDDECL)
#include <Modloader/app/structs/ServerLimitedLifetime.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerLimitedLifetime.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
