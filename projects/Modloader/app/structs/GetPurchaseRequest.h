#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPurchaseRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPurchaseRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPurchaseRequest_DEFINED)
#include <Modloader/app/structs/GetPurchaseRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetPurchaseRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPurchaseRequest_DEFINED
struct GetPurchaseRequest__Class;
struct GetPurchaseRequest {
    struct GetPurchaseRequest__Class* klass;
    MonitorData* monitor;
    struct GetPurchaseRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPurchaseRequest_FWDDECL)
#define IL2CPP_STRUCT_GetPurchaseRequest_FWDDECL
#include <Modloader/app/structs/GetPurchaseRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPurchaseRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPurchaseRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetPurchaseRequest_FWDDECL)
#include <Modloader/app/structs/GetPurchaseRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPurchaseRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
