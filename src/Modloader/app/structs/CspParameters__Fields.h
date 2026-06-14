#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CspParameters__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CspParameters__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CspParameters__Fields_DEFINED)
#define IL2CPP_STRUCT_CspParameters__Fields_DEFINED
struct String;
struct CryptoKeySecurity;
struct SecureString;
struct __declspec(align(8)) CspParameters__Fields {
    int32_t ProviderType;
    struct String* ProviderName;
    struct String* KeyContainerName;
    int32_t KeyNumber;
    int32_t m_flags;
    struct CryptoKeySecurity* m_cryptoKeySecurity;
    struct SecureString* m_keyPassword;
    void* m_parentWindowHandle;
};
#endif
#if !defined(IL2CPP_STRUCT_CspParameters__Fields_FWDDECL)
#define IL2CPP_STRUCT_CspParameters__Fields_FWDDECL
#include <Modloader/app/structs/CryptoKeySecurity.h>
#include <Modloader/app/structs/SecureString.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CspParameters__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CspParameters__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CspParameters__Fields_FWDDECL)
#include <Modloader/app/structs/CspParameters__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CspParameters__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
