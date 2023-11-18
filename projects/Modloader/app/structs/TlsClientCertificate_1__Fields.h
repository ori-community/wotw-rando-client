#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsClientCertificate_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsClientCertificate_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientCertificate_1__Fields_DEFINED)
#include <Modloader/app/structs/HandshakeMessage__Fields.h>
#if defined(IL2CPP_STRUCT_HandshakeMessage__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsClientCertificate_1__Fields_DEFINED
struct X509Certificate_1;
struct TlsClientCertificate_1__Fields {
    struct HandshakeMessage__Fields _;
    bool clientCertSelected;
    struct X509Certificate_1* clientCert;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsClientCertificate_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_TlsClientCertificate_1__Fields_FWDDECL
#include <Modloader/app/structs/X509Certificate_1.h>
#endif
#undef IL2CPP_STRUCT_TlsClientCertificate_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientCertificate_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TlsClientCertificate_1__Fields_FWDDECL)
#include <Modloader/app/structs/TlsClientCertificate_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsClientCertificate_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
