#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IGhostGenericSoundPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IGhostGenericSoundPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGhostGenericSoundPlayer_DEFINED)
#define IL2CPP_STRUCT_IGhostGenericSoundPlayer_DEFINED
struct IGhostGenericSoundPlayer__Class;
struct IGhostGenericSoundPlayer {
    struct IGhostGenericSoundPlayer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IGhostGenericSoundPlayer_FWDDECL)
#define IL2CPP_STRUCT_IGhostGenericSoundPlayer_FWDDECL
#include <Modloader/app/structs/IGhostGenericSoundPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_IGhostGenericSoundPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGhostGenericSoundPlayer_DEFINED) && !defined(IL2CPP_STRUCT_IGhostGenericSoundPlayer_FWDDECL)
#include <Modloader/app/structs/IGhostGenericSoundPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IGhostGenericSoundPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
