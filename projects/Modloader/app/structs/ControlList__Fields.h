#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControlList__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControlList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlList__Fields_DEFINED)
#include <Modloader/app/structs/ControlsScreen_ControlListEnum__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ControlsScreen_ControlListEnum__Enum_DEFINED)
#define IL2CPP_STRUCT_ControlList__Fields_DEFINED
struct KeybindingCommandMapAsset;
struct CleverMenuItemSelectionManager;
struct GameObject;
struct EquipmentUIInventoryGrid;
struct Transform;
struct List_1_ControlItem_;
struct List_1_ControlUIItem_;
struct List_1_UnityEngine_KeyCode_;
struct ControlUIItem;
struct ControlList__Fields {
    struct MonoBehaviour__Fields _;
    struct KeybindingCommandMapAsset* KeybindingMap;
    struct CleverMenuItemSelectionManager* ListNavigationManager;
    int32_t m_waitingForKey;
    ControlsScreen_ControlListEnum__Enum ListType;

    struct GameObject* ControlItemPrefab;
    struct EquipmentUIInventoryGrid* Grid;
    struct Transform* Root;
    struct List_1_ControlItem_* Items;
    struct List_1_ControlUIItem_* UIItems;
    struct GameObject* HighlightObject;
    bool m_initialized;
    struct List_1_UnityEngine_KeyCode_* IllegalKeys;
    struct ControlUIItem* TargetItem;
    int32_t TargetIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControlList__Fields_FWDDECL)
#define IL2CPP_STRUCT_ControlList__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/ControlUIItem.h>
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/KeybindingCommandMapAsset.h>
#include <Modloader/app/structs/List_1_ControlItem_.h>
#include <Modloader/app/structs/List_1_ControlUIItem_.h>
#include <Modloader/app/structs/List_1_UnityEngine_KeyCode_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ControlList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlList__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ControlList__Fields_FWDDECL)
#include <Modloader/app/structs/ControlList__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControlList__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
