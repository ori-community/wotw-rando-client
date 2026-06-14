#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RSAEncryptionPadding__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RSAEncryptionPadding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAEncryptionPadding__Fields_DEFINED)
#include <Modloader/app/structs/HashAlgorithmName.h>
#include <Modloader/app/structs/RSAEncryptionPaddingMode__Enum.h>
#if defined(IL2CPP_STRUCT_RSAEncryptionPaddingMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_HashAlgorithmName_DEFINED)
#define IL2CPP_STRUCT_RSAEncryptionPadding__Fields_DEFINED
struct __declspec(align(8)) RSAEncryptionPadding__Fields {
    RSAEncryptionPaddingMode__Enum _mode;

    struct HashAlgorithmName _oaepHashAlgorithm;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RSAEncryptionPadding__Fields_FWDDECL)
#define IL2CPP_STRUCT_RSAEncryptionPadding__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_RSAEncryptionPadding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAEncryptionPadding__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RSAEncryptionPadding__Fields_FWDDECL)
#include <Modloader/app/structs/RSAEncryptionPadding__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RSAEncryptionPadding__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
