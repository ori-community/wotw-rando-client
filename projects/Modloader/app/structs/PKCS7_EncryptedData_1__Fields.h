#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PKCS7_EncryptedData_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PKCS7_EncryptedData_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS7_EncryptedData_1__Fields_DEFINED)
#define IL2CPP_STRUCT_PKCS7_EncryptedData_1__Fields_DEFINED
struct PKCS7_ContentInfo_1;
struct Byte__Array;
struct __declspec(align(8)) PKCS7_EncryptedData_1__Fields {
    uint8_t _version;
    struct PKCS7_ContentInfo_1* _content;
    struct PKCS7_ContentInfo_1* _encryptionAlgorithm;
    struct Byte__Array* _encrypted;
};
#endif
#if !defined(IL2CPP_STRUCT_PKCS7_EncryptedData_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_PKCS7_EncryptedData_1__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/PKCS7_ContentInfo_1.h>
#endif
#undef IL2CPP_STRUCT_PKCS7_EncryptedData_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS7_EncryptedData_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PKCS7_EncryptedData_1__Fields_FWDDECL)
#include <Modloader/app/structs/PKCS7_EncryptedData_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PKCS7_EncryptedData_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
