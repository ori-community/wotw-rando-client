#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsClientCertificate__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsClientCertificate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientCertificate__Fields_DEFINED)
#include <Modloader/app/structs/HandshakeMessage__Fields.h>
#if defined(IL2CPP_STRUCT_HandshakeMessage__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsClientCertificate__Fields_DEFINED
struct X509CertificateCollection_2;
struct TlsClientCertificate__Fields {
    struct HandshakeMessage__Fields _;
    struct X509CertificateCollection_2* clientCertificates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsClientCertificate__Fields_FWDDECL)
#define IL2CPP_STRUCT_TlsClientCertificate__Fields_FWDDECL
#include <Modloader/app/structs/X509CertificateCollection_2.h>
#endif
#undef IL2CPP_STRUCT_TlsClientCertificate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientCertificate__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TlsClientCertificate__Fields_FWDDECL)
#include <Modloader/app/structs/TlsClientCertificate__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsClientCertificate__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
