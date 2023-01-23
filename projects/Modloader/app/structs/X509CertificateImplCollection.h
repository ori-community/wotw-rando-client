#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509CertificateImplCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509CertificateImplCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509CertificateImplCollection_DEFINED)
#include <Modloader/app/structs/X509CertificateImplCollection__Fields.h>
#if defined(IL2CPP_STRUCT_X509CertificateImplCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_X509CertificateImplCollection_DEFINED
struct X509CertificateImplCollection__Class;
struct X509CertificateImplCollection {
    struct X509CertificateImplCollection__Class* klass;
    MonitorData* monitor;
    struct X509CertificateImplCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509CertificateImplCollection_FWDDECL)
#define IL2CPP_STRUCT_X509CertificateImplCollection_FWDDECL
#include <Modloader/app/structs/X509CertificateImplCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_X509CertificateImplCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509CertificateImplCollection_DEFINED) && !defined(IL2CPP_STRUCT_X509CertificateImplCollection_FWDDECL)
#include <Modloader/app/structs/X509CertificateImplCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509CertificateImplCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
