#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PKCS7_EncryptedData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PKCS7_EncryptedData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS7_EncryptedData_DEFINED)
#include <Modloader/app/structs/PKCS7_EncryptedData__Fields.h>
#if defined(IL2CPP_STRUCT_PKCS7_EncryptedData__Fields_DEFINED)
#define IL2CPP_STRUCT_PKCS7_EncryptedData_DEFINED
struct PKCS7_EncryptedData__Class;
struct PKCS7_EncryptedData {
    struct PKCS7_EncryptedData__Class* klass;
    MonitorData* monitor;
    struct PKCS7_EncryptedData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PKCS7_EncryptedData_FWDDECL)
#define IL2CPP_STRUCT_PKCS7_EncryptedData_FWDDECL
#include <Modloader/app/structs/PKCS7_EncryptedData__Class.h>
#endif
#undef IL2CPP_STRUCT_PKCS7_EncryptedData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS7_EncryptedData_DEFINED) && !defined(IL2CPP_STRUCT_PKCS7_EncryptedData_FWDDECL)
#include <Modloader/app/structs/PKCS7_EncryptedData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PKCS7_EncryptedData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
