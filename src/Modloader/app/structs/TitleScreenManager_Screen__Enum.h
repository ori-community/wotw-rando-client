#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleScreenManager_Screen__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleScreenManager_Screen__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleScreenManager_Screen__Enum_DEFINED)
#define IL2CPP_STRUCT_TitleScreenManager_Screen__Enum_DEFINED
enum class TitleScreenManager_Screen__Enum : int32_t {
    PressStart = 0x00000000,
    WaitingForSaveGame = 0x00000001,
    MainMenu = 0x00000002,
    ExitGame = 0x00000003,
    Cutscenes = 0x00000004,
    DemoMenu = 0x00000005,
    TrialHelp = 0x00000006,
    SaveSlots = 0x00000007,
    LiveSignIn = 0x00000008,
    Undefined = 0x00000009,
    ProfileSelected = 0x0000000a,
    BackupSaves = 0x0000000b,
    Loading = 0x0000000c,
    RaceMenuScreen = 0x0000000d,
    FirstTimeQualitySettings = 0x0000000e,
};
#endif
#if !defined(IL2CPP_STRUCT_TitleScreenManager_Screen__Enum_FWDDECL)
#define IL2CPP_STRUCT_TitleScreenManager_Screen__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TitleScreenManager_Screen__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleScreenManager_Screen__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TitleScreenManager_Screen__Enum_FWDDECL)
#include <Modloader/app/structs/TitleScreenManager_Screen__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleScreenManager_Screen__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
