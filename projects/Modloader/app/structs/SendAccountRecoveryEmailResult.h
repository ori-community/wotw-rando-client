#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SendAccountRecoveryEmailResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SendAccountRecoveryEmailResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendAccountRecoveryEmailResult_DEFINED)
#include <Modloader/app/structs/SendAccountRecoveryEmailResult__Fields.h>
#if defined(IL2CPP_STRUCT_SendAccountRecoveryEmailResult__Fields_DEFINED)
#define IL2CPP_STRUCT_SendAccountRecoveryEmailResult_DEFINED
struct SendAccountRecoveryEmailResult__Class;
struct SendAccountRecoveryEmailResult {
    struct SendAccountRecoveryEmailResult__Class* klass;
    MonitorData* monitor;
    struct SendAccountRecoveryEmailResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SendAccountRecoveryEmailResult_FWDDECL)
#define IL2CPP_STRUCT_SendAccountRecoveryEmailResult_FWDDECL
#include <Modloader/app/structs/SendAccountRecoveryEmailResult__Class.h>
#endif
#undef IL2CPP_STRUCT_SendAccountRecoveryEmailResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendAccountRecoveryEmailResult_DEFINED) && !defined(IL2CPP_STRUCT_SendAccountRecoveryEmailResult_FWDDECL)
#include <Modloader/app/structs/SendAccountRecoveryEmailResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SendAccountRecoveryEmailResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
