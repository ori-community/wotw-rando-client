#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PayForPurchaseRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PayForPurchaseRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_PayForPurchaseRequest_DEFINED)
#include <Modloader/app/structs/PayForPurchaseRequest__Fields.h>
#if defined(IL2CPP_STRUCT_PayForPurchaseRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_PayForPurchaseRequest_DEFINED
struct PayForPurchaseRequest__Class;
struct PayForPurchaseRequest {
    struct PayForPurchaseRequest__Class* klass;
    MonitorData* monitor;
    struct PayForPurchaseRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PayForPurchaseRequest_FWDDECL)
#define IL2CPP_STRUCT_PayForPurchaseRequest_FWDDECL
#include <Modloader/app/structs/PayForPurchaseRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_PayForPurchaseRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_PayForPurchaseRequest_DEFINED) && !defined(IL2CPP_STRUCT_PayForPurchaseRequest_FWDDECL)
#include <Modloader/app/structs/PayForPurchaseRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PayForPurchaseRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
