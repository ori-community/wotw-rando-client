#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PayForPurchaseResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PayForPurchaseResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_PayForPurchaseResult_DEFINED)
#include <Modloader/app/structs/PayForPurchaseResult__Fields.h>
#if defined(IL2CPP_STRUCT_PayForPurchaseResult__Fields_DEFINED)
#define IL2CPP_STRUCT_PayForPurchaseResult_DEFINED
struct PayForPurchaseResult__Class;
struct PayForPurchaseResult {
    struct PayForPurchaseResult__Class* klass;
    MonitorData* monitor;
    struct PayForPurchaseResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PayForPurchaseResult_FWDDECL)
#define IL2CPP_STRUCT_PayForPurchaseResult_FWDDECL
#include <Modloader/app/structs/PayForPurchaseResult__Class.h>
#endif
#undef IL2CPP_STRUCT_PayForPurchaseResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_PayForPurchaseResult_DEFINED) && !defined(IL2CPP_STRUCT_PayForPurchaseResult_FWDDECL)
#include <Modloader/app/structs/PayForPurchaseResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PayForPurchaseResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
