#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkAudioDeviceState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkAudioDeviceState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAudioDeviceState__Enum_DEFINED)
#define IL2CPP_STRUCT_AkAudioDeviceState__Enum_DEFINED
enum class AkAudioDeviceState__Enum : int32_t {
    AkDeviceState_Active = 0x00000001,
    AkDeviceState_Disabled = 0x00000002,
    AkDeviceState_NotPresent = 0x00000004,
    AkDeviceState_Unplugged = 0x00000008,
    AkDeviceState_All = 0x0000000f,
};
#endif
#if !defined(IL2CPP_STRUCT_AkAudioDeviceState__Enum_FWDDECL)
#define IL2CPP_STRUCT_AkAudioDeviceState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AkAudioDeviceState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAudioDeviceState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AkAudioDeviceState__Enum_FWDDECL)
#include <Modloader/app/structs/AkAudioDeviceState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkAudioDeviceState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
