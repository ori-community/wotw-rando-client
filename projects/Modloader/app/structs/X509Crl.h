#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Crl_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Crl_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Crl_DEFINED)
#include <Modloader/app/structs/X509Crl__Fields.h>
#if defined(IL2CPP_STRUCT_X509Crl__Fields_DEFINED)
#define IL2CPP_STRUCT_X509Crl_DEFINED
struct X509Crl__Class;
struct X509Crl {
    struct X509Crl__Class* klass;
    MonitorData* monitor;
    struct X509Crl__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509Crl_FWDDECL)
#define IL2CPP_STRUCT_X509Crl_FWDDECL
#include <Modloader/app/structs/X509Crl__Class.h>
#endif
#undef IL2CPP_STRUCT_X509Crl_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Crl_DEFINED) && !defined(IL2CPP_STRUCT_X509Crl_FWDDECL)
#include <Modloader/app/structs/X509Crl.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Crl.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
