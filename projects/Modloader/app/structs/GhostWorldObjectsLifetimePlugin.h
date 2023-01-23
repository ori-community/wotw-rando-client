#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_DEFINED)
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin__Fields.h>
#if defined(IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_DEFINED
struct GhostWorldObjectsLifetimePlugin__Class;
struct GhostWorldObjectsLifetimePlugin {
    struct GhostWorldObjectsLifetimePlugin__Class* klass;
    MonitorData* monitor;
    struct GhostWorldObjectsLifetimePlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_FWDDECL)
#define IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_FWDDECL
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_DEFINED) && !defined(IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_FWDDECL)
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
