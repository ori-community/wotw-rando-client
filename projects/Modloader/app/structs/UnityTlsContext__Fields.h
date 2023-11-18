#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityTlsContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityTlsContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTlsContext__Fields_DEFINED)
#include <Modloader/app/structs/GCHandle.h>
#include <Modloader/app/structs/MobileTlsContext__Fields.h>
#if defined(IL2CPP_STRUCT_MobileTlsContext__Fields_DEFINED) && defined(IL2CPP_STRUCT_GCHandle_DEFINED)
#define IL2CPP_STRUCT_UnityTlsContext__Fields_DEFINED
struct UnityTls_unitytls_tlsctx;
struct UnityTls_unitytls_x509list;
struct UnityTls_unitytls_key;
struct X509Certificate_1;
struct MonoTlsConnectionInfo;
struct Byte__Array;
struct Exception;
struct UnityTlsContext__Fields {
    struct MobileTlsContext__Fields _;
    struct UnityTls_unitytls_tlsctx* tlsContext;
    struct UnityTls_unitytls_x509list* requestedClientCertChain;
    struct UnityTls_unitytls_key* requestedClientKey;
    struct X509Certificate_1* localClientCertificate;
    struct X509Certificate_1* remoteCertificate;
    struct MonoTlsConnectionInfo* connectioninfo;
    bool isAuthenticated;
    bool hasContext;
    bool closedGraceful;
    struct Byte__Array* writeBuffer;
    struct Byte__Array* readBuffer;
    struct GCHandle handle;
    struct Exception* lastException;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnityTlsContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_UnityTlsContext__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/MonoTlsConnectionInfo.h>
#include <Modloader/app/structs/UnityTls_unitytls_key.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509list.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#endif
#undef IL2CPP_STRUCT_UnityTlsContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTlsContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UnityTlsContext__Fields_FWDDECL)
#include <Modloader/app/structs/UnityTlsContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityTlsContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
