#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PauseScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PauseScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseScreen__Fields_DEFINED)
#include <Modloader/app/structs/MenuScreen__Fields.h>
#if defined(IL2CPP_STRUCT_MenuScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_PauseScreen__Fields_DEFINED
struct CleverMenuItemSelectionManager;
struct MessageBox;
struct MessageProvider;
struct GameObject;
struct CleverMenuItem;
struct PauseMenuProgressElements;
struct PauseMenuInventoryElements;
struct Transform;
struct PauseScreen__Fields {
    struct MenuScreen__Fields _;
    struct CleverMenuItemSelectionManager* NavigationManager;
    struct MessageBox* SkipText;
    struct MessageBox* BackOutText;
    struct MessageBox* ExitReplayText;
    struct MessageProvider* SkipCutsceneMessage;
    struct MessageProvider* RestartReplayMessage;
    struct MessageProvider* ExitReplayMessage;
    struct MessageProvider* BackOutMessage;
    struct MessageProvider* SkipPrologueMessage;
    struct GameObject* Fader;
    struct CleverMenuItem* lastItem;
    struct PauseMenuProgressElements* ProgressElements;
    struct PauseMenuInventoryElements* InventoryElements;
    struct Transform* Items;
    struct Transform* BackupSaves;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PauseScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_PauseScreen__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/PauseMenuInventoryElements.h>
#include <Modloader/app/structs/PauseMenuProgressElements.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PauseScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PauseScreen__Fields_FWDDECL)
#include <Modloader/app/structs/PauseScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PauseScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
