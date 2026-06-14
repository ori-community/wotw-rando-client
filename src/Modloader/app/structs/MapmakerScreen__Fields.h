#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MapmakerScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MapmakerScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapmakerScreen__Fields_DEFINED)
#include <Modloader/app/structs/MapmakerScreen_HintsSettings.h>
#include <Modloader/app/structs/PurchaseThingScreen__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_PurchaseThingScreen__Fields_DEFINED) && defined(IL2CPP_STRUCT_MapmakerScreen_HintsSettings_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_MapmakerScreen__Fields_DEFINED
struct MapmakerItem__Array;
struct SerializedBooleanUberState;
struct LegacyTransparencyAnimator;
struct GameObject;
struct Transform;
struct MapmakerUIDetails;
struct EquipmentUIInventoryGrid;
struct MessageBox;
struct MapmakerScreen__Fields {
    struct PurchaseThingScreen__Fields _;
    struct MapmakerItem__Array* Purchases;
    struct SerializedBooleanUberState* MapSecretsRevealedUberState;
    struct LegacyTransparencyAnimator* FadeAnimator;
    struct GameObject* m_bindingsCanvas;
    struct GameObject* UpgradeDetailsCanvasPrefab;
    struct Transform* AnchorItemDetails;
    struct MapmakerUIDetails* m_upgradeDetailsCanvas;
    struct GameObject* UpgradeItemPrefab;
    struct GameObject* ItemHighlightGO;
    struct GameObject* ExperiencePrefab;
    struct Transform* AnchorExperience;
    struct EquipmentUIInventoryGrid* Grid;
    bool _PurchasedSkillUpgrade_k__BackingField;
    bool m_isHiding;
    struct MapmakerScreen_HintsSettings Hints;
    struct MessageBox* m_currentHint;
    bool m_isInitiated;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MapmakerScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_MapmakerScreen__Fields_FWDDECL
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/MapmakerItem__Array.h>
#include <Modloader/app/structs/MapmakerUIDetails.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MapmakerScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapmakerScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MapmakerScreen__Fields_FWDDECL)
#include <Modloader/app/structs/MapmakerScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MapmakerScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
