#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CertificateSummary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CertificateSummary_INITIALIZING
#if !defined(IL2CPP_STRUCT_CertificateSummary_DEFINED)
#include <Modloader/app/structs/CertificateSummary__Fields.h>
#if defined(IL2CPP_STRUCT_CertificateSummary__Fields_DEFINED)
#define IL2CPP_STRUCT_CertificateSummary_DEFINED
struct CertificateSummary__Class;
struct CertificateSummary {
    struct CertificateSummary__Class* klass;
    MonitorData* monitor;
    struct CertificateSummary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CertificateSummary_FWDDECL)
#define IL2CPP_STRUCT_CertificateSummary_FWDDECL
#include <Modloader/app/structs/CertificateSummary__Class.h>
#endif
#undef IL2CPP_STRUCT_CertificateSummary_INITIALIZING
#if !defined(IL2CPP_STRUCT_CertificateSummary_DEFINED) && !defined(IL2CPP_STRUCT_CertificateSummary_FWDDECL)
#include <Modloader/app/structs/CertificateSummary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CertificateSummary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
