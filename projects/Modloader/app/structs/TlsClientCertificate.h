#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsClientCertificate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsClientCertificate_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientCertificate_DEFINED)
#include <Modloader/app/structs/TlsClientCertificate__Fields.h>
#if defined(IL2CPP_STRUCT_TlsClientCertificate__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsClientCertificate_DEFINED
struct TlsClientCertificate__Class;
struct TlsClientCertificate {
    struct TlsClientCertificate__Class* klass;
    MonitorData* monitor;
    struct TlsClientCertificate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsClientCertificate_FWDDECL)
#define IL2CPP_STRUCT_TlsClientCertificate_FWDDECL
#include <Modloader/app/structs/TlsClientCertificate__Class.h>
#endif
#undef IL2CPP_STRUCT_TlsClientCertificate_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientCertificate_DEFINED) && !defined(IL2CPP_STRUCT_TlsClientCertificate_FWDDECL)
#include <Modloader/app/structs/TlsClientCertificate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsClientCertificate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
