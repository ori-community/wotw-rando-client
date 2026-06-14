#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AppDomainLevelActivator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AppDomainLevelActivator_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppDomainLevelActivator_DEFINED)
#include <Modloader/app/structs/AppDomainLevelActivator__Fields.h>
#if defined(IL2CPP_STRUCT_AppDomainLevelActivator__Fields_DEFINED)
#define IL2CPP_STRUCT_AppDomainLevelActivator_DEFINED
struct AppDomainLevelActivator__Class;
struct AppDomainLevelActivator {
    struct AppDomainLevelActivator__Class* klass;
    MonitorData* monitor;
    struct AppDomainLevelActivator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AppDomainLevelActivator_FWDDECL)
#define IL2CPP_STRUCT_AppDomainLevelActivator_FWDDECL
#include <Modloader/app/structs/AppDomainLevelActivator__Class.h>
#endif
#undef IL2CPP_STRUCT_AppDomainLevelActivator_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppDomainLevelActivator_DEFINED) && !defined(IL2CPP_STRUCT_AppDomainLevelActivator_FWDDECL)
#include <Modloader/app/structs/AppDomainLevelActivator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AppDomainLevelActivator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
