#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Certificate2ImplMono__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Certificate2ImplMono__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Certificate2ImplMono__Fields_DEFINED)
#include <Modloader/app/structs/X509Certificate2Impl__Fields.h>
#if defined(IL2CPP_STRUCT_X509Certificate2Impl__Fields_DEFINED)
#define IL2CPP_STRUCT_X509Certificate2ImplMono__Fields_DEFINED
struct X509ExtensionCollection_2;
struct PublicKey;
struct X500DistinguishedName;
struct Oid;
struct X509CertificateImplCollection;
struct X509Certificate_2;
struct X509Certificate2ImplMono__Fields {
    struct X509Certificate2Impl__Fields _;
    bool _archived;
    struct X509ExtensionCollection_2* _extensions;
    struct PublicKey* _publicKey;
    struct X500DistinguishedName* issuer_name;
    struct X500DistinguishedName* subject_name;
    struct Oid* signature_algorithm;
    struct X509CertificateImplCollection* intermediateCerts;
    struct X509Certificate_2* _cert;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509Certificate2ImplMono__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509Certificate2ImplMono__Fields_FWDDECL
#include <Modloader/app/structs/Oid.h>
#include <Modloader/app/structs/PublicKey.h>
#include <Modloader/app/structs/X500DistinguishedName.h>
#include <Modloader/app/structs/X509CertificateImplCollection.h>
#include <Modloader/app/structs/X509Certificate_2.h>
#include <Modloader/app/structs/X509ExtensionCollection_2.h>
#endif
#undef IL2CPP_STRUCT_X509Certificate2ImplMono__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Certificate2ImplMono__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509Certificate2ImplMono__Fields_FWDDECL)
#include <Modloader/app/structs/X509Certificate2ImplMono__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Certificate2ImplMono__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
