#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AppDomainSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AppDomainSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppDomainSetup_DEFINED)
#include <Modloader/app/structs/AppDomainSetup__Fields.h>
#if defined(IL2CPP_STRUCT_AppDomainSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_AppDomainSetup_DEFINED
struct AppDomainSetup__Class;
struct AppDomainSetup {
    struct AppDomainSetup__Class* klass;
    MonitorData* monitor;
    struct AppDomainSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AppDomainSetup_FWDDECL)
#define IL2CPP_STRUCT_AppDomainSetup_FWDDECL
#include <Modloader/app/structs/AppDomainSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_AppDomainSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppDomainSetup_DEFINED) && !defined(IL2CPP_STRUCT_AppDomainSetup_FWDDECL)
#include <Modloader/app/structs/AppDomainSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AppDomainSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
