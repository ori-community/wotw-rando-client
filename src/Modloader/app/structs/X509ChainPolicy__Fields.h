#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509ChainPolicy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509ChainPolicy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainPolicy__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/X509RevocationFlag__Enum.h>
#include <Modloader/app/structs/X509RevocationMode__Enum.h>
#include <Modloader/app/structs/X509VerificationFlags__Enum.h>
#if defined(IL2CPP_STRUCT_X509RevocationFlag__Enum_DEFINED) && defined(IL2CPP_STRUCT_X509RevocationMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_TimeSpan_DEFINED) && defined(IL2CPP_STRUCT_X509VerificationFlags__Enum_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_X509ChainPolicy__Fields_DEFINED
struct OidCollection;
struct X509CertificateCollection_1;
struct X509Certificate2Collection;
struct __declspec(align(8)) X509ChainPolicy__Fields {
    struct OidCollection* apps;
    struct OidCollection* cert;
    struct X509CertificateCollection_1* store;
    struct X509Certificate2Collection* store2;
    X509RevocationFlag__Enum rflag;

    X509RevocationMode__Enum mode;

    struct TimeSpan timeout;
    X509VerificationFlags__Enum vflags;

    struct DateTime vtime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509ChainPolicy__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509ChainPolicy__Fields_FWDDECL
#include <Modloader/app/structs/OidCollection.h>
#include <Modloader/app/structs/X509Certificate2Collection.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#endif
#undef IL2CPP_STRUCT_X509ChainPolicy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainPolicy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509ChainPolicy__Fields_FWDDECL)
#include <Modloader/app/structs/X509ChainPolicy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509ChainPolicy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
