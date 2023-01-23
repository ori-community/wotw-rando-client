#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConfirmPurchaseResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConfirmPurchaseResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfirmPurchaseResult_DEFINED)
#include <Modloader/app/structs/ConfirmPurchaseResult__Fields.h>
#if defined(IL2CPP_STRUCT_ConfirmPurchaseResult__Fields_DEFINED)
#define IL2CPP_STRUCT_ConfirmPurchaseResult_DEFINED
struct ConfirmPurchaseResult__Class;
struct ConfirmPurchaseResult {
    struct ConfirmPurchaseResult__Class* klass;
    MonitorData* monitor;
    struct ConfirmPurchaseResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConfirmPurchaseResult_FWDDECL)
#define IL2CPP_STRUCT_ConfirmPurchaseResult_FWDDECL
#include <Modloader/app/structs/ConfirmPurchaseResult__Class.h>
#endif
#undef IL2CPP_STRUCT_ConfirmPurchaseResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfirmPurchaseResult_DEFINED) && !defined(IL2CPP_STRUCT_ConfirmPurchaseResult_FWDDECL)
#include <Modloader/app/structs/ConfirmPurchaseResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConfirmPurchaseResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
