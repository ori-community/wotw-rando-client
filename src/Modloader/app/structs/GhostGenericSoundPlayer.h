#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostGenericSoundPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostGenericSoundPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostGenericSoundPlayer_DEFINED)
#include <Modloader/app/structs/GhostGenericSoundPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_GhostGenericSoundPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostGenericSoundPlayer_DEFINED
struct GhostGenericSoundPlayer__Class;
struct GhostGenericSoundPlayer {
    struct GhostGenericSoundPlayer__Class* klass;
    MonitorData* monitor;
    struct GhostGenericSoundPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostGenericSoundPlayer_FWDDECL)
#define IL2CPP_STRUCT_GhostGenericSoundPlayer_FWDDECL
#include <Modloader/app/structs/GhostGenericSoundPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostGenericSoundPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostGenericSoundPlayer_DEFINED) && !defined(IL2CPP_STRUCT_GhostGenericSoundPlayer_FWDDECL)
#include <Modloader/app/structs/GhostGenericSoundPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostGenericSoundPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
