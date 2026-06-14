#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Chain_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Chain_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Chain_DEFINED)
#include <Modloader/app/structs/X509Chain__Fields.h>
#if defined(IL2CPP_STRUCT_X509Chain__Fields_DEFINED)
#define IL2CPP_STRUCT_X509Chain_DEFINED
struct X509Chain__Class;
struct X509Chain {
    struct X509Chain__Class* klass;
    MonitorData* monitor;
    struct X509Chain__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509Chain_FWDDECL)
#define IL2CPP_STRUCT_X509Chain_FWDDECL
#include <Modloader/app/structs/X509Chain__Class.h>
#endif
#undef IL2CPP_STRUCT_X509Chain_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Chain_DEFINED) && !defined(IL2CPP_STRUCT_X509Chain_FWDDECL)
#include <Modloader/app/structs/X509Chain.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Chain.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
