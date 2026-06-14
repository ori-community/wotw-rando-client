#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpgradableMultiplier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpgradableMultiplier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradableMultiplier__Fields_DEFINED)
#include <Modloader/app/structs/CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum.h>
#if defined(IL2CPP_STRUCT_CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum_DEFINED)
#define IL2CPP_STRUCT_UpgradableMultiplier__Fields_DEFINED
struct SerializedByteUberState;
struct CombinedUpgradeEffectiveness;
struct __declspec(align(8)) UpgradableMultiplier__Fields {
    struct SerializedByteUberState* Level;
    CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum Type;

    struct CombinedUpgradeEffectiveness* Effectiveness;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpgradableMultiplier__Fields_FWDDECL)
#define IL2CPP_STRUCT_UpgradableMultiplier__Fields_FWDDECL
#include <Modloader/app/structs/CombinedUpgradeEffectiveness.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#endif
#undef IL2CPP_STRUCT_UpgradableMultiplier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradableMultiplier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UpgradableMultiplier__Fields_FWDDECL)
#include <Modloader/app/structs/UpgradableMultiplier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpgradableMultiplier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
