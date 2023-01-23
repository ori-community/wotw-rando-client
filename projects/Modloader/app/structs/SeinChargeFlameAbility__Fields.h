#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinChargeFlameAbility__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinChargeFlameAbility__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeFlameAbility__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinChargeFlameAbility__Fields_DEFINED
struct SoundSource;
struct AchievementAsset;
struct SoundProvider;
struct SeinChargeFlameAbility_ChargeFlameDefinitions;
struct SeinChargeFlameAbility_States;
struct StateMachine_2;
struct GameObject;
struct SeinChargeFlameAbility__Fields {
    struct CharacterState__Fields _;
    struct SoundSource* ChargingSoundLevelA;
    struct SoundSource* ChargingSoundLevelB;
    struct SoundSource* ChargingSoundLevelC;
    struct AchievementAsset* KillEnemiesSimultaneouslyAchievement;
    struct SoundProvider* NotEnoughEnergySound;
    struct SeinChargeFlameAbility_ChargeFlameDefinitions* ChargeFlameSettings;
    struct SeinChargeFlameAbility_States* State;
    struct StateMachine_2* Logic;
    struct GameObject* m_chargeFlameChargeEffect;
    float EnergyCost;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinChargeFlameAbility__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinChargeFlameAbility__Fields_FWDDECL
#include <Modloader/app/structs/AchievementAsset.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SeinChargeFlameAbility_ChargeFlameDefinitions.h>
#include <Modloader/app/structs/SeinChargeFlameAbility_States.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_SeinChargeFlameAbility__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeFlameAbility__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinChargeFlameAbility__Fields_FWDDECL)
#include <Modloader/app/structs/SeinChargeFlameAbility__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinChargeFlameAbility__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
