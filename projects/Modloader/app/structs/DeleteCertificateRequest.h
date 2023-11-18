#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeleteCertificateRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeleteCertificateRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteCertificateRequest_DEFINED)
#include <Modloader/app/structs/DeleteCertificateRequest__Fields.h>
#if defined(IL2CPP_STRUCT_DeleteCertificateRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_DeleteCertificateRequest_DEFINED
struct DeleteCertificateRequest__Class;
struct DeleteCertificateRequest {
    struct DeleteCertificateRequest__Class* klass;
    MonitorData* monitor;
    struct DeleteCertificateRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeleteCertificateRequest_FWDDECL)
#define IL2CPP_STRUCT_DeleteCertificateRequest_FWDDECL
#include <Modloader/app/structs/DeleteCertificateRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_DeleteCertificateRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteCertificateRequest_DEFINED) && !defined(IL2CPP_STRUCT_DeleteCertificateRequest_FWDDECL)
#include <Modloader/app/structs/DeleteCertificateRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeleteCertificateRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
