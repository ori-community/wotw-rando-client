#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkAudioAPI__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkAudioAPI__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAudioAPI__Enum_DEFINED)
#define IL2CPP_STRUCT_AkAudioAPI__Enum_DEFINED
enum class AkAudioAPI__Enum : int32_t {
    AkAPI_Wasapi = 0x00000001,
    AkAPI_XAudio2 = 0x00000002,
    AkAPI_DirectSound = 0x00000004,
    AkAPI_Default = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_AkAudioAPI__Enum_FWDDECL)
#define IL2CPP_STRUCT_AkAudioAPI__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AkAudioAPI__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAudioAPI__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AkAudioAPI__Enum_FWDDECL)
#include <Modloader/app/structs/AkAudioAPI__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkAudioAPI__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
