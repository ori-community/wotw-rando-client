#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerCertValidationCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerCertValidationCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerCertValidationCallback_DEFINED)
#include <Modloader/app/structs/ServerCertValidationCallback__Fields.h>
#if defined(IL2CPP_STRUCT_ServerCertValidationCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerCertValidationCallback_DEFINED
struct ServerCertValidationCallback__Class;
struct ServerCertValidationCallback {
    struct ServerCertValidationCallback__Class* klass;
    MonitorData* monitor;
    struct ServerCertValidationCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerCertValidationCallback_FWDDECL)
#define IL2CPP_STRUCT_ServerCertValidationCallback_FWDDECL
#include <Modloader/app/structs/ServerCertValidationCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerCertValidationCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerCertValidationCallback_DEFINED) && !defined(IL2CPP_STRUCT_ServerCertValidationCallback_FWDDECL)
#include <Modloader/app/structs/ServerCertValidationCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerCertValidationCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
