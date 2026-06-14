#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultCertificatePolicy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultCertificatePolicy_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultCertificatePolicy_DEFINED)
#define IL2CPP_STRUCT_DefaultCertificatePolicy_DEFINED
struct DefaultCertificatePolicy__Class;
struct DefaultCertificatePolicy {
    struct DefaultCertificatePolicy__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DefaultCertificatePolicy_FWDDECL)
#define IL2CPP_STRUCT_DefaultCertificatePolicy_FWDDECL
#include <Modloader/app/structs/DefaultCertificatePolicy__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultCertificatePolicy_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultCertificatePolicy_DEFINED) && !defined(IL2CPP_STRUCT_DefaultCertificatePolicy_FWDDECL)
#include <Modloader/app/structs/DefaultCertificatePolicy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultCertificatePolicy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
