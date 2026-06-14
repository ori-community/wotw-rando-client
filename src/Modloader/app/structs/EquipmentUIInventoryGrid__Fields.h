#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EquipmentUIInventoryGrid__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EquipmentUIInventoryGrid__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentUIInventoryGrid__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_EquipmentUIInventoryGrid__Fields_DEFINED
struct Transform;
struct List_1_System_Int32_;
struct LegacyTransparencyAnimator;
struct Action_1_Boolean_;
struct Action_1_UnityEngine_GameObject_;
struct CleverMenuItemSelectionManager;
struct GameObject;
struct CleverMenuItem;
struct List_1_EquipmentUIInventoryItem_;
struct EquipmentUIInventoryGrid__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* ItemRoot;
    float ItemStepX;
    float ItemStepY;
    float ItemOffsetAlternating;
    int32_t ItemsPerRow;
    int32_t AlternatingRowItemDelta;
    int32_t VisibleRows;
    bool ShouldScroll;
    float BonusStep;
    struct List_1_System_Int32_* BonusSpacePattern;
    float BonusStep2;
    struct List_1_System_Int32_* Bonus2SpacePattern;
    struct LegacyTransparencyAnimator* FadeAnimator;
    bool HideItemHighlightWhenInactive;
    struct Action_1_Boolean_* OnNewItemHighlighted;
    struct Action_1_UnityEngine_GameObject_* OnNewItemInstantiated;
    struct CleverMenuItemSelectionManager* m_navManager;
    bool m_isActive;
    struct GameObject* m_itemPrefab;
    struct GameObject* m_itemHighlight;
    struct CleverMenuItem* m_lastSelectedItem;
    struct List_1_EquipmentUIInventoryItem_* m_itemsCache;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EquipmentUIInventoryGrid__Fields_FWDDECL)
#define IL2CPP_STRUCT_EquipmentUIInventoryGrid__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/Action_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/List_1_EquipmentUIInventoryItem_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_EquipmentUIInventoryGrid__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentUIInventoryGrid__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EquipmentUIInventoryGrid__Fields_FWDDECL)
#include <Modloader/app/structs/EquipmentUIInventoryGrid__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EquipmentUIInventoryGrid__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
