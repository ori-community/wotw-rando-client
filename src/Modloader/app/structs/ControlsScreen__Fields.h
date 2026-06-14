#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControlsScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControlsScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlsScreen__Fields_DEFINED)
#include <Modloader/app/structs/ControlScheme__Enum.h>
#include <Modloader/app/structs/ControlsScreen_ControlListEnum__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ControlScheme__Enum_DEFINED) && defined(IL2CPP_STRUCT_ControlsScreen_ControlListEnum__Enum_DEFINED)
#define IL2CPP_STRUCT_ControlsScreen__Fields_DEFINED
struct MessageProvider;
struct KeybindingCommandMapAsset;
struct UISoundSettingsAsset;
struct PlayerInputRebinding_KeyBindingSettings;
struct GameObject;
struct MessageBox;
struct CleverMenuItemSelectionManager;
struct List_1_UnityEngine_KeyCode_;
struct List_1_ControlItem_;
struct ControlList;
struct CleverMenuItem;
struct ControlsScreen__Fields {
    struct MonoBehaviour__Fields _;
    ControlScheme__Enum DisplayScheme;

    struct MessageProvider* BindingInProgressMessageProvider;
    struct KeybindingCommandMapAsset* BindAsset;
    struct UISoundSettingsAsset* Sounds;
    bool m_initialized;
    struct PlayerInputRebinding_KeyBindingSettings* DefaultSettings;
    struct GameObject* KeyboardScheme;
    struct GameObject* MouseKeyboardScheme;
    struct GameObject* ControllerScheme;
    struct GameObject* SwitchScheme;
    struct GameObject* BindingPopup;
    struct GameObject* CycleControlsFooter;
    struct GameObject* CycleControlsDisabledFooter;
    struct MessageBox* BindingTitleBox;
    struct MessageBox* Header;
    struct CleverMenuItemSelectionManager* SelectionManager;
    struct List_1_UnityEngine_KeyCode_* KeyCodes;
    ControlsScreen_ControlListEnum__Enum CurrentList;

    struct MessageProvider* GameplayControlsMessageProvider;
    struct MessageProvider* MenuControlsMessageProvider;
    struct MessageProvider* MapControlsMessageProvider;
    struct MessageProvider* ControllerHeader;
    struct MessageProvider* KeyboardHeader;
    struct MessageProvider* KeyboardAndMouseHeader;
    struct MessageProvider* SwitchControllerHeader;
    struct List_1_ControlItem_* AllControlList;
    struct ControlList* GameplayControlList;
    struct ControlList* MapControlList;
    struct ControlList* MenuControlList;
    struct List_1_ControlItem_* GameplayItemList;
    struct List_1_ControlItem_* MenuItemList;
    struct List_1_ControlItem_* MapItemList;
    struct CleverMenuItem* ResetButton;
    bool BindingInProgress;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControlsScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_ControlsScreen__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/ControlList.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/KeybindingCommandMapAsset.h>
#include <Modloader/app/structs/List_1_ControlItem_.h>
#include <Modloader/app/structs/List_1_UnityEngine_KeyCode_.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/PlayerInputRebinding_KeyBindingSettings.h>
#include <Modloader/app/structs/UISoundSettingsAsset.h>
#endif
#undef IL2CPP_STRUCT_ControlsScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlsScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ControlsScreen__Fields_FWDDECL)
#include <Modloader/app/structs/ControlsScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControlsScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
