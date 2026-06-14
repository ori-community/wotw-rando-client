#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RSACryptoServiceProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RSACryptoServiceProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSACryptoServiceProvider__Fields_DEFINED)
#include <Modloader/app/structs/RSA__Fields.h>
#if defined(IL2CPP_STRUCT_RSA__Fields_DEFINED)
#define IL2CPP_STRUCT_RSACryptoServiceProvider__Fields_DEFINED
struct KeyPairPersistence;
struct RSAManaged;
struct RSACryptoServiceProvider__Fields {
    struct RSA__Fields _;
    struct KeyPairPersistence* store;
    bool persistKey;
    bool persisted;
    bool privateKeyExportable;
    bool m_disposed;
    struct RSAManaged* rsa;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RSACryptoServiceProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_RSACryptoServiceProvider__Fields_FWDDECL
#include <Modloader/app/structs/KeyPairPersistence.h>
#include <Modloader/app/structs/RSAManaged.h>
#endif
#undef IL2CPP_STRUCT_RSACryptoServiceProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSACryptoServiceProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RSACryptoServiceProvider__Fields_FWDDECL)
#include <Modloader/app/structs/RSACryptoServiceProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RSACryptoServiceProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
