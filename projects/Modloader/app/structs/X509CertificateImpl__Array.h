#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509CertificateImpl__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509CertificateImpl__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509CertificateImpl__Array_DEFINED)
#define IL2CPP_STRUCT_X509CertificateImpl__Array_DEFINED
struct X509CertificateImpl__Array__Class;
struct X509CertificateImpl;
struct X509CertificateImpl__Array {
    struct X509CertificateImpl__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct X509CertificateImpl* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_X509CertificateImpl__Array_FWDDECL)
#define IL2CPP_STRUCT_X509CertificateImpl__Array_FWDDECL
#include <Modloader/app/structs/X509CertificateImpl.h>
#include <Modloader/app/structs/X509CertificateImpl__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_X509CertificateImpl__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509CertificateImpl__Array_DEFINED) && !defined(IL2CPP_STRUCT_X509CertificateImpl__Array_FWDDECL)
#include <Modloader/app/structs/X509CertificateImpl__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509CertificateImpl__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
