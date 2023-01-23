#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShopkeeperScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShopkeeperScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopkeeperScreen__Fields_DEFINED)
#include <Modloader/app/structs/PurchaseContext.h>
#include <Modloader/app/structs/PurchaseThingScreen__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_PurchaseThingScreen__Fields_DEFINED) && defined(IL2CPP_STRUCT_PurchaseContext_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_ShopkeeperScreen__Fields_DEFINED
struct ShopkeeperScreen;
struct LegacyTransparencyAnimator;
struct GameObject;
struct Transform;
struct ShopkeeperUIDetails;
struct EquipmentUIInventoryGrid;
struct ShopKeeperHints;
struct MessageBox;
struct ShopkeeperScreen__Fields {
    struct PurchaseThingScreen__Fields _;
    struct ShopkeeperScreen* _ShopInstance_k__BackingField;
    bool HideScreenAfterPurchase;
    struct LegacyTransparencyAnimator* FadeAnimator;
    struct GameObject* m_bindingsCanvas;
    struct GameObject* DetailsCanvasPrefab;
    struct Transform* AnchorItemDetails;
    struct ShopkeeperUIDetails* m_detailsCanvas;
    struct GameObject* ItemPrefab;
    struct GameObject* ItemHighlightGO;
    struct EquipmentUIInventoryGrid* Grid;
    bool SortedByCost;
    bool _PurchasedItem_k__BackingField;
    struct PurchaseContext PurchaseContext;
    bool m_isHiding;
    struct ShopKeeperHints* Hints2;
    struct MessageBox* m_currentHint;
    bool m_isInitiated;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShopkeeperScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShopkeeperScreen__Fields_FWDDECL
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/ShopKeeperHints.h>
#include <Modloader/app/structs/ShopkeeperScreen.h>
#include <Modloader/app/structs/ShopkeeperUIDetails.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ShopkeeperScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopkeeperScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShopkeeperScreen__Fields_FWDDECL)
#include <Modloader/app/structs/ShopkeeperScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShopkeeperScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
