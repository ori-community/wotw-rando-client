#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuthTokenValidatedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuthTokenValidatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthTokenValidatedEventData_DEFINED)
#include <Modloader/app/structs/AuthTokenValidatedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_AuthTokenValidatedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_AuthTokenValidatedEventData_DEFINED
struct AuthTokenValidatedEventData__Class;
struct AuthTokenValidatedEventData {
    struct AuthTokenValidatedEventData__Class* klass;
    MonitorData* monitor;
    struct AuthTokenValidatedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AuthTokenValidatedEventData_FWDDECL)
#define IL2CPP_STRUCT_AuthTokenValidatedEventData_FWDDECL
#include <Modloader/app/structs/AuthTokenValidatedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_AuthTokenValidatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthTokenValidatedEventData_DEFINED) && !defined(IL2CPP_STRUCT_AuthTokenValidatedEventData_FWDDECL)
#include <Modloader/app/structs/AuthTokenValidatedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuthTokenValidatedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
