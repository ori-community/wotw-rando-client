#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AppDomainUnloadedException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AppDomainUnloadedException_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppDomainUnloadedException_DEFINED)
#include <Modloader/app/structs/AppDomainUnloadedException__Fields.h>
#if defined(IL2CPP_STRUCT_AppDomainUnloadedException__Fields_DEFINED)
#define IL2CPP_STRUCT_AppDomainUnloadedException_DEFINED
struct AppDomainUnloadedException__Class;
struct AppDomainUnloadedException {
    struct AppDomainUnloadedException__Class* klass;
    MonitorData* monitor;
    struct AppDomainUnloadedException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AppDomainUnloadedException_FWDDECL)
#define IL2CPP_STRUCT_AppDomainUnloadedException_FWDDECL
#include <Modloader/app/structs/AppDomainUnloadedException__Class.h>
#endif
#undef IL2CPP_STRUCT_AppDomainUnloadedException_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppDomainUnloadedException_DEFINED) && !defined(IL2CPP_STRUCT_AppDomainUnloadedException_FWDDECL)
#include <Modloader/app/structs/AppDomainUnloadedException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AppDomainUnloadedException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
