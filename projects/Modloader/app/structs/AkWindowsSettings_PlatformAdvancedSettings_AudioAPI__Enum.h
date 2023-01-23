#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum_DEFINED)
#define IL2CPP_STRUCT_AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum_DEFINED
enum class AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum : int32_t {
    None = 0x00000000,
    Wasapi = 0x00000001,
    XAudio2 = 0x00000002,
    DirectSound = 0x00000004,
    Default = -1,
};
#endif
#if !defined(IL2CPP_STRUCT_AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum_FWDDECL)
#define IL2CPP_STRUCT_AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum_FWDDECL)
#include <Modloader/app/structs/AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
