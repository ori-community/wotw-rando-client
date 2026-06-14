#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCallbackType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCallbackType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackType__Enum_DEFINED)
#define IL2CPP_STRUCT_AkCallbackType__Enum_DEFINED
enum class AkCallbackType__Enum : int32_t {
    AK_EndOfEvent = 0x00000001,
    AK_EndOfDynamicSequenceItem = 0x00000002,
    AK_Marker = 0x00000004,
    AK_Duration = 0x00000008,
    AK_SpeakerVolumeMatrix = 0x00000010,
    AK_Starvation = 0x00000020,
    AK_MusicPlaylistSelect = 0x00000040,
    AK_MusicPlayStarted = 0x00000080,
    AK_MusicSyncBeat = 0x00000100,
    AK_MusicSyncBar = 0x00000200,
    AK_MusicSyncEntry = 0x00000400,
    AK_MusicSyncExit = 0x00000800,
    AK_MusicSyncGrid = 0x00001000,
    AK_MusicSyncUserCue = 0x00002000,
    AK_MusicSyncPoint = 0x00004000,
    AK_MusicSyncAll = 0x00007f00,
    AK_MIDIEvent = 0x00010000,
    AK_CallbackBits = 0x000fffff,
    AK_EnableGetSourcePlayPosition = 0x00100000,
    AK_EnableGetMusicPlayPosition = 0x00200000,
    AK_EnableGetSourceStreamBuffering = 0x00400000,
    AK_Monitoring = 0x20000000,
    AK_AudioSourceChange = 0x23000000,
    AK_Bank = 0x40000000,
    AK_AudioInterruption = 0x22000000,
};
#endif
#if !defined(IL2CPP_STRUCT_AkCallbackType__Enum_FWDDECL)
#define IL2CPP_STRUCT_AkCallbackType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AkCallbackType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AkCallbackType__Enum_FWDDECL)
#include <Modloader/app/structs/AkCallbackType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCallbackType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
