#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValidateWindowsReceiptRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValidateWindowsReceiptRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidateWindowsReceiptRequest_DEFINED)
#include <Modloader/app/structs/ValidateWindowsReceiptRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ValidateWindowsReceiptRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ValidateWindowsReceiptRequest_DEFINED
struct ValidateWindowsReceiptRequest__Class;
struct ValidateWindowsReceiptRequest {
    struct ValidateWindowsReceiptRequest__Class* klass;
    MonitorData* monitor;
    struct ValidateWindowsReceiptRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValidateWindowsReceiptRequest_FWDDECL)
#define IL2CPP_STRUCT_ValidateWindowsReceiptRequest_FWDDECL
#include <Modloader/app/structs/ValidateWindowsReceiptRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ValidateWindowsReceiptRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidateWindowsReceiptRequest_DEFINED) && !defined(IL2CPP_STRUCT_ValidateWindowsReceiptRequest_FWDDECL)
#include <Modloader/app/structs/ValidateWindowsReceiptRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValidateWindowsReceiptRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
