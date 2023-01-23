#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundPlayerRef_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundPlayerRef_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundPlayerRef_DEFINED)
#define IL2CPP_STRUCT_SoundPlayerRef_DEFINED
struct SoundPlayer;
struct SoundPlayerRef {
    struct SoundPlayer* m_soundPlayer;
};
#endif
#if !defined(IL2CPP_STRUCT_SoundPlayerRef_FWDDECL)
#define IL2CPP_STRUCT_SoundPlayerRef_FWDDECL
#include <Modloader/app/structs/SoundPlayer.h>
#endif
#undef IL2CPP_STRUCT_SoundPlayerRef_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundPlayerRef_DEFINED) && !defined(IL2CPP_STRUCT_SoundPlayerRef_FWDDECL)
#include <Modloader/app/structs/SoundPlayerRef.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundPlayerRef.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
