#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RSAManaged__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RSAManaged__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAManaged__Fields_DEFINED)
#include <Modloader/app/structs/RSA__Fields.h>
#if defined(IL2CPP_STRUCT_RSA__Fields_DEFINED)
#define IL2CPP_STRUCT_RSAManaged__Fields_DEFINED
struct BigInteger;
struct RSAManaged_KeyGeneratedEventHandler;
struct RSAManaged__Fields {
    struct RSA__Fields _;
    bool isCRTpossible;
    bool keyBlinding;
    bool keypairGenerated;
    bool m_disposed;
    struct BigInteger* d;
    struct BigInteger* p;
    struct BigInteger* q;
    struct BigInteger* dp;
    struct BigInteger* dq;
    struct BigInteger* qInv;
    struct BigInteger* n;
    struct BigInteger* e;
    struct RSAManaged_KeyGeneratedEventHandler* KeyGenerated;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RSAManaged__Fields_FWDDECL)
#define IL2CPP_STRUCT_RSAManaged__Fields_FWDDECL
#include <Modloader/app/structs/BigInteger.h>
#include <Modloader/app/structs/RSAManaged_KeyGeneratedEventHandler.h>
#endif
#undef IL2CPP_STRUCT_RSAManaged__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAManaged__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RSAManaged__Fields_FWDDECL)
#include <Modloader/app/structs/RSAManaged__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RSAManaged__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
