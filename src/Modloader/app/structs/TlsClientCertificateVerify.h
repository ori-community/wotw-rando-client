#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsClientCertificateVerify_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsClientCertificateVerify_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientCertificateVerify_DEFINED)
#include <Modloader/app/structs/TlsClientCertificateVerify__Fields.h>
#if defined(IL2CPP_STRUCT_TlsClientCertificateVerify__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsClientCertificateVerify_DEFINED
struct TlsClientCertificateVerify__Class;
struct TlsClientCertificateVerify {
    struct TlsClientCertificateVerify__Class* klass;
    MonitorData* monitor;
    struct TlsClientCertificateVerify__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsClientCertificateVerify_FWDDECL)
#define IL2CPP_STRUCT_TlsClientCertificateVerify_FWDDECL
#include <Modloader/app/structs/TlsClientCertificateVerify__Class.h>
#endif
#undef IL2CPP_STRUCT_TlsClientCertificateVerify_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientCertificateVerify_DEFINED) && !defined(IL2CPP_STRUCT_TlsClientCertificateVerify_FWDDECL)
#include <Modloader/app/structs/TlsClientCertificateVerify.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsClientCertificateVerify.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
