#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RSAEncryptionPadding__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RSAEncryptionPadding__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAEncryptionPadding__StaticFields_DEFINED)
#define IL2CPP_STRUCT_RSAEncryptionPadding__StaticFields_DEFINED
struct RSAEncryptionPadding;
struct RSAEncryptionPadding__StaticFields {
    struct RSAEncryptionPadding* s_pkcs1;
    struct RSAEncryptionPadding* s_oaepSHA1;
    struct RSAEncryptionPadding* s_oaepSHA256;
    struct RSAEncryptionPadding* s_oaepSHA384;
    struct RSAEncryptionPadding* s_oaepSHA512;
};
#endif
#if !defined(IL2CPP_STRUCT_RSAEncryptionPadding__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RSAEncryptionPadding__StaticFields_FWDDECL
#include <Modloader/app/structs/RSAEncryptionPadding.h>
#endif
#undef IL2CPP_STRUCT_RSAEncryptionPadding__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAEncryptionPadding__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RSAEncryptionPadding__StaticFields_FWDDECL)
#include <Modloader/app/structs/RSAEncryptionPadding__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RSAEncryptionPadding__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
