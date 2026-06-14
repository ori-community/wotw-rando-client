#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Crl_X509CrlEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Crl_X509CrlEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Crl_X509CrlEntry_DEFINED)
#include <Modloader/app/structs/X509Crl_X509CrlEntry__Fields.h>
#if defined(IL2CPP_STRUCT_X509Crl_X509CrlEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_X509Crl_X509CrlEntry_DEFINED
struct X509Crl_X509CrlEntry__Class;
struct X509Crl_X509CrlEntry {
    struct X509Crl_X509CrlEntry__Class* klass;
    MonitorData* monitor;
    struct X509Crl_X509CrlEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509Crl_X509CrlEntry_FWDDECL)
#define IL2CPP_STRUCT_X509Crl_X509CrlEntry_FWDDECL
#include <Modloader/app/structs/X509Crl_X509CrlEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_X509Crl_X509CrlEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Crl_X509CrlEntry_DEFINED) && !defined(IL2CPP_STRUCT_X509Crl_X509CrlEntry_FWDDECL)
#include <Modloader/app/structs/X509Crl_X509CrlEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Crl_X509CrlEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
