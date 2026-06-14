#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CertificateValidationHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CertificateValidationHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_CertificateValidationHelper_DEFINED)
#define IL2CPP_STRUCT_CertificateValidationHelper_DEFINED
struct CertificateValidationHelper__Class;
struct CertificateValidationHelper {
    struct CertificateValidationHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CertificateValidationHelper_FWDDECL)
#define IL2CPP_STRUCT_CertificateValidationHelper_FWDDECL
#include <Modloader/app/structs/CertificateValidationHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_CertificateValidationHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_CertificateValidationHelper_DEFINED) && !defined(IL2CPP_STRUCT_CertificateValidationHelper_FWDDECL)
#include <Modloader/app/structs/CertificateValidationHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CertificateValidationHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
