#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostLineRendererPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostLineRendererPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostLineRendererPlugin_DEFINED)
#include <Modloader/app/structs/GhostLineRendererPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_GhostLineRendererPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostLineRendererPlugin_DEFINED
struct GhostLineRendererPlugin__Class;
struct GhostLineRendererPlugin {
    struct GhostLineRendererPlugin__Class* klass;
    MonitorData* monitor;
    struct GhostLineRendererPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostLineRendererPlugin_FWDDECL)
#define IL2CPP_STRUCT_GhostLineRendererPlugin_FWDDECL
#include <Modloader/app/structs/GhostLineRendererPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostLineRendererPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostLineRendererPlugin_DEFINED) && !defined(IL2CPP_STRUCT_GhostLineRendererPlugin_FWDDECL)
#include <Modloader/app/structs/GhostLineRendererPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostLineRendererPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
