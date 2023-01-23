#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGoldenSeinAbility__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGoldenSeinAbility__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGoldenSeinAbility__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/SeinGoldenSeinAbility_State__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_SeinGoldenSeinAbility_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinGoldenSeinAbility__Fields_DEFINED
struct GameObject;
struct SoundProvider;
struct MoonTimeline;
struct EventTriggerAnimator;
struct ConditionUberState;
struct GlowChargeEffect;
struct GoldenSein;
struct SeinGoldenSeinAbility__Fields {
    struct CharacterState__Fields _;
    struct GameObject* GoldenSeinPrefab;
    struct SoundProvider* EnableSound;
    struct GameObject* QuickGlowPrefab;
    struct GameObject* ChargeEffectPrefab;
    struct GameObject* HitImpactEffect;
    float HorizontalAirMaxSpeed;
    float HorizontalAirDeceleration;
    float WaterMaxSpeed;
    float WaterDeceleration;
    float HoldButtonDurationForCharge;
    struct MoonTimeline* ChargeReleaseTimeline;
    struct EventTriggerAnimator* ChargeReleaseTrigger;
    struct EventTriggerAnimator* ChargeReleaseUnblockTrigger;
    float ChargeDamage;
    float ChargeForce;
    DamageWeight__Enum ChargeDamageWeight;

    float ChargeEnergyCost;
    float ChargeRadius;
    struct MoonTimeline* ChargeStartedTimeline;
    struct MoonTimeline* ChargeInterrupptedTimeline;
    struct GameObject* InterrupptedInstantiateAnimator;
    struct ConditionUberState* DisableGoldenSeinCondition;
    bool m_playChargeInterruptEffect;
    SeinGoldenSeinAbility_State__Enum m_currentState;

    struct MoonTimeline* m_currentlyPlayingTimeline;
    bool m_facingLeft;
    bool m_hasPerformedGlow;
    struct GlowChargeEffect* m_currentChargeEffect;
    float m_holdButtonDuration;
    bool m_buttonReleaseRequired;
    bool m_canNotifyEnergy;
    struct GoldenSein* m_goldenSeinInstance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGoldenSeinAbility__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinGoldenSeinAbility__Fields_FWDDECL
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GlowChargeEffect.h>
#include <Modloader/app/structs/GoldenSein.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinGoldenSeinAbility__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGoldenSeinAbility__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinGoldenSeinAbility__Fields_FWDDECL)
#include <Modloader/app/structs/SeinGoldenSeinAbility__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGoldenSeinAbility__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
