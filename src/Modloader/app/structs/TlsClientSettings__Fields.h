#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsClientSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsClientSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsClientSettings__Fields_DEFINED
struct String;
struct X509CertificateCollection_1;
struct X509Certificate_1;
struct RSAManaged_1;
struct __declspec(align(8)) TlsClientSettings__Fields {
    struct String* targetHost;
    struct X509CertificateCollection_1* certificates;
    struct X509Certificate_1* clientCertificate;
    struct RSAManaged_1* certificateRSA;
};
#endif
#if !defined(IL2CPP_STRUCT_TlsClientSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_TlsClientSettings__Fields_FWDDECL
#include <Modloader/app/structs/RSAManaged_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#endif
#undef IL2CPP_STRUCT_TlsClientSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TlsClientSettings__Fields_FWDDECL)
#include <Modloader/app/structs/TlsClientSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsClientSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
