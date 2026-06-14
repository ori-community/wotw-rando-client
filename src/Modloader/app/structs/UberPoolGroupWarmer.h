#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolGroupWarmer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolGroupWarmer_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolGroupWarmer_DEFINED)
#include <Modloader/app/structs/UberPoolGroupWarmer__Fields.h>
#if defined(IL2CPP_STRUCT_UberPoolGroupWarmer__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolGroupWarmer_DEFINED
struct UberPoolGroupWarmer__Class;
struct UberPoolGroupWarmer {
    struct UberPoolGroupWarmer__Class* klass;
    MonitorData* monitor;
    struct UberPoolGroupWarmer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolGroupWarmer_FWDDECL)
#define IL2CPP_STRUCT_UberPoolGroupWarmer_FWDDECL
#include <Modloader/app/structs/UberPoolGroupWarmer__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPoolGroupWarmer_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolGroupWarmer_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolGroupWarmer_FWDDECL)
#include <Modloader/app/structs/UberPoolGroupWarmer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolGroupWarmer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
