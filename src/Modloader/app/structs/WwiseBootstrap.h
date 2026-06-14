#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseBootstrap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseBootstrap_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseBootstrap_DEFINED)
#include <Modloader/app/structs/WwiseBootstrap__Fields.h>
#if defined(IL2CPP_STRUCT_WwiseBootstrap__Fields_DEFINED)
#define IL2CPP_STRUCT_WwiseBootstrap_DEFINED
struct WwiseBootstrap__Class;
struct WwiseBootstrap {
    struct WwiseBootstrap__Class* klass;
    MonitorData* monitor;
    struct WwiseBootstrap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WwiseBootstrap_FWDDECL)
#define IL2CPP_STRUCT_WwiseBootstrap_FWDDECL
#include <Modloader/app/structs/WwiseBootstrap__Class.h>
#endif
#undef IL2CPP_STRUCT_WwiseBootstrap_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseBootstrap_DEFINED) && !defined(IL2CPP_STRUCT_WwiseBootstrap_FWDDECL)
#include <Modloader/app/structs/WwiseBootstrap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseBootstrap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
