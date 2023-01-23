#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossHitReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossHitReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour_1_PetrifiedOwlBossEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour_1_PetrifiedOwlBossEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossHitReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct DirectionalHitReactionPostprocess;
struct RTPC;
struct List_1_DamageWeight_;
struct List_1_DamageType_;
struct AnimationAdditiveStrengthContext;
struct ContextSet;
struct CancellableController;
struct EntityDamageEvent;
struct Enum__Array;
struct PetrifiedOwlBossHitReactionBehaviour__Fields {
    struct EntityReactionBehaviour_1_PetrifiedOwlBossEntity___Fields _;
    struct MoonTimeline* Fight1Hit;
    struct MoonTimeline* Fight2Hit;
    struct MoonTimeline* Fight3Hit;
    struct MoonTimeline* HitAdditive;
    struct DirectionalHitReactionPostprocess* HitAdditiveDirectional;
    struct RTPC* DamageAmountRTPC;
    float HeavyDamageMultiplier;
    struct List_1_DamageWeight_* AdditiveDisallowedWeights;
    struct List_1_DamageType_* AdditiveDisallowedTypes;
    struct MoonTimeline* m_currentTimeline;
    bool m_isMirrored;
    struct AnimationAdditiveStrengthContext* m_additiveStrengthContext;
    struct ContextSet* m_timelineContext;
    struct CancellableController* m_cancellableController;
    struct EntityDamageEvent* DamageEvent;
    struct Enum__Array* Entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossHitReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossHitReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AnimationAdditiveStrengthContext.h>
#include <Modloader/app/structs/CancellableController.h>
#include <Modloader/app/structs/ContextSet.h>
#include <Modloader/app/structs/DirectionalHitReactionPostprocess.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/List_1_DamageType_.h>
#include <Modloader/app/structs/List_1_DamageWeight_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RTPC.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossHitReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossHitReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossHitReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossHitReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
