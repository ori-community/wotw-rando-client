#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardPrefabs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardPrefabs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardPrefabs__Fields_DEFINED)
#include <Modloader/app/structs/EffectSpawn.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_EffectSpawn_DEFINED)
#define IL2CPP_STRUCT_SpiritShardPrefabs__Fields_DEFINED
struct GameObject;
struct SpiritShardPrefabs__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* FireShardEffect;
    struct GameObject* ExplosionEffect;
    struct GameObject* HealthOrb;
    struct GameObject* CounterstrikeEffectPrefab;
    struct GameObject* ChainLightningEffectPrefab;
    struct GameObject* UltraLeashDamageEffectPrefab;
    struct GameObject* MirrorStrikeEffectPrefab;
    struct GameObject* RickochetBounceFX;
    struct GameObject* RickochetBonusDamageHitFX;
    struct GameObject* LastResortActivateFX;
    struct GameObject* RecklessActivateFX;
    struct GameObject* UntouchableActivateFX;
    struct GameObject* ChainLightningControllerPrefab;
    struct EffectSpawn RecklessReceiveDamageEffect;
    struct EffectSpawn DamageBoostEffect;
    struct EffectSpawn CombatLuck;
    struct GameObject* RecklessDealDamageFX;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardPrefabs__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardPrefabs__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardPrefabs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardPrefabs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardPrefabs__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritShardPrefabs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardPrefabs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
