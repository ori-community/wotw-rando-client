#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundPlayer_DEFINED)
#include <Modloader/app/structs/SoundPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_SoundPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundPlayer_DEFINED
struct SoundPlayer__Class;
struct SoundPlayer {
    struct SoundPlayer__Class* klass;
    MonitorData* monitor;
    struct SoundPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundPlayer_FWDDECL)
#define IL2CPP_STRUCT_SoundPlayer_FWDDECL
#include <Modloader/app/structs/SoundPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundPlayer_DEFINED) && !defined(IL2CPP_STRUCT_SoundPlayer_FWDDECL)
#include <Modloader/app/structs/SoundPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
