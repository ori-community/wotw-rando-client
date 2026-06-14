#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityHitReaction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityHitReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHitReaction__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_EntityHitReaction__Fields_DEFINED
struct AnimationCurve;
struct MoonAnimation__Array;
struct MoonAnimation;
struct MoonTimeline;
struct AnimationPostprocess__Array;
struct AnimationPostprocess;
struct EntityHitReaction_KickbackMultiplierSet;
struct EntityHitReaction_KickbackRuleOverride__Array;
struct EntityHitReaction_KickbackRuleOverrideForBehaviour__Array;
struct GameObject;
struct PrefabProvider;
struct SoundProvider;
struct EntityReactionBehaviour;
struct EntityTask__Array;
struct MoonTimeline__Array;
struct List_1_Moon_Timeline_MoonTimeline_;
struct __declspec(align(8)) EntityHitReaction__Fields {
    struct AnimationCurve* AnimWeightVsDamageAmountCurve;
    struct MoonAnimation__Array* AnimationPostprocesses;
    struct MoonAnimation* FrontDamagePostprocess;
    struct MoonAnimation* BackDamagePostprocess;
    struct MoonAnimation* FrontDamageAirPostprocess;
    struct MoonAnimation* BackDamageAirPostprocess;
    struct MoonTimeline* UpwardDamagePostprocess;
    float UpwardPostprocessKickbackMultiplier;
    bool StunlockProtectedFront;
    bool StunlockProtectedBack;
    struct AnimationPostprocess__Array* LegacyAnimationPostprocesses;
    struct AnimationPostprocess* LegacyFrontDamagePostprocess;
    struct AnimationPostprocess* LegacyBackDamagePostprocess;
    struct AnimationPostprocess* LegacyFrontDamageAirPostprocess;
    struct AnimationPostprocess* LegacyBackDamageAirPostprocess;
    struct EntityHitReaction_KickbackMultiplierSet* Mulipliers;
    float KickbackMin;
    float KickbackMax;
    struct AnimationCurve* KickbackCurve;
    struct EntityHitReaction_KickbackRuleOverride__Array* KickbackRuleOverrides;
    struct EntityHitReaction_KickbackRuleOverrideForBehaviour__Array* KickbackRuleOverridesForBehaviour;
    struct GameObject* DefaultEffectPrefab;
    struct PrefabProvider* EffectPrefabProvider;
    struct SoundProvider* SoundProvider;
    struct EntityReactionBehaviour* HorizontalKickbackBehaviour;
    struct EntityReactionBehaviour* VerticalKickbackBehaviour;
    struct EntityTask__Array* NonInterruptableBehavioursHorizontal;
    struct EntityTask__Array* NonInterruptableBehavioursVertical;
    struct MoonTimeline__Array* NonInterruptableTimelinesHorizontal;
    struct MoonTimeline__Array* NonInterruptableTimelinesVertical;
    struct List_1_Moon_Timeline_MoonTimeline_* NonInterruptibleTimelinesHorizontalFront;
    struct List_1_Moon_Timeline_MoonTimeline_* NonInterruptibleTimelinesHorizontalBack;
    struct List_1_Moon_Timeline_MoonTimeline_* NonInterruptibleTimelinesVerticalFront;
    struct List_1_Moon_Timeline_MoonTimeline_* NonInterruptibleTimelinesVerticalBack;
    float ignoreKickbackBehavioursTimeout;
    bool DirectionRelativeToTransform;
    struct Vector2 direction;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityHitReaction__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityHitReaction__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/AnimationPostprocess__Array.h>
#include <Modloader/app/structs/EntityHitReaction_KickbackMultiplierSet.h>
#include <Modloader/app/structs/EntityHitReaction_KickbackRuleOverrideForBehaviour__Array.h>
#include <Modloader/app/structs/EntityHitReaction_KickbackRuleOverride__Array.h>
#include <Modloader/app/structs/EntityReactionBehaviour.h>
#include <Modloader/app/structs/EntityTask__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimation__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoonTimeline__Array.h>
#include <Modloader/app/structs/PrefabProvider.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_EntityHitReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHitReaction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityHitReaction__Fields_FWDDECL)
#include <Modloader/app/structs/EntityHitReaction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityHitReaction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
