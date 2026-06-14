#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ItemPurchaseRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ItemPurchaseRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ItemPurchaseRequest_DEFINED)
#include <Modloader/app/structs/ItemPurchaseRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ItemPurchaseRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ItemPurchaseRequest_DEFINED
struct ItemPurchaseRequest__Class;
struct ItemPurchaseRequest {
    struct ItemPurchaseRequest__Class* klass;
    MonitorData* monitor;
    struct ItemPurchaseRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ItemPurchaseRequest_FWDDECL)
#define IL2CPP_STRUCT_ItemPurchaseRequest_FWDDECL
#include <Modloader/app/structs/ItemPurchaseRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ItemPurchaseRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ItemPurchaseRequest_DEFINED) && !defined(IL2CPP_STRUCT_ItemPurchaseRequest_FWDDECL)
#include <Modloader/app/structs/ItemPurchaseRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ItemPurchaseRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
