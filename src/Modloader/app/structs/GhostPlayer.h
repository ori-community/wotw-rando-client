#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostPlayer_DEFINED)
#include <Modloader/app/structs/GhostPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_GhostPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostPlayer_DEFINED
struct GhostPlayer__Class;
struct GhostPlayer {
    struct GhostPlayer__Class* klass;
    MonitorData* monitor;
    struct GhostPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostPlayer_FWDDECL)
#define IL2CPP_STRUCT_GhostPlayer_FWDDECL
#include <Modloader/app/structs/GhostPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostPlayer_DEFINED) && !defined(IL2CPP_STRUCT_GhostPlayer_FWDDECL)
#include <Modloader/app/structs/GhostPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
