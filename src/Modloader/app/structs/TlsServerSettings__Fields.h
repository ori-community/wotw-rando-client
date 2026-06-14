#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsServerSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsServerSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsServerSettings__Fields_DEFINED)
#include <Modloader/app/structs/RSAParameters.h>
#if defined(IL2CPP_STRUCT_RSAParameters_DEFINED)
#define IL2CPP_STRUCT_TlsServerSettings__Fields_DEFINED
struct X509CertificateCollection_2;
struct RSA;
struct Byte__Array;
struct String__Array;
struct ClientCertificateType__Enum__Array;
struct __declspec(align(8)) TlsServerSettings__Fields {
    struct X509CertificateCollection_2* certificates;
    struct RSA* certificateRSA;
    struct RSAParameters rsaParameters;
    struct Byte__Array* signedParams;
    struct String__Array* distinguisedNames;
    bool serverKeyExchange;
    bool certificateRequest;
    struct ClientCertificateType__Enum__Array* certificateTypes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsServerSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_TlsServerSettings__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ClientCertificateType__Enum__Array.h>
#include <Modloader/app/structs/RSA.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/X509CertificateCollection_2.h>
#endif
#undef IL2CPP_STRUCT_TlsServerSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsServerSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TlsServerSettings__Fields_FWDDECL)
#include <Modloader/app/structs/TlsServerSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsServerSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
