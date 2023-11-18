#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DSACryptoServiceProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DSACryptoServiceProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSACryptoServiceProvider__Fields_DEFINED)
#include <Modloader/app/structs/DSA__Fields.h>
#if defined(IL2CPP_STRUCT_DSA__Fields_DEFINED)
#define IL2CPP_STRUCT_DSACryptoServiceProvider__Fields_DEFINED
struct KeyPairPersistence;
struct DSAManaged;
struct DSACryptoServiceProvider__Fields {
    struct DSA__Fields _;
    struct KeyPairPersistence* store;
    bool persistKey;
    bool persisted;
    bool privateKeyExportable;
    bool m_disposed;
    struct DSAManaged* dsa;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DSACryptoServiceProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_DSACryptoServiceProvider__Fields_FWDDECL
#include <Modloader/app/structs/DSAManaged.h>
#include <Modloader/app/structs/KeyPairPersistence.h>
#endif
#undef IL2CPP_STRUCT_DSACryptoServiceProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSACryptoServiceProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DSACryptoServiceProvider__Fields_FWDDECL)
#include <Modloader/app/structs/DSACryptoServiceProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DSACryptoServiceProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
