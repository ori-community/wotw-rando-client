#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SystemCertificateValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SystemCertificateValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SystemCertificateValidator_DEFINED)
#define IL2CPP_STRUCT_SystemCertificateValidator_DEFINED
struct SystemCertificateValidator__Class;
struct SystemCertificateValidator {
    struct SystemCertificateValidator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SystemCertificateValidator_FWDDECL)
#define IL2CPP_STRUCT_SystemCertificateValidator_FWDDECL
#include <Modloader/app/structs/SystemCertificateValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_SystemCertificateValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SystemCertificateValidator_DEFINED) && !defined(IL2CPP_STRUCT_SystemCertificateValidator_FWDDECL)
#include <Modloader/app/structs/SystemCertificateValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SystemCertificateValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
