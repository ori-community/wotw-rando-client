#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkillUpgradeScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkillUpgradeScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillUpgradeScreen__Fields_DEFINED)
#include <Modloader/app/structs/PurchaseThingScreen__Fields.h>
#include <Modloader/app/structs/SkillUpgradeScreen_HintsSettings.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_PurchaseThingScreen__Fields_DEFINED) && defined(IL2CPP_STRUCT_SkillUpgradeScreen_HintsSettings_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SkillUpgradeScreen__Fields_DEFINED
struct UpgradeAbilityItem__Array;
struct LegacyTransparencyAnimator;
struct GameObject;
struct Transform;
struct SkillUpgradeUIUpgradeDetails;
struct SpellUIExperience;
struct EquipmentUIInventoryGrid;
struct MessageBox;
struct SkillUpgradeScreen__Fields {
    struct PurchaseThingScreen__Fields _;
    struct UpgradeAbilityItem__Array* Upgrades;
    struct LegacyTransparencyAnimator* FadeAnimator;
    struct GameObject* m_bindingsCanvas;
    struct GameObject* UpgradeDetailsCanvasPrefab;
    struct Transform* AnchorItemDetails;
    struct SkillUpgradeUIUpgradeDetails* m_upgradeDetailsCanvas;
    struct GameObject* UpgradeItemPrefab;
    struct GameObject* ItemHighlightGO;
    struct GameObject* ExperiencePrefab;
    struct Transform* AnchorExperience;
    struct SpellUIExperience* m_experience;
    struct EquipmentUIInventoryGrid* Grid;
    bool _PurchasedSkillUpgrade_k__BackingField;
    bool m_isHiding;
    struct SkillUpgradeScreen_HintsSettings Hints;
    struct MessageBox* m_currentHint;
    bool m_isInitiated;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkillUpgradeScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkillUpgradeScreen__Fields_FWDDECL
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/SkillUpgradeUIUpgradeDetails.h>
#include <Modloader/app/structs/SpellUIExperience.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UpgradeAbilityItem__Array.h>
#endif
#undef IL2CPP_STRUCT_SkillUpgradeScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillUpgradeScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkillUpgradeScreen__Fields_FWDDECL)
#include <Modloader/app/structs/SkillUpgradeScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkillUpgradeScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
