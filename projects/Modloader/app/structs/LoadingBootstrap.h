#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadingBootstrap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadingBootstrap_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingBootstrap_DEFINED)
#include <Modloader/app/structs/LoadingBootstrap__Fields.h>
#if defined(IL2CPP_STRUCT_LoadingBootstrap__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadingBootstrap_DEFINED
struct LoadingBootstrap__Class;
struct LoadingBootstrap {
    struct LoadingBootstrap__Class* klass;
    MonitorData* monitor;
    struct LoadingBootstrap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadingBootstrap_FWDDECL)
#define IL2CPP_STRUCT_LoadingBootstrap_FWDDECL
#include <Modloader/app/structs/LoadingBootstrap__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadingBootstrap_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingBootstrap_DEFINED) && !defined(IL2CPP_STRUCT_LoadingBootstrap_FWDDECL)
#include <Modloader/app/structs/LoadingBootstrap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadingBootstrap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
