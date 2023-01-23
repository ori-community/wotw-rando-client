#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MantisGrayboxEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MantisGrayboxEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisGrayboxEntity__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#include <Modloader/app/structs/MantisSpawnType__Enum.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_MantisSpawnType__Enum_DEFINED)
#define IL2CPP_STRUCT_MantisGrayboxEntity__Fields_DEFINED
struct Action;
struct IgnoreGoThroughPlatforms;
struct DamageDealer;
struct List_1_FirewhirlBeamSpawner_;
struct RetaliationRuleHandler;
struct Switch_1;
struct MantisGrayboxEntity__Fields {
    struct EnemyEntity__Fields _;
    struct Action* OnRespawned;
    DamageWeight__Enum m_defaultTouchDamageWeight;

    struct IgnoreGoThroughPlatforms* m_ignoreGoThroughs;
    struct DamageDealer* m_hitbox;
    float m_baseJumpAttackCooldown;
    int32_t ShockwaveAttackBeamCount;
    float ShockwaveAttackDamageAmount;
    struct List_1_FirewhirlBeamSpawner_* ShockwaveSpawners;
    struct RetaliationRuleHandler* RetaliationRule;
    struct Switch_1* FirstJumpSwitch;
    struct Switch_1* SecondJumpSwitch;
    struct Switch_1* ThirdJumpSwitch;
    MantisSpawnType__Enum _SpawnType_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MantisGrayboxEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_MantisGrayboxEntity__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/IgnoreGoThroughPlatforms.h>
#include <Modloader/app/structs/List_1_FirewhirlBeamSpawner_.h>
#include <Modloader/app/structs/RetaliationRuleHandler.h>
#include <Modloader/app/structs/Switch_1.h>
#endif
#undef IL2CPP_STRUCT_MantisGrayboxEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisGrayboxEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MantisGrayboxEntity__Fields_FWDDECL)
#include <Modloader/app/structs/MantisGrayboxEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MantisGrayboxEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
