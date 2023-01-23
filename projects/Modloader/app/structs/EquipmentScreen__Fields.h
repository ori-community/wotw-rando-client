#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EquipmentScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EquipmentScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentScreen__Fields_DEFINED)
#include <Modloader/app/structs/EquipmentScreen_HintsSettings.h>
#include <Modloader/app/structs/EquipmentScreen_State__Enum.h>
#include <Modloader/app/structs/MenuScreenStack__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MenuScreenStack__Fields_DEFINED) && defined(IL2CPP_STRUCT_EquipmentScreen_HintsSettings_DEFINED) && defined(IL2CPP_STRUCT_EquipmentScreen_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_EquipmentScreen__Fields_DEFINED
struct LegacyTransparencyAnimator;
struct GameObject;
struct Transform;
struct EquipmentUIDetails;
struct EquipmentSelectionGrid;
struct CleverMenuItemSelectionManager;
struct PlayerUberStateInventory_InventoryItem;
struct MessageBox;
struct EquipmentScreen__Fields {
    struct MenuScreenStack__Fields _;
    struct LegacyTransparencyAnimator* FadeAnimator;
    struct GameObject* ButtonBindingCanvasPrefab;
    struct Transform* AnchorCategoryContext;
    struct GameObject* m_bindingsCanvas;
    struct GameObject* SpellDetailsCanvasPrefab;
    struct Transform* AnchorItemDetails;
    struct EquipmentUIDetails* m_equipmentDetailsCanvas;
    struct GameObject* SpellItemPrefab;
    struct GameObject* ItemHighlightGO;
    struct LegacyTransparencyAnimator* TitleFaderAnimator;
    struct EquipmentSelectionGrid* Grid;
    struct CleverMenuItemSelectionManager* m_buttonAssignmentGrid;
    bool m_isHiding;
    struct EquipmentScreen_HintsSettings Hints;
    EquipmentScreen_State__Enum m_state;

    struct PlayerUberStateInventory_InventoryItem* m_autoFocusEquipment;
    struct MessageBox* m_currentHint;
    bool m_isInited;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EquipmentScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_EquipmentScreen__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/EquipmentSelectionGrid.h>
#include <Modloader/app/structs/EquipmentUIDetails.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_EquipmentScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EquipmentScreen__Fields_FWDDECL)
#include <Modloader/app/structs/EquipmentScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EquipmentScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
