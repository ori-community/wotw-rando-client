#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EquipmentRadialSelection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EquipmentRadialSelection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentRadialSelection__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_EquipmentRadialSelection__Fields_DEFINED
struct AnimationCurve;
struct Dictionary_2_EquipmentType_EquipmentRadialSelection_ItemCache_;
struct HashSet_1_EquipmentType_;
struct Action_1_Boolean_;
struct CleverMenuItemSelectionManager;
struct GameObject;
struct GameObject__Array;
struct CleverMenuItem;
struct Transform;
struct Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_;
struct EquipmentRadialSelection__Fields {
    struct MonoBehaviour__Fields _;
    int32_t ItemsPerCircle;
    float Radius;
    bool HideItemHighlightWhenInactive;
    int32_t MaxVisibleItens;
    struct AnimationCurve* RadiusPerDistance;
    struct AnimationCurve* SizePerDistance;
    struct AnimationCurve* AlphaPerDistance;
    bool InfiniteScrolling;
    struct Dictionary_2_EquipmentType_EquipmentRadialSelection_ItemCache_* m_itemsCache;
    struct HashSet_1_EquipmentType_* m_tempEquipmentTypesWithRestrictions;
    struct Action_1_Boolean_* OnNewItemHighlighted;
    struct CleverMenuItemSelectionManager* m_navigationManager;
    bool m_isActive;
    struct GameObject* m_placeholderRoot;
    struct GameObject__Array* m_placeholderChildren;
    struct GameObject* m_itemPrefab;
    struct GameObject* m_itemHighlight;
    struct CleverMenuItem* m_lastSelectedItem;
    struct Transform* m_itemsRoot;
    struct Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_* m_cleverMenuItemToRadialItemVisual;
    int32_t m_rendererRefreshIndx;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EquipmentRadialSelection__Fields_FWDDECL)
#define IL2CPP_STRUCT_EquipmentRadialSelection__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_.h>
#include <Modloader/app/structs/Dictionary_2_EquipmentType_EquipmentRadialSelection_ItemCache_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/HashSet_1_EquipmentType_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_EquipmentRadialSelection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentRadialSelection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EquipmentRadialSelection__Fields_FWDDECL)
#include <Modloader/app/structs/EquipmentRadialSelection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EquipmentRadialSelection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
