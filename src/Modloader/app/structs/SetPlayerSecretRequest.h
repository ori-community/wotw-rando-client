#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetPlayerSecretRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetPlayerSecretRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetPlayerSecretRequest_DEFINED)
#include <Modloader/app/structs/SetPlayerSecretRequest__Fields.h>
#if defined(IL2CPP_STRUCT_SetPlayerSecretRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_SetPlayerSecretRequest_DEFINED
struct SetPlayerSecretRequest__Class;
struct SetPlayerSecretRequest {
    struct SetPlayerSecretRequest__Class* klass;
    MonitorData* monitor;
    struct SetPlayerSecretRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetPlayerSecretRequest_FWDDECL)
#define IL2CPP_STRUCT_SetPlayerSecretRequest_FWDDECL
#include <Modloader/app/structs/SetPlayerSecretRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_SetPlayerSecretRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetPlayerSecretRequest_DEFINED) && !defined(IL2CPP_STRUCT_SetPlayerSecretRequest_FWDDECL)
#include <Modloader/app/structs/SetPlayerSecretRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetPlayerSecretRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
