#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509CertificateImpl_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509CertificateImpl_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509CertificateImpl_DEFINED)
#include <Modloader/app/structs/X509CertificateImpl__Fields.h>
#if defined(IL2CPP_STRUCT_X509CertificateImpl__Fields_DEFINED)
#define IL2CPP_STRUCT_X509CertificateImpl_DEFINED
struct X509CertificateImpl__Class;
struct X509CertificateImpl {
    struct X509CertificateImpl__Class* klass;
    MonitorData* monitor;
    struct X509CertificateImpl__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509CertificateImpl_FWDDECL)
#define IL2CPP_STRUCT_X509CertificateImpl_FWDDECL
#include <Modloader/app/structs/X509CertificateImpl__Class.h>
#endif
#undef IL2CPP_STRUCT_X509CertificateImpl_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509CertificateImpl_DEFINED) && !defined(IL2CPP_STRUCT_X509CertificateImpl_FWDDECL)
#include <Modloader/app/structs/X509CertificateImpl.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509CertificateImpl.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
