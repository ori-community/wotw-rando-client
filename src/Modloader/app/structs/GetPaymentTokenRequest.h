#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPaymentTokenRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPaymentTokenRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPaymentTokenRequest_DEFINED)
#include <Modloader/app/structs/GetPaymentTokenRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetPaymentTokenRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPaymentTokenRequest_DEFINED
struct GetPaymentTokenRequest__Class;
struct GetPaymentTokenRequest {
    struct GetPaymentTokenRequest__Class* klass;
    MonitorData* monitor;
    struct GetPaymentTokenRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPaymentTokenRequest_FWDDECL)
#define IL2CPP_STRUCT_GetPaymentTokenRequest_FWDDECL
#include <Modloader/app/structs/GetPaymentTokenRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPaymentTokenRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPaymentTokenRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetPaymentTokenRequest_FWDDECL)
#include <Modloader/app/structs/GetPaymentTokenRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPaymentTokenRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
