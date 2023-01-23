#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UploadCertificateRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UploadCertificateRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadCertificateRequest_DEFINED)
#include <Modloader/app/structs/UploadCertificateRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UploadCertificateRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UploadCertificateRequest_DEFINED
struct UploadCertificateRequest__Class;
struct UploadCertificateRequest {
    struct UploadCertificateRequest__Class* klass;
    MonitorData* monitor;
    struct UploadCertificateRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UploadCertificateRequest_FWDDECL)
#define IL2CPP_STRUCT_UploadCertificateRequest_FWDDECL
#include <Modloader/app/structs/UploadCertificateRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UploadCertificateRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadCertificateRequest_DEFINED) && !defined(IL2CPP_STRUCT_UploadCertificateRequest_FWDDECL)
#include <Modloader/app/structs/UploadCertificateRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UploadCertificateRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
