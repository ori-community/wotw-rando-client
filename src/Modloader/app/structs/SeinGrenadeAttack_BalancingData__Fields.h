#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGrenadeAttack_BalancingData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGrenadeAttack_BalancingData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrenadeAttack_BalancingData__Fields_DEFINED)
#include <Modloader/app/structs/OriAttackBalancingData__Fields.h>
#if defined(IL2CPP_STRUCT_OriAttackBalancingData__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinGrenadeAttack_BalancingData__Fields_DEFINED
struct SeinGrenadeAttack_BalancingData__Fields {
    struct OriAttackBalancingData__Fields _;
    float GrenadeDamage;
    float ChargedGrenadeDamage;
    float EnergyCost;
    float FireDamage;
    float FireDamageInterval;
    float FireDamageDuration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGrenadeAttack_BalancingData__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinGrenadeAttack_BalancingData__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SeinGrenadeAttack_BalancingData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrenadeAttack_BalancingData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinGrenadeAttack_BalancingData__Fields_FWDDECL)
#include <Modloader/app/structs/SeinGrenadeAttack_BalancingData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGrenadeAttack_BalancingData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
