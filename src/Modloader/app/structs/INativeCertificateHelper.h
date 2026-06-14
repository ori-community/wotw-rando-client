#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_INativeCertificateHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_INativeCertificateHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_INativeCertificateHelper_DEFINED)
#define IL2CPP_STRUCT_INativeCertificateHelper_DEFINED
struct INativeCertificateHelper__Class;
struct INativeCertificateHelper {
    struct INativeCertificateHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_INativeCertificateHelper_FWDDECL)
#define IL2CPP_STRUCT_INativeCertificateHelper_FWDDECL
#include <Modloader/app/structs/INativeCertificateHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_INativeCertificateHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_INativeCertificateHelper_DEFINED) && !defined(IL2CPP_STRUCT_INativeCertificateHelper_FWDDECL)
#include <Modloader/app/structs/INativeCertificateHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/INativeCertificateHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
