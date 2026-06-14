#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGlowSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGlowSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGlowSpell__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinGlowSpell_GlowState__Enum.h>
#include <Modloader/app/structs/SeinGlowSpell_QuickGlowTypes__Enum.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinGlowSpell_GlowState__Enum_DEFINED) && defined(IL2CPP_STRUCT_SeinGlowSpell_QuickGlowTypes__Enum_DEFINED) && defined(IL2CPP_STRUCT_StressTestStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinGlowSpell__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct GameObject;
struct SeinGlowSpell_BalancingData;
struct AnimationCurve;
struct SeinGlowSpell_QuickGlowSetupInfo__Array;
struct GlowChargeEffect;
struct List_1_SeinGlowSpell_GlowLightInfo_;
struct ProtectiveLightRadial;
struct List_1_Moon_Entity_;
struct SeinGlowSpell__Fields {
    struct CharacterState__Fields _;
    struct MoonTimeline* QuickGlowReleaseTimelineGround;
    struct EventTriggerAnimator* QuickReleaseTriggerGround;
    struct MoonTimeline* QuickGlowReleaseTimelineAir;
    struct EventTriggerAnimator* QuickReleaseTriggerAir;
    struct MoonTimeline* QuickGlowReleaseTimelineWater;
    struct EventTriggerAnimator* QuickReleaseTriggerWater;
    struct MoonTimeline* FullGlowReleaseTimeline;
    struct MoonTimeline* FullGlowChargeTimeline;
    struct EventTriggerAnimator* FullReleaseTrigger;
    struct EventTriggerAnimator* FullReleaseUnblockTrigger;
    struct GameObject* QuickGlowPrefab;
    struct GameObject* FullGlowPrefab;
    struct GameObject* ChargeEffectPrefab;
    struct GameObject* HitImpactEffect;
    struct GameObject* HitImpactEffectSmall;
    float HoldButtonDurationForCharge;
    float InputLockTimeToStopGlow;
    float HorizontalAirMaxSpeed;
    float HorizontalAirDeceleration;
    float WaterMaxSpeed;
    float WaterDeceleration;
    float GroundMaxSpeed;
    float GroundDeceleration;
    struct SeinGlowSpell_BalancingData* Balancing;
    float QuickGlowDamage;
    float QuickGlowForce;
    float QuickGlowEnergyCost;
    float QuickGlowLightRadius;
    struct AnimationCurve* QuickGlowLightTurnOnCurve;
    struct AnimationCurve* QuickGlowLightTurnOffCurve;
    float DamageOverTimeAmount;
    float DamageOverTimeForce;
    float DamageOverTimeTickRate;
    bool FullGlowAllowed;
    float FullGlowDamage;
    float FullGlowForce;
    float FullGlowEnergyCost;
    float FullGlowLightRadius;
    float FullGlowLightOnDuration;
    struct AnimationCurve* FullGlowLightTurnOnCurve;
    struct AnimationCurve* FullGlowLightTurnOffCurve;
    SeinGlowSpell_GlowState__Enum m_currentState;

    struct MoonTimeline* m_currentlyPlayingTimeline;
    bool m_facingLeft;
    bool m_hasPerformedGlow;
    struct SeinGlowSpell_QuickGlowSetupInfo__Array* m_quickGlowSetups;
    SeinGlowSpell_QuickGlowTypes__Enum m_currentQuickGlow;

    struct GlowChargeEffect* m_currentChargeEffect;
    struct List_1_SeinGlowSpell_GlowLightInfo_* m_glowLights;
    struct ProtectiveLightRadial* m_lightRadial;
    float m_oriLightRadius;
    float m_holdButtonDuration;
    bool m_buttonReleaseRequired;
    float m_inputLockDuration;
    bool m_canNotifyEnergy;
    float m_timeUntilNextDamageTick;
    struct List_1_Moon_Entity_* m_alreadyGlowedEntities;
    float m_quickGlowOnTimer;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGlowSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinGlowSpell__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GlowChargeEffect.h>
#include <Modloader/app/structs/List_1_Moon_Entity_.h>
#include <Modloader/app/structs/List_1_SeinGlowSpell_GlowLightInfo_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ProtectiveLightRadial.h>
#include <Modloader/app/structs/SeinGlowSpell_BalancingData.h>
#include <Modloader/app/structs/SeinGlowSpell_QuickGlowSetupInfo__Array.h>
#endif
#undef IL2CPP_STRUCT_SeinGlowSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGlowSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinGlowSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinGlowSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGlowSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
