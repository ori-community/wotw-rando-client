#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CertificateValidationCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CertificateValidationCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_CertificateValidationCallback_DEFINED)
#include <Modloader/app/structs/CertificateValidationCallback__Fields.h>
#if defined(IL2CPP_STRUCT_CertificateValidationCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_CertificateValidationCallback_DEFINED
struct CertificateValidationCallback__Class;
struct CertificateValidationCallback {
    struct CertificateValidationCallback__Class* klass;
    MonitorData* monitor;
    struct CertificateValidationCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CertificateValidationCallback_FWDDECL)
#define IL2CPP_STRUCT_CertificateValidationCallback_FWDDECL
#include <Modloader/app/structs/CertificateValidationCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_CertificateValidationCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_CertificateValidationCallback_DEFINED) && !defined(IL2CPP_STRUCT_CertificateValidationCallback_FWDDECL)
#include <Modloader/app/structs/CertificateValidationCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CertificateValidationCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
