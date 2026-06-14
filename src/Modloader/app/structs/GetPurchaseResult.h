#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPurchaseResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPurchaseResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPurchaseResult_DEFINED)
#include <Modloader/app/structs/GetPurchaseResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetPurchaseResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPurchaseResult_DEFINED
struct GetPurchaseResult__Class;
struct GetPurchaseResult {
    struct GetPurchaseResult__Class* klass;
    MonitorData* monitor;
    struct GetPurchaseResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPurchaseResult_FWDDECL)
#define IL2CPP_STRUCT_GetPurchaseResult_FWDDECL
#include <Modloader/app/structs/GetPurchaseResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPurchaseResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPurchaseResult_DEFINED) && !defined(IL2CPP_STRUCT_GetPurchaseResult_FWDDECL)
#include <Modloader/app/structs/GetPurchaseResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPurchaseResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
