#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinStomp__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinStomp__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinStomp__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinStomp__Fields_DEFINED
struct StateMachine_2;
struct SeinStomp_States;
struct AnimationCurve;
struct MoonAnimation;
struct SoundSource;
struct GameObject;
struct DamageOwner;
struct SeinStomp__Fields {
    struct CharacterState__Fields _;
    float IdleDuration;
    struct StateMachine_2* Logic;
    struct SeinStomp_States* State;
    float StompBlashRadius;
    float Damage;
    float UpgradedDamage;
    struct AnimationCurve* StompBlastFalloutCurve;
    struct MoonAnimation* StompBounce;
    struct MoonAnimation* StompDown;
    float StompDownDuration;
    struct SoundSource* StompFallSound;
    struct SoundSource* StompFallSoundUpgraded;
    struct MoonAnimation* StompIdle;
    struct MoonAnimation* StompLand;
    float StompLandDuration;
    struct GameObject* StompLandEffect;
    struct GameObject* StompLandEffectUpgraded;
    struct SoundSource* StompLandSound;
    struct SoundSource* StompLandSoundUpgraded;
    float StompSpeed;
    struct SoundSource* StompStartSound;
    struct SoundSource* StompStartSoundUpgraded;
    float UpwardDeceleration;
    struct DamageOwner* m_damageOwner;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinStomp__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinStomp__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SeinStomp_States.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_SeinStomp__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinStomp__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinStomp__Fields_FWDDECL)
#include <Modloader/app/structs/SeinStomp__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinStomp__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
