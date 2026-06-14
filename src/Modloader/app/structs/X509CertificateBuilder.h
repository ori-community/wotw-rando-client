#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509CertificateBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509CertificateBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509CertificateBuilder_DEFINED)
#include <Modloader/app/structs/X509CertificateBuilder__Fields.h>
#if defined(IL2CPP_STRUCT_X509CertificateBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_X509CertificateBuilder_DEFINED
struct X509CertificateBuilder__Class;
struct X509CertificateBuilder {
    struct X509CertificateBuilder__Class* klass;
    MonitorData* monitor;
    struct X509CertificateBuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509CertificateBuilder_FWDDECL)
#define IL2CPP_STRUCT_X509CertificateBuilder_FWDDECL
#include <Modloader/app/structs/X509CertificateBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_X509CertificateBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509CertificateBuilder_DEFINED) && !defined(IL2CPP_STRUCT_X509CertificateBuilder_FWDDECL)
#include <Modloader/app/structs/X509CertificateBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509CertificateBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
