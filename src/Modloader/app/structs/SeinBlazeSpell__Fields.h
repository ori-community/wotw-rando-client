#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinBlazeSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinBlazeSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBlazeSpell__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/SeinBlazeSpell_BlazeTypes__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_SeinBlazeSpell_BlazeTypes__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinBlazeSpell__Fields_DEFINED
struct SeinBlazeSpell_BalancingData;
struct MoonTimeline;
struct EventTriggerAnimator;
struct HorizontalPlatformMovementSettings_SpeedSet;
struct GameObject;
struct GlowChargeEffect;
struct SeinBlazeSpell_BlazeSetupInfo__Array;
struct SeinBlazeSpell_States;
struct StateMachine_2;
struct SeinBlazeSpell__Fields {
    struct CharacterState__Fields _;
    struct SeinBlazeSpell_BalancingData* Balancing;
    struct MoonTimeline* BlazeReleaseTimelineGround;
    struct EventTriggerAnimator* BlazeReleaseTriggerGround;
    struct MoonTimeline* BlazeReleaseTimelineAir;
    struct EventTriggerAnimator* BlazeReleaseTriggerAir;
    struct MoonTimeline* BlazeFullChargeTimeline;
    struct MoonTimeline* BlazeFullTimeline;
    struct EventTriggerAnimator* BlazeFullReleaseTrigger;
    struct HorizontalPlatformMovementSettings_SpeedSet* GroundMovementSettings;
    struct HorizontalPlatformMovementSettings_SpeedSet* AirMovementSettings;
    float QuickBlazeRange;
    DamageWeight__Enum QuickBlazeWeight;

    DamageWeight__Enum FullBlazeWeight;

    struct GameObject* ChargeEffectPrefab;
    struct GlowChargeEffect* m_currentChargeEffect;
    bool m_hasReleasedBlaze;
    struct SeinBlazeSpell_BlazeSetupInfo__Array* m_blazeSetups;
    SeinBlazeSpell_BlazeTypes__Enum m_currentBlaze;

    struct SeinBlazeSpell_States* BlazeStates;
    struct StateMachine_2* m_stateMachine;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinBlazeSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinBlazeSpell__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GlowChargeEffect.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedSet.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SeinBlazeSpell_BalancingData.h>
#include <Modloader/app/structs/SeinBlazeSpell_BlazeSetupInfo__Array.h>
#include <Modloader/app/structs/SeinBlazeSpell_States.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_SeinBlazeSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBlazeSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinBlazeSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinBlazeSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinBlazeSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
