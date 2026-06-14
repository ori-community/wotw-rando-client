#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinBlazeSpell_BalancingData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinBlazeSpell_BalancingData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBlazeSpell_BalancingData__Fields_DEFINED)
#include <Modloader/app/structs/OriAttackBalancingData__Fields.h>
#if defined(IL2CPP_STRUCT_OriAttackBalancingData__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinBlazeSpell_BalancingData__Fields_DEFINED
struct SerializedByteUberState;
struct SeinBlazeSpell_BalancingData_BlazeSettings;
struct SeinBlazeSpell_BalancingData__Fields {
    struct OriAttackBalancingData__Fields _;
    struct SerializedByteUberState* ChargeUpgradeLevel;
    struct SeinBlazeSpell_BalancingData_BlazeSettings* BlazeSettingsLevel1;
    struct SeinBlazeSpell_BalancingData_BlazeSettings* BlazeSettingsLevel2;
    struct SeinBlazeSpell_BalancingData_BlazeSettings* BlazeSettingsLevel3;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinBlazeSpell_BalancingData__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinBlazeSpell_BalancingData__Fields_FWDDECL
#include <Modloader/app/structs/SeinBlazeSpell_BalancingData_BlazeSettings.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#endif
#undef IL2CPP_STRUCT_SeinBlazeSpell_BalancingData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBlazeSpell_BalancingData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinBlazeSpell_BalancingData__Fields_FWDDECL)
#include <Modloader/app/structs/SeinBlazeSpell_BalancingData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinBlazeSpell_BalancingData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
