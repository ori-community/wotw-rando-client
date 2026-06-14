#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValidateIOSReceiptRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValidateIOSReceiptRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidateIOSReceiptRequest_DEFINED)
#include <Modloader/app/structs/ValidateIOSReceiptRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ValidateIOSReceiptRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ValidateIOSReceiptRequest_DEFINED
struct ValidateIOSReceiptRequest__Class;
struct ValidateIOSReceiptRequest {
    struct ValidateIOSReceiptRequest__Class* klass;
    MonitorData* monitor;
    struct ValidateIOSReceiptRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValidateIOSReceiptRequest_FWDDECL)
#define IL2CPP_STRUCT_ValidateIOSReceiptRequest_FWDDECL
#include <Modloader/app/structs/ValidateIOSReceiptRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ValidateIOSReceiptRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidateIOSReceiptRequest_DEFINED) && !defined(IL2CPP_STRUCT_ValidateIOSReceiptRequest_FWDDECL)
#include <Modloader/app/structs/ValidateIOSReceiptRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValidateIOSReceiptRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
