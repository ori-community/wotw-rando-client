#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserOrigination__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserOrigination__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserOrigination__Enum_DEFINED)
#define IL2CPP_STRUCT_UserOrigination__Enum_DEFINED
enum class UserOrigination__Enum : int32_t {
    Organic = 0x00000000,
    Steam = 0x00000001,
    Google = 0x00000002,
    Amazon = 0x00000003,
    Facebook = 0x00000004,
    Kongregate = 0x00000005,
    GamersFirst = 0x00000006,
    Unknown = 0x00000007,
    IOS = 0x00000008,
    LoadTest = 0x00000009,
    Android = 0x0000000a,
    PSN = 0x0000000b,
    GameCenter = 0x0000000c,
    CustomId = 0x0000000d,
    XboxLive = 0x0000000e,
    Parse = 0x0000000f,
    Twitch = 0x00000010,
    WindowsHello = 0x00000011,
    ServerCustomId = 0x00000012,
    NintendoSwitchDeviceId = 0x00000013,
    FacebookInstantGamesId = 0x00000014,
    OpenIdConnect = 0x00000015,
};
#endif
#if !defined(IL2CPP_STRUCT_UserOrigination__Enum_FWDDECL)
#define IL2CPP_STRUCT_UserOrigination__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_UserOrigination__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserOrigination__Enum_DEFINED) && !defined(IL2CPP_STRUCT_UserOrigination__Enum_FWDDECL)
#include <Modloader/app/structs/UserOrigination__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserOrigination__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
