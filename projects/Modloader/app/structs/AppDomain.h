#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AppDomain_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AppDomain_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppDomain_DEFINED)
#include <Modloader/app/structs/AppDomain__Fields.h>
#if defined(IL2CPP_STRUCT_AppDomain__Fields_DEFINED)
#define IL2CPP_STRUCT_AppDomain_DEFINED
struct AppDomain__Class;
struct AppDomain {
    struct AppDomain__Class* klass;
    MonitorData* monitor;
    struct AppDomain__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AppDomain_FWDDECL)
#define IL2CPP_STRUCT_AppDomain_FWDDECL
#include <Modloader/app/structs/AppDomain__Class.h>
#endif
#undef IL2CPP_STRUCT_AppDomain_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppDomain_DEFINED) && !defined(IL2CPP_STRUCT_AppDomain_FWDDECL)
#include <Modloader/app/structs/AppDomain.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AppDomain.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
