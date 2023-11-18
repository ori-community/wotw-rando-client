#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PKCS7_EncryptedData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PKCS7_EncryptedData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS7_EncryptedData__Fields_DEFINED)
#define IL2CPP_STRUCT_PKCS7_EncryptedData__Fields_DEFINED
struct PKCS7_ContentInfo;
struct Byte__Array;
struct __declspec(align(8)) PKCS7_EncryptedData__Fields {
    uint8_t _version;
    struct PKCS7_ContentInfo* _content;
    struct PKCS7_ContentInfo* _encryptionAlgorithm;
    struct Byte__Array* _encrypted;
};
#endif
#if !defined(IL2CPP_STRUCT_PKCS7_EncryptedData__Fields_FWDDECL)
#define IL2CPP_STRUCT_PKCS7_EncryptedData__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/PKCS7_ContentInfo.h>
#endif
#undef IL2CPP_STRUCT_PKCS7_EncryptedData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS7_EncryptedData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PKCS7_EncryptedData__Fields_FWDDECL)
#include <Modloader/app/structs/PKCS7_EncryptedData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PKCS7_EncryptedData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
