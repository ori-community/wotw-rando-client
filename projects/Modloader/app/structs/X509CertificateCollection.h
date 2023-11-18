#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509CertificateCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509CertificateCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509CertificateCollection_DEFINED)
#include <Modloader/app/structs/X509CertificateCollection__Fields.h>
#if defined(IL2CPP_STRUCT_X509CertificateCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_X509CertificateCollection_DEFINED
struct X509CertificateCollection__Class;
struct X509CertificateCollection {
    struct X509CertificateCollection__Class* klass;
    MonitorData* monitor;
    struct X509CertificateCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509CertificateCollection_FWDDECL)
#define IL2CPP_STRUCT_X509CertificateCollection_FWDDECL
#include <Modloader/app/structs/X509CertificateCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_X509CertificateCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509CertificateCollection_DEFINED) && !defined(IL2CPP_STRUCT_X509CertificateCollection_FWDDECL)
#include <Modloader/app/structs/X509CertificateCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509CertificateCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
