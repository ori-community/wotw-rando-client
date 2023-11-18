#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostCharacterStatesPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostCharacterStatesPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostCharacterStatesPlugin_DEFINED)
#include <Modloader/app/structs/GhostCharacterStatesPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_GhostCharacterStatesPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostCharacterStatesPlugin_DEFINED
struct GhostCharacterStatesPlugin__Class;
struct GhostCharacterStatesPlugin {
    struct GhostCharacterStatesPlugin__Class* klass;
    MonitorData* monitor;
    struct GhostCharacterStatesPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostCharacterStatesPlugin_FWDDECL)
#define IL2CPP_STRUCT_GhostCharacterStatesPlugin_FWDDECL
#include <Modloader/app/structs/GhostCharacterStatesPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostCharacterStatesPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostCharacterStatesPlugin_DEFINED) && !defined(IL2CPP_STRUCT_GhostCharacterStatesPlugin_FWDDECL)
#include <Modloader/app/structs/GhostCharacterStatesPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostCharacterStatesPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
