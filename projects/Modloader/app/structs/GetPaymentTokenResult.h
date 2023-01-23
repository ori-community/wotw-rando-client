#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPaymentTokenResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPaymentTokenResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPaymentTokenResult_DEFINED)
#include <Modloader/app/structs/GetPaymentTokenResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetPaymentTokenResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPaymentTokenResult_DEFINED
struct GetPaymentTokenResult__Class;
struct GetPaymentTokenResult {
    struct GetPaymentTokenResult__Class* klass;
    MonitorData* monitor;
    struct GetPaymentTokenResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPaymentTokenResult_FWDDECL)
#define IL2CPP_STRUCT_GetPaymentTokenResult_FWDDECL
#include <Modloader/app/structs/GetPaymentTokenResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPaymentTokenResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPaymentTokenResult_DEFINED) && !defined(IL2CPP_STRUCT_GetPaymentTokenResult_FWDDECL)
#include <Modloader/app/structs/GetPaymentTokenResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPaymentTokenResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
