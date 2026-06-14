#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControlListGridController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControlListGridController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlListGridController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ControlListGridController__Fields_DEFINED
struct List_1_ControlSettingsItem_;
struct GameObject;
struct EquipmentUIInventoryGrid;
struct CleverMenuItemSelectionManager;
struct MessageProvider;
struct ControlListGridController__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_ControlSettingsItem_* ControlSettingsItems;
    struct GameObject* ControlSettingItemPrefab;
    struct EquipmentUIInventoryGrid* Grid;
    struct CleverMenuItemSelectionManager* ListNavigationManager;
    struct MessageProvider* GameplayControlsMessageProvider;
    struct MessageProvider* MenuControlsMessageProvider;
    struct MessageProvider* MapControlsMessageProvider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControlListGridController__Fields_FWDDECL)
#define IL2CPP_STRUCT_ControlListGridController__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_ControlSettingsItem_.h>
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_ControlListGridController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlListGridController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ControlListGridController__Fields_FWDDECL)
#include <Modloader/app/structs/ControlListGridController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControlListGridController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
