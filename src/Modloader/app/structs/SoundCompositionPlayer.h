#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundCompositionPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundCompositionPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionPlayer_DEFINED)
#include <Modloader/app/structs/SoundCompositionPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_SoundCompositionPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundCompositionPlayer_DEFINED
struct SoundCompositionPlayer__Class;
struct SoundCompositionPlayer {
    struct SoundCompositionPlayer__Class* klass;
    MonitorData* monitor;
    struct SoundCompositionPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundCompositionPlayer_FWDDECL)
#define IL2CPP_STRUCT_SoundCompositionPlayer_FWDDECL
#include <Modloader/app/structs/SoundCompositionPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundCompositionPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionPlayer_DEFINED) && !defined(IL2CPP_STRUCT_SoundCompositionPlayer_FWDDECL)
#include <Modloader/app/structs/SoundCompositionPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundCompositionPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
