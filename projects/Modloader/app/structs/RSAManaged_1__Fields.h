#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RSAManaged_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RSAManaged_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAManaged_1__Fields_DEFINED)
#include <Modloader/app/structs/RSA__Fields.h>
#if defined(IL2CPP_STRUCT_RSA__Fields_DEFINED)
#define IL2CPP_STRUCT_RSAManaged_1__Fields_DEFINED
struct BigInteger_1;
struct RSAManaged_KeyGeneratedEventHandler_1;
struct RSAManaged_1__Fields {
    struct RSA__Fields _;
    bool isCRTpossible;
    bool keyBlinding;
    bool keypairGenerated;
    bool m_disposed;
    struct BigInteger_1* d;
    struct BigInteger_1* p;
    struct BigInteger_1* q;
    struct BigInteger_1* dp;
    struct BigInteger_1* dq;
    struct BigInteger_1* qInv;
    struct BigInteger_1* n;
    struct BigInteger_1* e;
    struct RSAManaged_KeyGeneratedEventHandler_1* KeyGenerated;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RSAManaged_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_RSAManaged_1__Fields_FWDDECL
#include <Modloader/app/structs/BigInteger_1.h>
#include <Modloader/app/structs/RSAManaged_KeyGeneratedEventHandler_1.h>
#endif
#undef IL2CPP_STRUCT_RSAManaged_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAManaged_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RSAManaged_1__Fields_FWDDECL)
#include <Modloader/app/structs/RSAManaged_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RSAManaged_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
