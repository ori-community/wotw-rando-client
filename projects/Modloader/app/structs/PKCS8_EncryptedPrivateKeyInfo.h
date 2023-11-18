#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo_DEFINED)
#include <Modloader/app/structs/PKCS8_EncryptedPrivateKeyInfo__Fields.h>
#if defined(IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo_DEFINED
struct PKCS8_EncryptedPrivateKeyInfo__Class;
struct PKCS8_EncryptedPrivateKeyInfo {
    struct PKCS8_EncryptedPrivateKeyInfo__Class* klass;
    MonitorData* monitor;
    struct PKCS8_EncryptedPrivateKeyInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo_FWDDECL)
#define IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo_FWDDECL
#include <Modloader/app/structs/PKCS8_EncryptedPrivateKeyInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo_DEFINED) && !defined(IL2CPP_STRUCT_PKCS8_EncryptedPrivateKeyInfo_FWDDECL)
#include <Modloader/app/structs/PKCS8_EncryptedPrivateKeyInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PKCS8_EncryptedPrivateKeyInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
