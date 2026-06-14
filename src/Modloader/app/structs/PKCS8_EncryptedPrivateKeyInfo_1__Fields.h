#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo_1__Fields_DEFINED)
#define IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo_1__Fields_DEFINED
struct String;
struct Byte__Array;
struct __declspec(align(8)) PKCS8_EncryptedPrivateKeyInfo_1__Fields {
    struct String* _algorithm;
    struct Byte__Array* _salt;
    int32_t _iterations;
    struct Byte__Array* _data;
};
#endif
#if !defined(IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo_1__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo_1__Fields_FWDDECL)
#include <Modloader/app/structs/PKCS8_EncryptedPrivateKeyInfo_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PKCS8_EncryptedPrivateKeyInfo_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
