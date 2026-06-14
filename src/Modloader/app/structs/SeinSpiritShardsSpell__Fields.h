#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSpiritShardsSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSpiritShardsSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritShardsSpell__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinSpiritShardsSpell_State__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinSpiritShardsSpell_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinSpiritShardsSpell__Fields_DEFINED
struct GameObject;
struct SoundProvider;
struct SoundPlayer;
struct AnimationMontage;
struct SeinSpiritShardsSpell__Fields {
    struct CharacterState__Fields _;
    struct GameObject* Shard;
    struct SoundProvider* ShotSound;
    struct SoundProvider* NotEnoughEnergySound;
    struct SoundProvider* ChargingSound;
    struct SoundPlayer* m_lastChargingSound;
    float EnergyCost;
    float ShardLifeTime;
    float ShardDamage;
    float ShardScale;
    float ChargedEnergyCost;
    float ChargedShardLifeTime;
    float ChargedShardDamage;
    float ChargedShardScale;
    float Speed;
    int32_t Count;
    float ChargeAfter;
    float ChargeDuration;
    struct AnimationMontage* GroundMontage;
    struct AnimationMontage* AirMontage;
    SeinSpiritShardsSpell_State__Enum m_state;

    float m_time;
    bool m_allowShot;
    bool m_chargedShot;
    struct AnimationMontage* m_currentMontage;
    struct GameObject* ChargingEffectToSpawn;
    struct GameObject* ChargedEffectToSpawn;
    struct GameObject* m_chargingEffect;
    struct GameObject* m_chargedEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSpiritShardsSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinSpiritShardsSpell__Fields_FWDDECL
#include <Modloader/app/structs/AnimationMontage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinSpiritShardsSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritShardsSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinSpiritShardsSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinSpiritShardsSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSpiritShardsSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
