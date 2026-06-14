#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CertificateHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CertificateHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_CertificateHandler_DEFINED)
#include <Modloader/app/structs/CertificateHandler__Fields.h>
#if defined(IL2CPP_STRUCT_CertificateHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_CertificateHandler_DEFINED
struct CertificateHandler__Class;
struct CertificateHandler {
    struct CertificateHandler__Class* klass;
    MonitorData* monitor;
    struct CertificateHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CertificateHandler_FWDDECL)
#define IL2CPP_STRUCT_CertificateHandler_FWDDECL
#include <Modloader/app/structs/CertificateHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_CertificateHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_CertificateHandler_DEFINED) && !defined(IL2CPP_STRUCT_CertificateHandler_FWDDECL)
#include <Modloader/app/structs/CertificateHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CertificateHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
