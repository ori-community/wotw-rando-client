#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConfirmPurchaseRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConfirmPurchaseRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfirmPurchaseRequest_DEFINED)
#include <Modloader/app/structs/ConfirmPurchaseRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ConfirmPurchaseRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ConfirmPurchaseRequest_DEFINED
struct ConfirmPurchaseRequest__Class;
struct ConfirmPurchaseRequest {
    struct ConfirmPurchaseRequest__Class* klass;
    MonitorData* monitor;
    struct ConfirmPurchaseRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConfirmPurchaseRequest_FWDDECL)
#define IL2CPP_STRUCT_ConfirmPurchaseRequest_FWDDECL
#include <Modloader/app/structs/ConfirmPurchaseRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ConfirmPurchaseRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfirmPurchaseRequest_DEFINED) && !defined(IL2CPP_STRUCT_ConfirmPurchaseRequest_FWDDECL)
#include <Modloader/app/structs/ConfirmPurchaseRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConfirmPurchaseRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
