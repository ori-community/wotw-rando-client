#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PurchaseItemResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PurchaseItemResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_PurchaseItemResult_DEFINED)
#include <Modloader/app/structs/PurchaseItemResult__Fields.h>
#if defined(IL2CPP_STRUCT_PurchaseItemResult__Fields_DEFINED)
#define IL2CPP_STRUCT_PurchaseItemResult_DEFINED
struct PurchaseItemResult__Class;
struct PurchaseItemResult {
    struct PurchaseItemResult__Class* klass;
    MonitorData* monitor;
    struct PurchaseItemResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PurchaseItemResult_FWDDECL)
#define IL2CPP_STRUCT_PurchaseItemResult_FWDDECL
#include <Modloader/app/structs/PurchaseItemResult__Class.h>
#endif
#undef IL2CPP_STRUCT_PurchaseItemResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_PurchaseItemResult_DEFINED) && !defined(IL2CPP_STRUCT_PurchaseItemResult_FWDDECL)
#include <Modloader/app/structs/PurchaseItemResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PurchaseItemResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
