#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinMeditateSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinMeditateSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinMeditateSpell__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinMeditateSpell_State__Enum.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinMeditateSpell_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED)
#define IL2CPP_STRUCT_SeinMeditateSpell__Fields_DEFINED
struct SeinMeditateSpell_BalancingData;
struct MoonAnimation;
struct GameObject;
struct Event_1;
struct RTPC;
struct Transform;
struct GlowChargeEffect;
struct SeinMeditateSpell__Fields {
    struct CharacterState__Fields _;
    float DelayBetweenHeals;
    struct SeinMeditateSpell_BalancingData* Balancing;
    float DelayBeforeCharging;
    float IdleToChargingDuration;
    float HealDuration;
    float VisualHealthBarFillSpeed;
    float MinPlayTimeWhenHealthFull;
    struct MoonAnimation* IdleToChargingAnimation;
    struct MoonAnimation* HealAnimation;
    struct MoonAnimation* HealLoopAnimation;
    struct GameObject* HealEndEffect;
    struct Event_1* ChargingSoundEvent;
    struct Event_1* ChargingCompleteSoundEvent;
    struct Event_1* HealthAlreadyFullSoundEvent;
    struct RTPC* NormalizedHealthRTPC;
    struct GameObject* ChargeEffect;
    struct Transform* ChargeEffectPosition;
    struct GlowChargeEffect* m_currentChargeEffect;
    bool m_notifiedOutOfEnergy;
    bool m_notifiedFullHealth;
    float m_epsilon;
    float m_healthGained;
    float m_delayBeforeStart;
    float m_spentEnergy;
    SeinMeditateSpell_State__Enum CurrentState;

    float m_currentStateTime;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinMeditateSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinMeditateSpell__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GlowChargeEffect.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SeinMeditateSpell_BalancingData.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinMeditateSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinMeditateSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinMeditateSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinMeditateSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinMeditateSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
