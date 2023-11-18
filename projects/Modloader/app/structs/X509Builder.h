#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Builder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Builder_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Builder_DEFINED)
#include <Modloader/app/structs/X509Builder__Fields.h>
#if defined(IL2CPP_STRUCT_X509Builder__Fields_DEFINED)
#define IL2CPP_STRUCT_X509Builder_DEFINED
struct X509Builder__Class;
struct X509Builder {
    struct X509Builder__Class* klass;
    MonitorData* monitor;
    struct X509Builder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509Builder_FWDDECL)
#define IL2CPP_STRUCT_X509Builder_FWDDECL
#include <Modloader/app/structs/X509Builder__Class.h>
#endif
#undef IL2CPP_STRUCT_X509Builder_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Builder_DEFINED) && !defined(IL2CPP_STRUCT_X509Builder_FWDDECL)
#include <Modloader/app/structs/X509Builder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Builder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
