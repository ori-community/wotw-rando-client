#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MobileTlsContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MobileTlsContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MobileTlsContext__Fields_DEFINED)
#include <Modloader/app/structs/SslProtocols__Enum.h>
#if defined(IL2CPP_STRUCT_SslProtocols__Enum_DEFINED)
#define IL2CPP_STRUCT_MobileTlsContext__Fields_DEFINED
struct MobileAuthenticatedStream;
struct String;
struct X509Certificate_1;
struct X509CertificateCollection_1;
struct ICertificateValidator2;
struct __declspec(align(8)) MobileTlsContext__Fields {
    struct MobileAuthenticatedStream* parent;
    bool serverMode;
    struct String* targetHost;
    struct String* serverName;
    SslProtocols__Enum enabledProtocols;

    struct X509Certificate_1* serverCertificate;
    struct X509CertificateCollection_1* clientCertificates;
    bool askForClientCert;
    struct ICertificateValidator2* certificateValidator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MobileTlsContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_MobileTlsContext__Fields_FWDDECL
#include <Modloader/app/structs/ICertificateValidator2.h>
#include <Modloader/app/structs/MobileAuthenticatedStream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#endif
#undef IL2CPP_STRUCT_MobileTlsContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MobileTlsContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MobileTlsContext__Fields_FWDDECL)
#include <Modloader/app/structs/MobileTlsContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MobileTlsContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
