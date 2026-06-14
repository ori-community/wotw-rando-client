#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostUberStatePlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostUberStatePlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostUberStatePlugin_DEFINED)
#include <Modloader/app/structs/GhostUberStatePlugin__Fields.h>
#if defined(IL2CPP_STRUCT_GhostUberStatePlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostUberStatePlugin_DEFINED
struct GhostUberStatePlugin__Class;
struct GhostUberStatePlugin {
    struct GhostUberStatePlugin__Class* klass;
    MonitorData* monitor;
    struct GhostUberStatePlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostUberStatePlugin_FWDDECL)
#define IL2CPP_STRUCT_GhostUberStatePlugin_FWDDECL
#include <Modloader/app/structs/GhostUberStatePlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostUberStatePlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostUberStatePlugin_DEFINED) && !defined(IL2CPP_STRUCT_GhostUberStatePlugin_FWDDECL)
#include <Modloader/app/structs/GhostUberStatePlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostUberStatePlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
