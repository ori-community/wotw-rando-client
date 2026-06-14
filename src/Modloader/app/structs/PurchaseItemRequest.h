#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PurchaseItemRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PurchaseItemRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_PurchaseItemRequest_DEFINED)
#include <Modloader/app/structs/PurchaseItemRequest__Fields.h>
#if defined(IL2CPP_STRUCT_PurchaseItemRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_PurchaseItemRequest_DEFINED
struct PurchaseItemRequest__Class;
struct PurchaseItemRequest {
    struct PurchaseItemRequest__Class* klass;
    MonitorData* monitor;
    struct PurchaseItemRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PurchaseItemRequest_FWDDECL)
#define IL2CPP_STRUCT_PurchaseItemRequest_FWDDECL
#include <Modloader/app/structs/PurchaseItemRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_PurchaseItemRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_PurchaseItemRequest_DEFINED) && !defined(IL2CPP_STRUCT_PurchaseItemRequest_FWDDECL)
#include <Modloader/app/structs/PurchaseItemRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PurchaseItemRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
