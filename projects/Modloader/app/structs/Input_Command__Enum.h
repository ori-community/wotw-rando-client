#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Input_Command__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Input_Command__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_Command__Enum_DEFINED)
#define IL2CPP_STRUCT_Input_Command__Enum_DEFINED
enum class Input_Command__Enum : int32_t {
    Unassigned = 0x00000000,
    Jump = 0x00000001,
    Interact = 0x00000002,
    Ability1 = 0x00000003,
    Ability2 = 0x00000004,
    Ability3 = 0x00000005,
    Glide = 0x00000006,
    Grab = 0x00000007,
    Dash = 0x00000008,
    Burrow = 0x00000009,
    Bash = 0x0000000a,
    Grapple = 0x0000000b,
    DialogueAdvance = 0x0000000c,
    DialogueOption1 = 0x0000000d,
    DialogueOption2 = 0x0000000e,
    DialogueOption3 = 0x0000000f,
    DialogueExit = 0x00000010,
    OpenLastMapShardsInventory = 0x00000011,
    OpenInventory = 0x00000012,
    OpenWorldMap = 0x00000013,
    OpenAreaMap = 0x00000014,
    OpenShardsScreen = 0x00000015,
    OpenWeaponWheel = 0x00000016,
    OpenPauseScreen = 0x00000017,
    OpenLiveSignIn = 0x00000018,
    MenuSelect = 0x00000019,
    MenuBack = 0x0000001a,
    MenuClose = 0x0000001b,
    MenuPageLeft = 0x0000001c,
    MenuPageRight = 0x0000001d,
    LeaderboardCycleFilter = 0x0000001e,
    MapZoomIn = 0x0000001f,
    MapZoomOut = 0x00000020,
    MapFilter = 0x00000021,
    MapDetails = 0x00000022,
    MapFocusOri = 0x00000023,
    MapFocusObjective = 0x00000024,
    MainMenuSaveCopy = 0x00000025,
    MainMenuSaveDelete = 0x00000026,
};
#endif
#if !defined(IL2CPP_STRUCT_Input_Command__Enum_FWDDECL)
#define IL2CPP_STRUCT_Input_Command__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Input_Command__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_Command__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Input_Command__Enum_FWDDECL)
#include <Modloader/app/structs/Input_Command__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Input_Command__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
