#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Extension_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Extension_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Extension_DEFINED)
#include <Modloader/app/structs/X509Extension__Fields.h>
#if defined(IL2CPP_STRUCT_X509Extension__Fields_DEFINED)
#define IL2CPP_STRUCT_X509Extension_DEFINED
struct X509Extension__Class;
struct X509Extension {
    struct X509Extension__Class* klass;
    MonitorData* monitor;
    struct X509Extension__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509Extension_FWDDECL)
#define IL2CPP_STRUCT_X509Extension_FWDDECL
#include <Modloader/app/structs/X509Extension__Class.h>
#endif
#undef IL2CPP_STRUCT_X509Extension_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Extension_DEFINED) && !defined(IL2CPP_STRUCT_X509Extension_FWDDECL)
#include <Modloader/app/structs/X509Extension.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Extension.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
