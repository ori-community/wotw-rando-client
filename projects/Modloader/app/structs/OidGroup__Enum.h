#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OidGroup__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OidGroup__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_OidGroup__Enum_DEFINED)
#define IL2CPP_STRUCT_OidGroup__Enum_DEFINED
enum class OidGroup__Enum : int32_t {
    All = 0x00000000,
    HashAlgorithm = 0x00000001,
    EncryptionAlgorithm = 0x00000002,
    PublicKeyAlgorithm = 0x00000003,
    SignatureAlgorithm = 0x00000004,
    Attribute = 0x00000005,
    ExtensionOrAttribute = 0x00000006,
    EnhancedKeyUsage = 0x00000007,
    Policy = 0x00000008,
    Template = 0x00000009,
    KeyDerivationFunction = 0x0000000a,
};
#endif
#if !defined(IL2CPP_STRUCT_OidGroup__Enum_FWDDECL)
#define IL2CPP_STRUCT_OidGroup__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_OidGroup__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_OidGroup__Enum_DEFINED) && !defined(IL2CPP_STRUCT_OidGroup__Enum_FWDDECL)
#include <Modloader/app/structs/OidGroup__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OidGroup__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
