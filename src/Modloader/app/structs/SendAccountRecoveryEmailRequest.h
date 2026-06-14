#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SendAccountRecoveryEmailRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SendAccountRecoveryEmailRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendAccountRecoveryEmailRequest_DEFINED)
#include <Modloader/app/structs/SendAccountRecoveryEmailRequest__Fields.h>
#if defined(IL2CPP_STRUCT_SendAccountRecoveryEmailRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_SendAccountRecoveryEmailRequest_DEFINED
struct SendAccountRecoveryEmailRequest__Class;
struct SendAccountRecoveryEmailRequest {
    struct SendAccountRecoveryEmailRequest__Class* klass;
    MonitorData* monitor;
    struct SendAccountRecoveryEmailRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SendAccountRecoveryEmailRequest_FWDDECL)
#define IL2CPP_STRUCT_SendAccountRecoveryEmailRequest_FWDDECL
#include <Modloader/app/structs/SendAccountRecoveryEmailRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_SendAccountRecoveryEmailRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendAccountRecoveryEmailRequest_DEFINED) && !defined(IL2CPP_STRUCT_SendAccountRecoveryEmailRequest_FWDDECL)
#include <Modloader/app/structs/SendAccountRecoveryEmailRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SendAccountRecoveryEmailRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
