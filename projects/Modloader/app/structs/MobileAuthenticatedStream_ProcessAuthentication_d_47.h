#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MobileAuthenticatedStream_ProcessAuthentication_d_47_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MobileAuthenticatedStream_ProcessAuthentication_d_47_INITIALIZING
#if !defined(IL2CPP_STRUCT_MobileAuthenticatedStream_ProcessAuthentication_d_47_DEFINED)
#include <Modloader/app/structs/AsyncTaskMethodBuilder.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_Mono_Net_Security_AsyncProtocolResult_.h>
#include <Modloader/app/structs/SslProtocols__Enum.h>
#if defined(IL2CPP_STRUCT_AsyncTaskMethodBuilder_DEFINED) && defined(IL2CPP_STRUCT_SslProtocols__Enum_DEFINED) && defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_Mono_Net_Security_AsyncProtocolResult__DEFINED)
#define IL2CPP_STRUCT_MobileAuthenticatedStream_ProcessAuthentication_d_47_DEFINED
struct X509Certificate_1;
struct String;
struct MobileAuthenticatedStream;
struct X509CertificateCollection_1;
struct MobileAuthenticatedStream_ProcessAuthentication_d_47 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder __t__builder;
    bool serverMode;
    struct X509Certificate_1* serverCertificate;
    struct String* targetHost;
    struct MobileAuthenticatedStream* __4__this;
    bool runSynchronously;
    SslProtocols__Enum enabledProtocols;

    struct X509CertificateCollection_1* clientCertificates;
    bool clientCertRequired;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_Mono_Net_Security_AsyncProtocolResult_ __u__1;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MobileAuthenticatedStream_ProcessAuthentication_d_47_FWDDECL)
#define IL2CPP_STRUCT_MobileAuthenticatedStream_ProcessAuthentication_d_47_FWDDECL
#include <Modloader/app/structs/MobileAuthenticatedStream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#endif
#undef IL2CPP_STRUCT_MobileAuthenticatedStream_ProcessAuthentication_d_47_INITIALIZING
#if !defined(IL2CPP_STRUCT_MobileAuthenticatedStream_ProcessAuthentication_d_47_DEFINED) && !defined(IL2CPP_STRUCT_MobileAuthenticatedStream_ProcessAuthentication_d_47_FWDDECL)
#include <Modloader/app/structs/MobileAuthenticatedStream_ProcessAuthentication_d_47.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MobileAuthenticatedStream_ProcessAuthentication_d_47.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
