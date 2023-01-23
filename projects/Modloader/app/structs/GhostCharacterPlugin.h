#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostCharacterPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostCharacterPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostCharacterPlugin_DEFINED)
#include <Modloader/app/structs/GhostCharacterPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_GhostCharacterPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostCharacterPlugin_DEFINED
struct GhostCharacterPlugin__Class;
struct GhostCharacterPlugin {
    struct GhostCharacterPlugin__Class* klass;
    MonitorData* monitor;
    struct GhostCharacterPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostCharacterPlugin_FWDDECL)
#define IL2CPP_STRUCT_GhostCharacterPlugin_FWDDECL
#include <Modloader/app/structs/GhostCharacterPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostCharacterPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostCharacterPlugin_DEFINED) && !defined(IL2CPP_STRUCT_GhostCharacterPlugin_FWDDECL)
#include <Modloader/app/structs/GhostCharacterPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostCharacterPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
