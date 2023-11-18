#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AbilityUpgradeSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AbilityUpgradeSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbilityUpgradeSettings__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AbilityUpgradeSettings__Fields_DEFINED
struct MessageProvider;
struct List_1_UpgradableAbility_;
struct Dictionary_2_AbilityType_UpgradableAbility_;
struct AbilityUpgradeSettings__Fields {
    struct MonoBehaviour__Fields _;
    float IncreasePercentPerLevel;
    struct MessageProvider* AlreadyOwnedText;
    struct List_1_UpgradableAbility_* Abilities;
    struct Dictionary_2_AbilityType_UpgradableAbility_* m_abilities;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AbilityUpgradeSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_AbilityUpgradeSettings__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_AbilityType_UpgradableAbility_.h>
#include <Modloader/app/structs/List_1_UpgradableAbility_.h>
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_AbilityUpgradeSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbilityUpgradeSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AbilityUpgradeSettings__Fields_FWDDECL)
#include <Modloader/app/structs/AbilityUpgradeSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AbilityUpgradeSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
