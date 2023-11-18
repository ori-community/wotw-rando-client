#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CipherSuite__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CipherSuite__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CipherSuite__Fields_DEFINED)
#include <Modloader/app/structs/CipherAlgorithmType__Enum.h>
#include <Modloader/app/structs/CipherMode__Enum.h>
#include <Modloader/app/structs/ExchangeAlgorithmType__Enum.h>
#include <Modloader/app/structs/HashAlgorithmType__Enum.h>
#if defined(IL2CPP_STRUCT_CipherAlgorithmType__Enum_DEFINED) && defined(IL2CPP_STRUCT_HashAlgorithmType__Enum_DEFINED) && defined(IL2CPP_STRUCT_ExchangeAlgorithmType__Enum_DEFINED) && defined(IL2CPP_STRUCT_CipherMode__Enum_DEFINED)
#define IL2CPP_STRUCT_CipherSuite__Fields_DEFINED
struct String;
struct Context_1;
struct SymmetricAlgorithm;
struct ICryptoTransform;
struct KeyedHashAlgorithm;
struct __declspec(align(8)) CipherSuite__Fields {
    int16_t code;
    struct String* name;
    CipherAlgorithmType__Enum cipherAlgorithmType;

    HashAlgorithmType__Enum hashAlgorithmType;

    ExchangeAlgorithmType__Enum exchangeAlgorithmType;

    bool isExportable;
    CipherMode__Enum cipherMode;

    uint8_t keyMaterialSize;
    int32_t keyBlockSize;
    uint8_t expandedKeyMaterialSize;
    int16_t effectiveKeyBits;
    uint8_t ivSize;
    uint8_t blockSize;
    struct Context_1* context;
    struct SymmetricAlgorithm* encryptionAlgorithm;
    struct ICryptoTransform* encryptionCipher;
    struct SymmetricAlgorithm* decryptionAlgorithm;
    struct ICryptoTransform* decryptionCipher;
    struct KeyedHashAlgorithm* clientHMAC;
    struct KeyedHashAlgorithm* serverHMAC;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CipherSuite__Fields_FWDDECL)
#define IL2CPP_STRUCT_CipherSuite__Fields_FWDDECL
#include <Modloader/app/structs/Context_1.h>
#include <Modloader/app/structs/ICryptoTransform.h>
#include <Modloader/app/structs/KeyedHashAlgorithm.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SymmetricAlgorithm.h>
#endif
#undef IL2CPP_STRUCT_CipherSuite__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CipherSuite__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CipherSuite__Fields_FWDDECL)
#include <Modloader/app/structs/CipherSuite__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CipherSuite__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
