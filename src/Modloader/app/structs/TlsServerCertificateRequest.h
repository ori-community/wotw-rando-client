#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsServerCertificateRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsServerCertificateRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsServerCertificateRequest_DEFINED)
#include <Modloader/app/structs/TlsServerCertificateRequest__Fields.h>
#if defined(IL2CPP_STRUCT_TlsServerCertificateRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsServerCertificateRequest_DEFINED
struct TlsServerCertificateRequest__Class;
struct TlsServerCertificateRequest {
    struct TlsServerCertificateRequest__Class* klass;
    MonitorData* monitor;
    struct TlsServerCertificateRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsServerCertificateRequest_FWDDECL)
#define IL2CPP_STRUCT_TlsServerCertificateRequest_FWDDECL
#include <Modloader/app/structs/TlsServerCertificateRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_TlsServerCertificateRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsServerCertificateRequest_DEFINED) && !defined(IL2CPP_STRUCT_TlsServerCertificateRequest_FWDDECL)
#include <Modloader/app/structs/TlsServerCertificateRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsServerCertificateRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
