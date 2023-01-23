#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpgradeAbilityItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpgradeAbilityItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradeAbilityItem__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED)
#define IL2CPP_STRUCT_UpgradeAbilityItem__Fields_DEFINED
struct MessageProvider;
struct Texture2D;
struct SerializedByteUberState;
struct ConditionUberState;
struct DesiredUberStateComposite;
struct UpgradableLevelProperties__Array;
struct UpgradeAbilityItem__Fields {
    struct ScriptableObject__Fields _;
    struct MessageProvider* Name;
    struct Texture2D* Icon;
    struct SerializedByteUberState* UpgradeLevel;
    struct ConditionUberState* RequiredCondition;
    AbilityType__Enum RequiredAbility;

    AbilityType__Enum AcquiredAbilityType;

    struct ConditionUberState* DiscountCondition;
    struct DesiredUberStateComposite* ChangeStateOnPurchase;
    float DiscountMultiplier;
    struct UpgradableLevelProperties__Array* LevelProperties;
    bool ListAsUsesEnergy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpgradeAbilityItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_UpgradeAbilityItem__Fields_FWDDECL
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/DesiredUberStateComposite.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/UpgradableLevelProperties__Array.h>
#endif
#undef IL2CPP_STRUCT_UpgradeAbilityItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradeAbilityItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UpgradeAbilityItem__Fields_FWDDECL)
#include <Modloader/app/structs/UpgradeAbilityItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpgradeAbilityItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
