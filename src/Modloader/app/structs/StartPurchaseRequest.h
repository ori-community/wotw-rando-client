#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StartPurchaseRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StartPurchaseRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartPurchaseRequest_DEFINED)
#include <Modloader/app/structs/StartPurchaseRequest__Fields.h>
#if defined(IL2CPP_STRUCT_StartPurchaseRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_StartPurchaseRequest_DEFINED
struct StartPurchaseRequest__Class;
struct StartPurchaseRequest {
    struct StartPurchaseRequest__Class* klass;
    MonitorData* monitor;
    struct StartPurchaseRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StartPurchaseRequest_FWDDECL)
#define IL2CPP_STRUCT_StartPurchaseRequest_FWDDECL
#include <Modloader/app/structs/StartPurchaseRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_StartPurchaseRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartPurchaseRequest_DEFINED) && !defined(IL2CPP_STRUCT_StartPurchaseRequest_FWDDECL)
#include <Modloader/app/structs/StartPurchaseRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StartPurchaseRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
