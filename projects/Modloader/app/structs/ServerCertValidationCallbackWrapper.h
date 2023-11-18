#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerCertValidationCallbackWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerCertValidationCallbackWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerCertValidationCallbackWrapper_DEFINED)
#include <Modloader/app/structs/ServerCertValidationCallbackWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_ServerCertValidationCallbackWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerCertValidationCallbackWrapper_DEFINED
struct ServerCertValidationCallbackWrapper__Class;
struct ServerCertValidationCallbackWrapper {
    struct ServerCertValidationCallbackWrapper__Class* klass;
    MonitorData* monitor;
    struct ServerCertValidationCallbackWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerCertValidationCallbackWrapper_FWDDECL)
#define IL2CPP_STRUCT_ServerCertValidationCallbackWrapper_FWDDECL
#include <Modloader/app/structs/ServerCertValidationCallbackWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerCertValidationCallbackWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerCertValidationCallbackWrapper_DEFINED) && !defined(IL2CPP_STRUCT_ServerCertValidationCallbackWrapper_FWDDECL)
#include <Modloader/app/structs/ServerCertValidationCallbackWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerCertValidationCallbackWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
