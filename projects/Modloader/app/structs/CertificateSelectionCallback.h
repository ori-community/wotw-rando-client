#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CertificateSelectionCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CertificateSelectionCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_CertificateSelectionCallback_DEFINED)
#include <Modloader/app/structs/CertificateSelectionCallback__Fields.h>
#if defined(IL2CPP_STRUCT_CertificateSelectionCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_CertificateSelectionCallback_DEFINED
struct CertificateSelectionCallback__Class;
struct CertificateSelectionCallback {
    struct CertificateSelectionCallback__Class* klass;
    MonitorData* monitor;
    struct CertificateSelectionCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CertificateSelectionCallback_FWDDECL)
#define IL2CPP_STRUCT_CertificateSelectionCallback_FWDDECL
#include <Modloader/app/structs/CertificateSelectionCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_CertificateSelectionCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_CertificateSelectionCallback_DEFINED) && !defined(IL2CPP_STRUCT_CertificateSelectionCallback_FWDDECL)
#include <Modloader/app/structs/CertificateSelectionCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CertificateSelectionCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
