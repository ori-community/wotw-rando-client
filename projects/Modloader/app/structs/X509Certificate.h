#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Certificate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Certificate_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Certificate_DEFINED)
#include <Modloader/app/structs/X509Certificate__Fields.h>
#if defined(IL2CPP_STRUCT_X509Certificate__Fields_DEFINED)
#define IL2CPP_STRUCT_X509Certificate_DEFINED
struct X509Certificate__Class;
struct X509Certificate {
    struct X509Certificate__Class* klass;
    MonitorData* monitor;
    struct X509Certificate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509Certificate_FWDDECL)
#define IL2CPP_STRUCT_X509Certificate_FWDDECL
#include <Modloader/app/structs/X509Certificate__Class.h>
#endif
#undef IL2CPP_STRUCT_X509Certificate_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Certificate_DEFINED) && !defined(IL2CPP_STRUCT_X509Certificate_FWDDECL)
#include <Modloader/app/structs/X509Certificate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Certificate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
