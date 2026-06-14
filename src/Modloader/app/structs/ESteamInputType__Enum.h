#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ESteamInputType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ESteamInputType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ESteamInputType__Enum_DEFINED)
#define IL2CPP_STRUCT_ESteamInputType__Enum_DEFINED
enum class ESteamInputType__Enum : int32_t {
    k_ESteamInputType_Unknown = 0x00000000,
    k_ESteamInputType_SteamController = 0x00000001,
    k_ESteamInputType_XBox360Controller = 0x00000002,
    k_ESteamInputType_XBoxOneController = 0x00000003,
    k_ESteamInputType_GenericGamepad = 0x00000004,
    k_ESteamInputType_PS4Controller = 0x00000005,
    k_ESteamInputType_AppleMFiController = 0x00000006,
    k_ESteamInputType_AndroidController = 0x00000007,
    k_ESteamInputType_SwitchJoyConPair = 0x00000008,
    k_ESteamInputType_SwitchJoyConSingle = 0x00000009,
    k_ESteamInputType_SwitchProController = 0x0000000a,
    k_ESteamInputType_MobileTouch = 0x0000000b,
    k_ESteamInputType_PS3Controller = 0x0000000c,
    k_ESteamInputType_Count = 0x0000000d,
    k_ESteamInputType_MaximumPossibleValue = 0x000000ff,
};
#endif
#if !defined(IL2CPP_STRUCT_ESteamInputType__Enum_FWDDECL)
#define IL2CPP_STRUCT_ESteamInputType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ESteamInputType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ESteamInputType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ESteamInputType__Enum_FWDDECL)
#include <Modloader/app/structs/ESteamInputType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ESteamInputType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
