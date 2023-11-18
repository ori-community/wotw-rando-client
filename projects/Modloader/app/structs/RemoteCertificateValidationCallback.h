#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoteCertificateValidationCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoteCertificateValidationCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteCertificateValidationCallback_DEFINED)
#include <Modloader/app/structs/RemoteCertificateValidationCallback__Fields.h>
#if defined(IL2CPP_STRUCT_RemoteCertificateValidationCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoteCertificateValidationCallback_DEFINED
struct RemoteCertificateValidationCallback__Class;
struct RemoteCertificateValidationCallback {
    struct RemoteCertificateValidationCallback__Class* klass;
    MonitorData* monitor;
    struct RemoteCertificateValidationCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoteCertificateValidationCallback_FWDDECL)
#define IL2CPP_STRUCT_RemoteCertificateValidationCallback_FWDDECL
#include <Modloader/app/structs/RemoteCertificateValidationCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_RemoteCertificateValidationCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteCertificateValidationCallback_DEFINED) && !defined(IL2CPP_STRUCT_RemoteCertificateValidationCallback_FWDDECL)
#include <Modloader/app/structs/RemoteCertificateValidationCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoteCertificateValidationCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
