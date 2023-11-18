#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509CertificateImplMono__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509CertificateImplMono__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509CertificateImplMono__Fields_DEFINED)
#include <Modloader/app/structs/X509CertificateImpl__Fields.h>
#if defined(IL2CPP_STRUCT_X509CertificateImpl__Fields_DEFINED)
#define IL2CPP_STRUCT_X509CertificateImplMono__Fields_DEFINED
struct X509Certificate;
struct X509CertificateImplMono__Fields {
    struct X509CertificateImpl__Fields _;
    struct X509Certificate* x509;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509CertificateImplMono__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509CertificateImplMono__Fields_FWDDECL
#include <Modloader/app/structs/X509Certificate.h>
#endif
#undef IL2CPP_STRUCT_X509CertificateImplMono__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509CertificateImplMono__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509CertificateImplMono__Fields_FWDDECL)
#include <Modloader/app/structs/X509CertificateImplMono__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509CertificateImplMono__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
